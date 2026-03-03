/**
 * @file        bdengine/file_hooks.cpp
 *
 * @brief       Native CRT File I/O Hooks. Replaces the game's recompiled PPC
 *              CRT wrappers (CreateFileA, ReadFile, SetFilePointer, etc.) with
 *              native implementations using std::fstream and std::filesystem.
 *
 *              All handles (file, find, kernel) live in the SDK's ObjectTable
 *              at 0xF8000000+. CloseHandle is a single ReleaseHandle call,
 *              the XNativeFile / XNativeFind destructors handle cleanup.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */

#include "bdengine/bd_init.h"
#include "bdengine/file.h"
#include "bdengine/file_cache.h"
#include "bdengine/ramdisk.h"

#include <rex/filesystem.h>
#include <rex/filesystem/entry.h>
#include <rex/logging.h>
#include <rex/ppc/function.h>
#include <rex/runtime.h>
#include <rex/system/kernel_state.h>

#include <cctype>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <memory>
#include <mutex>
#include <string>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <shlobj.h> // SHGetKnownFolderPath (save directory lookup only)
#endif
#include <algorithm>
#include <cstdint>
#include <ios>
#include <rex/ppc/context.h>
#include <rex/ppc/types.h>
#include <rex/system/info/volume.h>
#include <rex/system/info/file.h>
#include <rex/system/xevent.h>
#include <rex/system/xfile.h>
#include <rex/system/xio.h>
#include <rex/system/xtypes.h>
#include <rex/types.h>
#include <system_error>
#include <utility>
#include <vector>

using rex::X_HANDLE;

using namespace rex::ppc;
using namespace rex::system;

namespace {

// SDK filesystem constants
using rex::filesystem::FileAccess;
using rex::filesystem::kFileAttributeDirectory;
using rex::filesystem::kFileAttributeNormal;

// CreateFile dwCreationDisposition (Win32 values, no SDK equivalent)
constexpr uint32_t kCreateNew = 1;
constexpr uint32_t kCreateAlways = 2;
constexpr uint32_t kOpenExisting = 3;
constexpr uint32_t kOpenAlways = 4;
constexpr uint32_t kTruncateExisting = 5;

//=============================================================================
// Path translation
//=============================================================================

static std::filesystem::path g_game_dir;
static std::filesystem::path g_save_dir;

static std::pair<std::string, std::string>
SplitDevicePath(const char *xbox_path) {
  std::string full(xbox_path);
  auto colon_pos = full.find(':');
  if (colon_pos == std::string::npos)
    return {"", full};

  std::string device = full.substr(0, colon_pos);
  size_t start = colon_pos + 1;
  if (start < full.size() && (full[start] == '\\' || full[start] == '/'))
    start++;
  std::string rel = full.substr(start);

  for (auto &c : device)
    c = (char)tolower((unsigned char)c);

  return {device, rel};
}

static std::filesystem::path TranslatePath(const char *xbox_path) {
  // Handle paths starting with \Device (e.g. \Device\Image)
  std::string p = xbox_path;
  for (auto &c : p) {
    if (c == '\\')
      c = '/';
  }
  // Convert to lowercase for comparison
  std::string p_lower = p;
  for (auto &c : p_lower)
    c = (char)tolower((unsigned char)c);

  if (p_lower == "/device/image") {
    return g_game_dir / "default.xex";
  }

  // \Device\Harddisk0\PartitionN: map Partition1 to game dir, others to game dir root.
  // The rexkerneld VFS splits paths at \Device before symlink lookup so a
  // simple symlink cannot redirect \Device\Harddisk0 — we handle it here.
  if (p_lower.rfind("/device/harddisk0/", 0) == 0) {
    std::string rest = p_lower.substr(strlen("/device/harddisk0/"));
    if (rest.rfind("partition1", 0) == 0) {
      std::string after = rest.substr(strlen("partition1"));
      if (!after.empty() && (after[0] == '/' || after[0] == '\\'))
        after = after.substr(1);
      return g_game_dir / after;
    }
    // Partition0 (system) or other partitions: just return game dir so the
    // open succeeds (game usually only checks existence / device type).
    return g_game_dir;
  }

  auto [device, rel] = SplitDevicePath(xbox_path);

  // Normalize separators to forward slash (works on both platforms)
  for (auto &c : rel) {
    if (c == '\\')
      c = '/';
  }

  std::filesystem::path result;
  if (device == "save") {
    auto *rt = rex::Runtime::instance();
    if (rt && rt->kernel_state()) {
      auto *cm = rt->kernel_state()->content_manager();
      if (cm) {
        auto pkg_path = cm->GetOpenPackagePath("save");
        if (!pkg_path.empty()) {
          result = pkg_path / rel;
        }
      }
    }
    if (result.empty())
      result = g_save_dir / rel;
  } else if (device == "c") {
    // Map C: to our save directory (User Profiles)
    result = g_save_dir / rel;
  } else {
    // Strip kernel prefixes if present in absolute paths
    std::string r = rel;
    const char *prefix = "/Device/Harddisk0/Partition1";
    if (r.find(prefix) == 0) {
      r = r.substr(strlen(prefix));
      if (!r.empty() && r[0] == '/')
        r = r.substr(1);
    } else if (r.find("Device/Harddisk0/Partition1") == 0) {
      r = r.substr(strlen("Device/Harddisk0/Partition1"));
      if (!r.empty() && r[0] == '/')
        r = r.substr(1);
    }
    result = g_game_dir / r;
  }

  REXLOG_DEBUG("TranslatePath: {} -> {}", xbox_path, result.string());
  return result;
}

//=============================================================================
// Helper: get kernel state and object table
//=============================================================================
static rex::system::KernelState *KS() { return rex::system::kernel_state(); }

static rex::system::util::ObjectTable *OT() { return KS()->object_table(); }

// Map Win32 CreateFile parameters to std::ios::openmode.
static std::ios::openmode MapOpenMode(uint32_t access, uint32_t disposition) {
  bool write =
      (access & (FileAccess::kGenericWrite | FileAccess::kGenericAll)) != 0;
  std::ios::openmode mode = std::ios::binary;

  switch (disposition) {
  case kOpenExisting:
    // Open existing file. Fail if doesn't exist.
    mode |= std::ios::in;
    if (write)
      mode |= std::ios::out;
    break;
  case kCreateAlways:
    // Create or truncate.
    mode |= std::ios::in | std::ios::out | std::ios::trunc;
    break;
  case kCreateNew:
    // Create new. Caller must check exists() beforehand.
    mode |= std::ios::in | std::ios::out | std::ios::trunc;
    break;
  case kOpenAlways:
    // Open or create. Caller creates file first if missing.
    mode |= std::ios::in;
    if (write)
      mode |= std::ios::out;
    break;
  case kTruncateExisting:
    // Truncate existing. Fail if doesn't exist.
    mode |= std::ios::in | std::ios::out | std::ios::trunc;
    break;
  default:
    mode |= std::ios::in;
    if (write)
      mode |= std::ios::out;
    break;
  }
  return mode;
}

// Try to open as a cached read-only file.  Returns null on miss / not eligible.
static bd::XNativeFile *TryOpenCached(rex::system::KernelState *ks,
                                      const char *name, uint32_t access,
                                      uint32_t disposition) {
  // Only cache pure read-only opens of existing files
  bool read_only =
      (access & (FileAccess::kGenericWrite | FileAccess::kGenericAll)) == 0;
  bool open_existing = (disposition == kOpenExisting);
  if (!read_only || !open_existing)
    return nullptr;

  auto &cache = bd::GetFileCache();

  auto host_path = TranslatePath(name);
  std::string cache_key = host_path.string();

  // Cache hit?
  auto blob = cache.Get(cache_key);
  if (blob) {
    REXLOG_DEBUG("CreateFileA: CACHE HIT {}", name);
    return new bd::XNativeFile(ks, std::move(blob), name);
  }

  // Cache miss -- open, slurp if small enough, cache for next time.
  std::error_code ec;
  auto file_size = std::filesystem::file_size(host_path, ec);
  if (ec || file_size == 0 || file_size > cache.max_file_size())
    return nullptr;

  std::ifstream ifs(host_path, std::ios::binary);
  if (!ifs.is_open())
    return nullptr;

  std::vector<uint8_t> data(static_cast<size_t>(file_size));
  ifs.read(reinterpret_cast<char *>(data.data()),
           static_cast<std::streamsize>(data.size()));
  if (!ifs || static_cast<size_t>(ifs.gcount()) != data.size())
    return nullptr;

  cache.Put(cache_key, std::vector<uint8_t>(data)); // store in cache
  auto blob2 = cache.Get(cache_key);
  if (!blob2)
    return nullptr;

  REXLOG_DEBUG("CreateFileA: CACHED {} ({}KB)", name, data.size() / 1024);
  return new bd::XNativeFile(ks, std::move(blob2), name);
}

ppc_u32_result_t
XCreateFileA_entry(ppc_pchar_t lpFileName, ppc_u32_t dwDesiredAccess,
                   ppc_u32_t dwShareMode, ppc_pvoid_t lpSecurityAttributes,
                   ppc_u32_t dwCreationDisposition,
                   ppc_u32_t dwFlagsAndAttributes, ppc_u32_t hTemplateFile) {
  const char *name = (const char *)lpFileName;
  auto *ks = KS();
  uint32_t access = (uint32_t)dwDesiredAccess;
  uint32_t disp = (uint32_t)dwCreationDisposition;

  // Ramdisk path: cache:\ goes to in-memory store
  if (bd::IsCachePath(name)) {
    auto key = bd::NormalizeCachePath(name);
    bool exists = bd::RamdiskExists(key);

    if (disp == kOpenExisting && !exists) {
      REXLOG_DEBUG("CreateFileA: RAMDISK not found {}", name);
      return 0xFFFFFFFF;
    }

    auto blob = bd::RamdiskGetOrCreate(key);
    if (disp == kCreateAlways || disp == kTruncateExisting) {
      std::lock_guard lock(blob->mutex);
      blob->data.clear();
    }

    auto *xfile = new bd::XNativeFile(ks, blob, name, true);
    X_HANDLE guest_handle = X_INVALID_HANDLE_VALUE;
    ks->object_table()->AddHandle(xfile, &guest_handle);
    REXLOG_DEBUG("CreateFileA: {} -> 0x{:08X} (ramdisk{})", name, guest_handle,
                 exists ? "" : " new");
    return guest_handle;
  }

  // Try cache path for read-only opens
  if (auto *cached = TryOpenCached(ks, name, access, disp)) {
    X_HANDLE guest_handle = X_INVALID_HANDLE_VALUE;
    ks->object_table()->AddHandle(cached, &guest_handle);
    REXLOG_DEBUG("CreateFileA: {} -> 0x{:08X} (cached)", name, guest_handle);
    return guest_handle;
  }

  // Normal fstream path
  auto host_path = TranslatePath(name);

  // Handle dispositions that require existence checks
  std::error_code ec;
  bool file_exists = std::filesystem::exists(host_path, ec);

  if (disp == kOpenExisting && !file_exists) {
    REXLOG_DEBUG("CreateFileA: FAILED (not found) {}", name);
    return 0xFFFFFFFF;
  }
  if (disp == kTruncateExisting && !file_exists) {
    REXLOG_DEBUG("CreateFileA: FAILED (not found for truncate) {}", name);
    return 0xFFFFFFFF;
  }
  if (disp == kCreateNew && file_exists) {
    REXLOG_DEBUG("CreateFileA: FAILED (already exists) {}", name);
    return 0xFFFFFFFF;
  }

  // OPEN_ALWAYS: create the file first if it doesn't exist,
  // then open with in|out (fstream won't create with in|out alone).
  if (disp == kOpenAlways && !file_exists) {
    std::ofstream touch(host_path, std::ios::binary);
    touch.close();
  }

  auto mode = MapOpenMode(access, disp);
  std::fstream stream(host_path, mode);
  if (!stream.is_open()) {
    REXLOG_DEBUG("CreateFileA: FAILED (open) {}", name);
    return 0xFFFFFFFF;
  }

  auto *xfile = new bd::XNativeFile(ks, std::move(stream), host_path, name);
  X_HANDLE guest_handle = X_INVALID_HANDLE_VALUE;
  ks->object_table()->AddHandle(xfile, &guest_handle);

  REXLOG_DEBUG("CreateFileA: {} -> 0x{:08X}", name, guest_handle);
  return guest_handle;
}

} // end anonymous namespace

ppc_u32_result_t
XNtCreateFile_entry(ppc_pu32_t FileHandle, ppc_u32_t DesiredAccess,
                    ppc_pvoid_t ObjectAttributes, ppc_pvoid_t IoStatusBlock,
                    ppc_pvoid_t AllocationSize, ppc_u32_t FileAttributes,
                    ppc_u32_t ShareAccess, ppc_u32_t CreateDisposition,
                    ppc_u32_t CreateOptions) {
  auto *rt = rex::Runtime::instance();
  auto *mem = rt->memory();

  // Manually interpret headers to avoid header hell
  // struct X_OBJECT_ATTRIBUTES { be<u32> RootDirectory; be<u32> ObjectName; ...
  // }
  if (ObjectAttributes.guest_address() == 0)
    return 0xC000000D;

  uint8_t *oa_ptr =
      (uint8_t *)mem->TranslateVirtual(ObjectAttributes.guest_address());
  if (!oa_ptr)
    return 0xC000000D;

  uint32_t name_ptr = _byteswap_ulong(*(uint32_t *)(oa_ptr + 4));
  if (!name_ptr)
    return 0xC000000D;

  // struct X_ANSI_STRING { be<u16> Length; be<u16> MaxLength; be<u32> Pointer;
  // }
  uint8_t *as_ptr = (uint8_t *)mem->TranslateVirtual(name_ptr);
  if (!as_ptr)
    return 0xC000000D;

  uint32_t str_ptr = _byteswap_ulong(*(uint32_t *)(as_ptr + 4));
  if (!str_ptr)
    return 0xC000000D;

  const char *name = (const char *)mem->TranslateVirtual(str_ptr);

  // Forward to our CreateFileA implementation logic (roughly)
  // NtCreateFile disposition is different from Win32
  // Win32: 1=New, 2=Always, 3=Existing, 4=OpenAlways, 5=Truncate
  // NT: 0=Supersede, 1=Open, 2=Create, 3=OpenIf, 4=Overwrite, 5=OverwriteIf
  uint32_t win32_disp = 3; // Default to OpenExisting
  switch ((uint32_t)CreateDisposition) {
  case 0:
    win32_disp = 2;
    break; // Supersede -> CreateAlways
  case 1:
    win32_disp = 3;
    break; // Open -> OpenExisting
  case 2:
    win32_disp = 1;
    break; // Create -> CreateNew
  case 3:
    win32_disp = 4;
    break; // OpenIf -> OpenAlways
  case 4:
    win32_disp = 5;
    break; // Overwrite -> TruncateExisting
  case 5:
    win32_disp = 2;
    break; // OverwriteIf -> CreateAlways
  }

  // Reuse XCreateFileA_entry logic but return NTSTATUS
  ppc_pchar_t name_ppc((char *)mem->TranslateVirtual(str_ptr), str_ptr);

  uint32_t h = XCreateFileA_entry(name_ppc, DesiredAccess, ShareAccess, nullptr,
                                  win32_disp, FileAttributes, 0);

  if (h == 0xFFFFFFFF) {
    return 0xC000000F; // STATUS_NO_SUCH_FILE
  }

  if (FileHandle.guest_address()) {
    uint32_t *pOut =
        (uint32_t *)mem->TranslateVirtual(FileHandle.guest_address());
    if (pOut)
      *pOut = _byteswap_ulong(h);
  }

  return 0; // STATUS_SUCCESS
}

namespace {

ppc_u32_result_t XReadFile_entry(ppc_u32_t hFile, ppc_pvoid_t lpBuffer,
                                 ppc_u32_t nNumberOfBytesToRead,
                                 ppc_pu32_t lpNumberOfBytesRead,
                                 ppc_pvoid_t lpOverlapped) {
  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)hFile);
  if (!xfile) {
    REXLOG_WARN("ReadFile: invalid handle 0x{:08X}", (uint32_t)hFile);
    if (lpNumberOfBytesRead)
      *lpNumberOfBytesRead = 0;
    return 0;
  }

  // Ramdisk file: serve from in-memory blob
  if (xfile->is_ramdisk()) {
    if (lpOverlapped) {
      auto *ov_be = reinterpret_cast<rex::be<uint32_t> *>(
          (uint8_t *)(void *)lpOverlapped);
      uint64_t offset = (static_cast<uint64_t>((uint32_t)ov_be[3]) << 32) |
                        (uint32_t)ov_be[2];
      xfile->RamdiskSeekTo(offset);
    }
    uint32_t bytes_read =
        xfile->RamdiskRead((void *)lpBuffer, (uint32_t)nNumberOfBytesToRead);
    if (lpOverlapped) {
      auto *ov_be = reinterpret_cast<rex::be<uint32_t> *>(
          (uint8_t *)(void *)lpOverlapped);
      ov_be[0] = 0;
      ov_be[1] = bytes_read;
    } else if (lpNumberOfBytesRead) {
      *lpNumberOfBytesRead = bytes_read;
    }
    return 1;
  }

  // Cached file: serve from memory
  if (xfile->is_cached()) {
    if (lpOverlapped) {
      auto *ov_be = reinterpret_cast<rex::be<uint32_t> *>(
          (uint8_t *)(void *)lpOverlapped);
      uint64_t offset = (static_cast<uint64_t>((uint32_t)ov_be[3]) << 32) |
                        (uint32_t)ov_be[2];
      xfile->CachedSeekTo(offset);
    }
    uint32_t bytes_read =
        xfile->CachedRead((void *)lpBuffer, (uint32_t)nNumberOfBytesToRead);
    if (lpOverlapped) {
      auto *ov_be = reinterpret_cast<rex::be<uint32_t> *>(
          (uint8_t *)(void *)lpOverlapped);
      ov_be[0] = 0;
      ov_be[1] = bytes_read;
    } else if (lpNumberOfBytesRead) {
      *lpNumberOfBytesRead = bytes_read;
    }
    return 1;
  }

  // Normal fstream path
  auto &stream = xfile->stream();

  if (lpOverlapped) {
    auto *ov_be =
        reinterpret_cast<rex::be<uint32_t> *>((uint8_t *)(void *)lpOverlapped);
    uint32_t offset_lo = ov_be[2];
    uint32_t offset_hi = ov_be[3];
    int64_t offset = (static_cast<int64_t>(offset_hi) << 32) | offset_lo;
    stream.seekg(offset, std::ios::beg);
  }

  stream.read(reinterpret_cast<char *>((void *)lpBuffer),
              (uint32_t)nNumberOfBytesToRead);
  uint32_t bytes_read = static_cast<uint32_t>(stream.gcount());

  if (stream.eof() || stream.fail()) {
    stream.clear();
  }

  if (lpOverlapped) {
    auto *ov_be =
        reinterpret_cast<rex::be<uint32_t> *>((uint8_t *)(void *)lpOverlapped);
    ov_be[0] = 0;
    ov_be[1] = bytes_read;
  } else if (lpNumberOfBytesRead) {
    *lpNumberOfBytesRead = bytes_read;
  }
  return 1;
}

ppc_u32_result_t XWriteFile_entry(ppc_u32_t hFile, ppc_pvoid_t lpBuffer,
                                  ppc_u32_t nNumberOfBytesToWrite,
                                  ppc_pu32_t lpNumberOfBytesWritten,
                                  ppc_pvoid_t lpOverlapped) {
  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)hFile);
  if (!xfile) {
    if (lpNumberOfBytesWritten)
      *lpNumberOfBytesWritten = 0;
    return 0;
  }

  if (xfile->is_ramdisk()) {
    uint32_t written = xfile->RamdiskWrite((const void *)lpBuffer,
                                           (uint32_t)nNumberOfBytesToWrite);
    if (lpNumberOfBytesWritten)
      *lpNumberOfBytesWritten = written;
    return 1;
  }

  auto &stream = xfile->stream();
  auto pos_before = stream.tellp();
  stream.write(reinterpret_cast<const char *>((const void *)lpBuffer),
               (uint32_t)nNumberOfBytesToWrite);

  if (stream.fail()) {
    if (lpNumberOfBytesWritten)
      *lpNumberOfBytesWritten = 0;
    return 0;
  }

  uint32_t bytes_written = static_cast<uint32_t>(stream.tellp() - pos_before);
  if (lpNumberOfBytesWritten)
    *lpNumberOfBytesWritten = bytes_written;
  return 1;
}

ppc_u32_result_t XSetFilePointer_entry(ppc_u32_t hFile,
                                       ppc_u32_t lDistanceToMove,
                                       ppc_pu32_t lpDistanceToMoveHigh,
                                       ppc_u32_t dwMoveMethod) {
  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)hFile);
  if (!xfile)
    return 0xFFFFFFFF;

  if (xfile->is_ramdisk()) {
    uint32_t result = xfile->RamdiskSeek((int32_t)(uint32_t)lDistanceToMove,
                                         (uint32_t)dwMoveMethod);
    if (lpDistanceToMoveHigh)
      *lpDistanceToMoveHigh = 0;
    return result;
  }

  if (xfile->is_cached()) {
    uint32_t result = xfile->CachedSeek((int32_t)(uint32_t)lDistanceToMove,
                                        (uint32_t)dwMoveMethod);
    if (lpDistanceToMoveHigh)
      *lpDistanceToMoveHigh = 0;
    return result;
  }

  std::ios::seekdir dir;
  switch ((uint32_t)dwMoveMethod) {
  case bd::kSeekBegin:
    dir = std::ios::beg;
    break;
  case bd::kSeekCurrent:
    dir = std::ios::cur;
    break;
  case bd::kSeekEnd:
    dir = std::ios::end;
    break;
  default:
    return 0xFFFFFFFF;
  }

  int64_t distance = (int32_t)(uint32_t)lDistanceToMove;
  if (lpDistanceToMoveHigh) {
    distance |= static_cast<int64_t>((int32_t)(uint32_t)*lpDistanceToMoveHigh)
                << 32;
  }

  auto &stream = xfile->stream();
  stream.seekg(distance, dir);
  stream.seekp(distance, dir);

  if (stream.fail()) {
    stream.clear();
    return 0xFFFFFFFF;
  }

  auto pos = static_cast<uint64_t>(stream.tellg());
  if (lpDistanceToMoveHigh)
    *lpDistanceToMoveHigh = static_cast<uint32_t>(pos >> 32);

  return static_cast<uint32_t>(pos & 0xFFFFFFFF);
}

ppc_u32_result_t XGetFileSize_entry(ppc_u32_t hFile,
                                    ppc_pu32_t lpFileSizeHigh) {
  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)hFile);
  if (!xfile)
    return 0xFFFFFFFF;

  if (xfile->is_ramdisk()) {
    if (lpFileSizeHigh)
      *lpFileSizeHigh = 0;
    return static_cast<uint32_t>(xfile->RamdiskSize());
  }

  if (xfile->is_cached()) {
    if (lpFileSizeHigh)
      *lpFileSizeHigh = 0;
    return static_cast<uint32_t>(xfile->cached_size());
  }

  std::error_code ec;
  auto size = std::filesystem::file_size(xfile->host_path(), ec);
  if (ec)
    return 0xFFFFFFFF;

  if (lpFileSizeHigh)
    *lpFileSizeHigh = static_cast<uint32_t>(size >> 32);
  return static_cast<uint32_t>(size & 0xFFFFFFFF);
}

ppc_u32_result_t XGetFileSizeEx_entry(ppc_u32_t hFile, ppc_pvoid_t lpFileSize) {
  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)hFile);
  if (!xfile)
    return 0;

  if (xfile->is_ramdisk()) {
    if (lpFileSize) {
      auto *out =
          reinterpret_cast<rex::be<uint32_t> *>((uint8_t *)(void *)lpFileSize);
      out[0] = 0;
      out[1] = static_cast<uint32_t>(xfile->RamdiskSize());
    }
    return 1;
  }

  if (xfile->is_cached()) {
    if (lpFileSize) {
      auto *out =
          reinterpret_cast<rex::be<uint32_t> *>((uint8_t *)(void *)lpFileSize);
      out[0] = 0;
      out[1] = static_cast<uint32_t>(xfile->cached_size());
    }
    return 1;
  }

  std::error_code ec;
  auto size = std::filesystem::file_size(xfile->host_path(), ec);
  if (ec)
    return 0;

  if (lpFileSize) {
    auto *out =
        reinterpret_cast<rex::be<uint32_t> *>((uint8_t *)(void *)lpFileSize);
    out[0] = static_cast<uint32_t>(size >> 32);
    out[1] = static_cast<uint32_t>(size & 0xFFFFFFFF);
  }
  return 1;
}

ppc_u32_result_t XSetEndOfFile_entry(ppc_u32_t hFile) {
  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)hFile);
  if (!xfile)
    return 0;
  if (xfile->is_ramdisk())
    return xfile->RamdiskSetEndOfFile() ? 1u : 0u;

  auto &stream = xfile->stream();
  stream.flush();
  auto pos = static_cast<uintmax_t>(stream.tellp());
  std::error_code ec;
  std::filesystem::resize_file(xfile->host_path(), pos, ec);
  return ec ? 0u : 1u;
}

ppc_u32_result_t XFlushFileBuffers_entry(ppc_u32_t hFile) {
  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)hFile);
  if (!xfile)
    return 0;
  if (xfile->is_ramdisk())
    return 1;
  if (xfile->is_cached())
    return 1;
  xfile->stream().flush();
  return 1;
}

ppc_u32_result_t XDeleteFileA_entry(ppc_pchar_t lpFileName) {
  const char *name = (const char *)lpFileName;

  if (bd::IsCachePath(name)) {
    auto key = bd::NormalizeCachePath(name);
    bool ok = bd::RamdiskDelete(key);
    REXLOG_DEBUG("DeleteFileA: {} (ramdisk {})", name, ok ? "OK" : "not found");
    return ok ? 1u : 0u;
  }

  auto host_path = TranslatePath(name);
  std::error_code ec;
  bool ok = std::filesystem::remove(host_path, ec);
  if (!ok) {
    REXLOG_DEBUG("DeleteFileA: FAILED {}", name);
  }
  return ok ? 1u : 0u;
}

ppc_u32_result_t XSetFileAttributesA_entry(ppc_pchar_t lpFileName,
                                           ppc_u32_t dwFileAttributes) {
  (void)lpFileName;
  (void)dwFileAttributes;
  return 1;
}

ppc_u32_result_t XCreateDirectoryA_entry(ppc_pchar_t lpPathName,
                                         ppc_pvoid_t lpSecurityAttributes) {
  const char *name = (const char *)lpPathName;

  if (bd::IsCachePath(name))
    return 1;

  auto host_path = TranslatePath(name);
  std::error_code ec;
  std::filesystem::create_directory(host_path, ec);
  if (ec && ec != std::errc::file_exists) {
    REXLOG_DEBUG("CreateDirectoryA: FAILED {}", name);
    return 0;
  }
  return 1;
}

ppc_u32_result_t XMoveFileA_entry(ppc_pchar_t lpExistingFileName,
                                  ppc_pchar_t lpNewFileName) {
  const char *src = (const char *)lpExistingFileName;
  const char *dst = (const char *)lpNewFileName;

  if (bd::IsCachePath(src) && bd::IsCachePath(dst)) {
    auto src_key = bd::NormalizeCachePath(src);
    auto dst_key = bd::NormalizeCachePath(dst);
    bool ok = bd::RamdiskRename(src_key, dst_key);
    REXLOG_DEBUG("MoveFileA: {} -> {} (ramdisk {})", src, dst,
                 ok ? "OK" : "FAILED");
    return ok ? 1u : 0u;
  }

  auto host_src = TranslatePath(src);
  auto host_dst = TranslatePath(dst);
  std::error_code ec;
  std::filesystem::rename(host_src, host_dst, ec);
  if (ec) {
    REXLOG_DEBUG("MoveFileA: FAILED {} -> {}", src, dst);
    return 0;
  }
  return 1;
}

ppc_u32_result_t XCloseHandle_entry(ppc_u32_t hObject) {
  uint32_t h = (uint32_t)hObject;

  if (h == 0xFFFFFFFF || h == 0)
    return 0;

  auto *ot = OT();
  if (!ot)
    return 0;

  auto status = ot->ReleaseHandle(h);
  if (XFAILED(status)) {
    REXLOG_WARN("CloseHandle: unknown handle 0x{:08X}", h);
    return 0;
  }
  return 1;
}

static void FillGuestFindData(uint8_t *dst,
                              const std::filesystem::directory_entry &entry) {
  memset(dst, 0, 0x140);
  auto *be32 = reinterpret_cast<rex::be<uint32_t> *>(dst);
  uint32_t attrs =
      entry.is_directory() ? kFileAttributeDirectory : kFileAttributeNormal;
  be32[0] = attrs;
  if (!entry.is_directory()) {
    std::error_code ec;
    auto size = entry.file_size(ec);
    if (!ec) {
      be32[7] = static_cast<uint32_t>(size >> 32);
      be32[8] = static_cast<uint32_t>(size & 0xFFFFFFFF);
    }
  }
  std::string filename = entry.path().filename().string();
  size_t copy_len = std::min<size_t>(filename.size(), 259);
  std::memcpy(dst + 0x2C, filename.c_str(), copy_len);
  dst[0x2C + copy_len] = '\0';
}

ppc_u32_result_t XFindFirstFileA_entry(ppc_pchar_t lpFileName,
                                       ppc_pvoid_t lpFindFileData) {
  const char *name = (const char *)lpFileName;
  auto host_path = TranslatePath(name);
  auto parent = host_path.parent_path();
  auto pattern = host_path.filename().string();

  std::error_code ec;
  if (!std::filesystem::is_directory(parent, ec)) {
    REXLOG_DEBUG("FindFirstFileA: dir not found {}", name);
    return 0xFFFFFFFF;
  }

  std::filesystem::directory_iterator iter(parent, ec);
  if (ec) {
    REXLOG_DEBUG("FindFirstFileA: cannot iterate {}", name);
    return 0xFFFFFFFF;
  }

  std::filesystem::directory_iterator end;
  while (iter != end) {
    if (bd::XNativeFind::GlobMatch(pattern, iter->path().filename().string()))
      break;
    ++iter;
  }

  if (iter == end) {
    REXLOG_DEBUG("FindFirstFileA: not found {}", name);
    return 0xFFFFFFFF;
  }

  FillGuestFindData((uint8_t *)(void *)lpFindFileData, *iter);

  auto *ks = KS();
  auto *xfind = new bd::XNativeFind(ks, std::move(iter), pattern);
  X_HANDLE guest_handle = X_INVALID_HANDLE_VALUE;
  ks->object_table()->AddHandle(xfind, &guest_handle);

  REXLOG_DEBUG("FindFirstFileA: {} -> 0x{:08X}", name, guest_handle);
  return guest_handle;
}

ppc_u32_result_t XFindNextFileA_entry(ppc_u32_t hFindFile,
                                      ppc_pvoid_t lpFindFileData) {
  auto xfind =
      OT()->LookupObject<bd::XNativeFind>((X_HANDLE)(uint32_t)hFindFile);
  if (!xfind)
    return 0;

  if (!xfind->Next())
    return 0;

  FillGuestFindData((uint8_t *)(void *)lpFindFileData, xfind->current());
  return 1;
}

} // namespace

namespace bd {

std::filesystem::path GetUserContentRoot() {
#ifdef _WIN32
  PWSTR path = nullptr;
  if (SUCCEEDED(SHGetKnownFolderPath(FOLDERID_Documents, 0, nullptr, &path))) {
    std::filesystem::path result(path);
    CoTaskMemFree(path);
    return result / "umvc3_recomp";
  }
  if (const char *profile = std::getenv("USERPROFILE")) {
    return std::filesystem::path(profile) / "Documents" / "umvc3_recomp";
  }
  return {};
#else
  if (const char *xdg = std::getenv("XDG_DATA_HOME")) {
    return std::filesystem::path(xdg) / "umvc3_recomp";
  }
  if (const char *home = std::getenv("HOME")) {
    return std::filesystem::path(home) / ".local" / "share" / "umvc3_recomp";
  }
  return {};
#endif
}

} // namespace bd

namespace bd {

void InitFileHooks(const std::filesystem::path &game_dir) {
  g_game_dir = game_dir;
  auto user_content_root = GetUserContentRoot();
  if (!user_content_root.empty()) {
    g_save_dir = user_content_root / "4D5307DF" / "00000001";
  } else {
    g_save_dir = g_game_dir / "4D5307DF" / "00000001";
  }

  REXLOG_INFO("File I/O hooks initialized");
  REXLOG_INFO("  game_dir: {}", g_game_dir.string());
  REXLOG_INFO("  save_dir: {}", g_save_dir.string());
}

} // namespace bd

PPC_HOOK(rex_CreateFileA, XCreateFileA_entry)
PPC_HOOK(rex_ReadFile, XReadFile_entry)
PPC_HOOK(rex_WriteFile, XWriteFile_entry)
PPC_HOOK(rex_SetFilePointer, XSetFilePointer_entry)
PPC_HOOK(rex_SetEndOfFile, XSetEndOfFile_entry)
PPC_HOOK(rex_GetFileSize, XGetFileSize_entry)
PPC_HOOK(rex_GetFileSizeEx, XGetFileSizeEx_entry)
PPC_HOOK(rex_FlushFileBuffers, XFlushFileBuffers_entry)
PPC_HOOK(rex_DeleteFileA, XDeleteFileA_entry)
PPC_HOOK(rex_CloseHandle, XCloseHandle_entry)
PPC_HOOK(rex_FindFirstFileA, XFindFirstFileA_entry)
PPC_HOOK(rex_FindNextFileA, XFindNextFileA_entry)
PPC_HOOK(rex_SetFileAttributesA, XSetFileAttributesA_entry)
PPC_HOOK(rex_CreateDirectoryA, XCreateDirectoryA_entry)
PPC_HOOK(rex_MoveFileA, XMoveFileA_entry)
PPC_HOOK(rex_NtCreateFile, XNtCreateFile_entry)

// =============================================================================
// NtOpenFile: NO LONGER HOOKED (sessão 7)
// The d:/D: symlink double-nativeXenon bug is now fixed. rexkerneld's VFS
// correctly resolves NtOpenFile paths (d:\nativeXenon\... → game_dir/nativeXenon/...).
// Hooking NtOpenFile was creating a bd::XNativeFile handle but rexkerneld's own
// NtOpenFile post-processing does LookupObject<XFile> on the returned handle,
// causing a type mismatch (XNativeFile type=100 ≠ XFile type=3) and file read failure.
// Fix: let rexkerneld handle NtOpenFile natively (creates XFile handle).
//      XNtReadFile_entry and XNtQueryInformationFile_entry now have XFile fallthrough.
// =============================================================================
// PPC_HOOK(__imp__NtOpenFile, XNtOpenFile_entry)  ← REMOVED

// =============================================================================
// NtQueryVolumeInformationFile — full native override.
// rexkerneld.lib's xboxkrnl_info.cpp hits assert_always() in the
// XFileFsDeviceInformation (case 4) branch (line 706); we implement all
// cases ourselves so the missing case is handled correctly.
// =============================================================================
static ppc_u32_result_t XNtQueryVolumeInformationFile_entry(
    ppc_u32_t file_handle,
    ppc_ptr_t<rex::system::X_IO_STATUS_BLOCK> io_status_block_ptr,
    ppc_pvoid_t info_ptr,
    ppc_u32_t info_length,
    ppc_u32_t info_class_val) {
  using namespace rex::system;
  using rex::X_STATUS;
  using rex::be;

  const uint32_t info_class = uint32_t(info_class_val);
  const uint32_t info_len   = uint32_t(info_length);

  auto set_iosb = [&](X_STATUS s, uint32_t information) {
    if (io_status_block_ptr) {
      io_status_block_ptr->status      = s;
      io_status_block_ptr->information = information;
    }
  };

  switch (info_class) {
    case XFileFsVolumeInformation: {
      if (info_len < sizeof(X_FILE_FS_VOLUME_INFORMATION))
        return X_STATUS_INFO_LENGTH_MISMATCH;
      info_ptr.Zero(info_len);
      auto* info = info_ptr.as<X_FILE_FS_VOLUME_INFORMATION*>();
      info->creation_time    = 0;
      info->serial_number    = 0xDEADBEEF;
      info->supports_objects = 0;
      info->label_length     = 0;
      uint32_t out_len = offsetof(X_FILE_FS_VOLUME_INFORMATION, label);
      set_iosb(X_STATUS_SUCCESS, out_len);
      return X_STATUS_SUCCESS;
    }
    case XFileFsSizeInformation: {
      if (info_len < sizeof(X_FILE_FS_SIZE_INFORMATION))
        return X_STATUS_INFO_LENGTH_MISMATCH;
      info_ptr.Zero(info_len);
      auto* info = info_ptr.as<X_FILE_FS_SIZE_INFORMATION*>();
      info->total_allocation_units      = 0x100000; // ~2 GB virtual disk
      info->available_allocation_units  = 0x080000;
      info->sectors_per_allocation_unit = 8;
      info->bytes_per_sector            = 0x200;   // MUST be 0x200 (XCTD assertion)
      set_iosb(X_STATUS_SUCCESS, uint32_t(sizeof(*info)));
      return X_STATUS_SUCCESS;
    }
    case XFileFsDeviceInformation: {
      // This case is missing from rexkerneld.lib (triggers assert_always at line 706).
      if (info_len < 8)
        return X_STATUS_INFO_LENGTH_MISMATCH;
      info_ptr.Zero(info_len);
      // X_FILE_FS_DEVICE_INFORMATION: { be<uint32_t> DeviceType, Characteristics }
      auto* p = info_ptr.as<be<uint32_t>*>();
      p[0] = 7; // FILE_DEVICE_DISK
      p[1] = 0; // no special characteristics
      set_iosb(X_STATUS_SUCCESS, 8);
      return X_STATUS_SUCCESS;
    }
    case XFileFsAttributeInformation: {
      if (info_len < sizeof(X_FILE_FS_ATTRIBUTE_INFORMATION))
        return X_STATUS_INFO_LENGTH_MISMATCH;
      info_ptr.Zero(info_len);
      auto* info = info_ptr.as<X_FILE_FS_ATTRIBUTE_INFORMATION*>();
      info->attributes                = 2; // FILE_CASE_PRESERVED_NAMES
      info->component_name_max_length = 255;
      info->name_length               = 3;
      if (info_len >= 12 + 3) {
        info->name[0] = 'F'; info->name[1] = 'A'; info->name[2] = 'T';
      }
      uint32_t out_len = offsetof(X_FILE_FS_ATTRIBUTE_INFORMATION, name) + 3;
      set_iosb(X_STATUS_SUCCESS, out_len);
      return X_STATUS_SUCCESS;
    }
    default:
      REXLOG_WARN("NtQueryVolumeInformationFile: unhandled info_class {:#x}",
                  info_class);
      return X_STATUS_INVALID_INFO_CLASS;
  }
}

PPC_HOOK(__imp__NtQueryVolumeInformationFile, XNtQueryVolumeInformationFile_entry)

// =============================================================================
// NtDeviceIoControlFile — override rexkerneld's stub.
// rexkerneld handles only 0x70000 and 0x74004.  UMVC3 additionally issues
// IOCTL 0x24400 (CTL_CODE(FILE_DEVICE_CD_ROM, 0x100, METHOD_BUFFERED,
// FILE_READ_ACCESS)) which is the Xbox 360 disc-authentication IOCTL sent to
// \Device\Image.  Without a valid reply the STFS verification code (at guest
// address 82F333F8) loops forever.  We bypass authentication and return
// success so the game can proceed to mount the content.
// =============================================================================
static ppc_u32_result_t XNtDeviceIoControlFile_entry(
    ppc_u32_t handle,           // file/device handle
    ppc_u32_t event_handle,     // optional event to signal on completion
    ppc_u32_t apc_routine,      // optional APC routine (ignored)
    ppc_u32_t apc_context,      // optional APC context (ignored)
    ppc_ptr_t<rex::system::X_IO_STATUS_BLOCK> iosb_ptr,
    ppc_u32_t io_control_code,
    ppc_pvoid_t input_buffer,   ppc_u32_t input_buffer_len,
    ppc_pvoid_t output_buffer,  ppc_u32_t output_buffer_len) {
  using rex::X_STATUS;
  using rex::be;

  const uint32_t ioctl   = (uint32_t)io_control_code;
  const uint32_t out_len = (uint32_t)output_buffer_len;

  auto set_iosb = [&](X_STATUS s, uint32_t info) {
    if (iosb_ptr) {
      iosb_ptr->status      = s;
      iosb_ptr->information = info;
    }
  };

  switch (ioctl) {
    case 0x24400: {
      // CTL_CODE(FILE_DEVICE_CD_ROM=2, 0x100, METHOD_BUFFERED, FILE_READ_ACCESS=1)
      // Xbox 360 disc-authentication IOCTL sent to \Device\Image.
      // We impersonate a valid authenticated disc by returning SUCCESS and
      // leaving the output buffer zeroed (the game only checks the NTSTATUS).
      REXLOG_INFO(
          "NtDeviceIoControlFile(0x24400): bypassing disc-auth for \\Device\\Image");
      if (output_buffer && out_len > 0)
        output_buffer.Zero(out_len);
      set_iosb(X_STATUS_SUCCESS, 0);
      return X_STATUS_SUCCESS;
    }
    case 0x70000: {
      // IOCTL_DISK_GET_DRIVE_GEOMETRY
      // Used by XMountUtilityDrive cache-mounting code.
      if (out_len < 8) {
        set_iosb(X_STATUS_BUFFER_TOO_SMALL, 0);
        return X_STATUS_BUFFER_TOO_SMALL;
      }
      output_buffer.Zero(out_len);
      auto* out = output_buffer.as<be<uint32_t>*>();
      out[0] = 0xFF000u / 512u; // sector count
      out[1] = 512u;            // bytes per sector
      set_iosb(X_STATUS_SUCCESS, 8);
      return X_STATUS_SUCCESS;
    }
    case 0x74004: {
      // IOCTL_DISK_GET_PARTITION_INFO
      if (out_len < 16) {
        set_iosb(X_STATUS_BUFFER_TOO_SMALL, 0);
        return X_STATUS_BUFFER_TOO_SMALL;
      }
      output_buffer.Zero(out_len);
      auto* out64 = output_buffer.as<be<uint64_t>*>();
      out64[0] = 0;             // starting offset
      out64[1] = 0xFF000ULL;   // partition length
      set_iosb(X_STATUS_SUCCESS, 16);
      return X_STATUS_SUCCESS;
    }
    default:
      REXLOG_WARN("NtDeviceIoControlFile(0x{:X}) - unhandled IOCTL", ioctl);
      set_iosb(X_STATUS_INVALID_PARAMETER, 0);
      return X_STATUS_INVALID_PARAMETER;
  }
}

PPC_HOOK(__imp__NtDeviceIoControlFile, XNtDeviceIoControlFile_entry)

// =============================================================================
// NtQueryInformationFile — override rexkerneld stub.
// rexkerneld hits assert_always() for XFileBasicInformation and does not
// implement XFileStandardInformation at all.  UMVC3 calls both frequently
// (e.g. for every opened content file).  We serve them from our XNativeFile
// objects' filesystem metadata so the game gets valid size / attribute data.
// =============================================================================

// Structures not in rexglu's file.h
#pragma pack(push, 1)
struct X_FILE_BASIC_INFORMATION {
  rex::be<uint64_t> creation_time;
  rex::be<uint64_t> last_access_time;
  rex::be<uint64_t> last_write_time;
  rex::be<uint64_t> change_time;
  rex::be<uint32_t> attributes;  // FILE_ATTRIBUTE_*
  uint32_t _pad;
};
static_assert(sizeof(X_FILE_BASIC_INFORMATION) == 40, "");

struct X_FILE_STANDARD_INFORMATION {
  rex::be<uint64_t> allocation_size;
  rex::be<uint64_t> end_of_file;
  rex::be<uint32_t> number_of_links;
  uint8_t delete_pending;
  uint8_t directory;
  uint16_t _pad;
};
static_assert(sizeof(X_FILE_STANDARD_INFORMATION) == 24, "");
#pragma pack(pop)

// Convert std::filesystem::file_time_type to Windows FILETIME
// (100-nanosecond intervals since 1601-01-01).
// On MSVC the file_time_type epoch IS the Windows FILETIME epoch so a plain
// count() conversion is correct.
static uint64_t NativeToWindowsFileTime(
    std::filesystem::file_time_type ft) noexcept {
#if defined(_MSC_VER)
  // MSVC: duration tick period = 100 ns, epoch = 1601-01-01 (FILETIME epoch)
  return static_cast<uint64_t>(ft.time_since_epoch().count());
#else
  // Assume 1-ns ticks relative to 1970-01-01 (most Unix implementations)
  auto dur = ft.time_since_epoch();
  uint64_t ns100 =
      static_cast<uint64_t>(
          std::chrono::duration_cast<
              std::chrono::duration<uint64_t, std::ratio<1, 10000000>>>(dur)
              .count());
  return ns100 + 116444736000000000ULL; // offset 1601→1970
#endif
}

static ppc_u32_result_t XNtQueryInformationFile_entry(
    ppc_u32_t file_handle,
    ppc_ptr_t<rex::system::X_IO_STATUS_BLOCK> iosb_ptr,
    ppc_pvoid_t info_ptr,
    ppc_u32_t info_length,
    ppc_u32_t info_class_val) {
  using rex::X_STATUS;
  using rex::be;
  using namespace rex::system;

  const uint32_t info_class = (uint32_t)info_class_val;
  const uint32_t info_len   = (uint32_t)info_length;

  auto set_iosb = [&](X_STATUS s, uint32_t info) {
    if (iosb_ptr) {
      iosb_ptr->status      = s;
      iosb_ptr->information = info;
    }
  };

  auto xfile =
      OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)file_handle);
  if (!xfile) {
    // Fallthrough: XFile handle (opened via rexkerneld NtOpenFile VFS)
    // For XFile we can supply basic information from the VFS entry.
    auto rxfile = OT()->LookupObject<rex::system::XFile>((X_HANDLE)(uint32_t)file_handle);
    if (!rxfile) {
      set_iosb(X_STATUS_INVALID_HANDLE, 0);
      return X_STATUS_INVALID_HANDLE;
    }
    // Minimal info for XFile: we only need Standard (file size) and Basic (attrs).
    const uint32_t ic = info_class;
    info_ptr.Zero(info_len);
    if (ic == XFileStandardInformation) { // 5
      if (info_len < sizeof(X_FILE_STANDARD_INFORMATION)) {
        set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0);
        return X_STATUS_INFO_LENGTH_MISMATCH;
      }
      auto* info = info_ptr.as<X_FILE_STANDARD_INFORMATION*>();
      // Query file size via the VFS File entry
      auto* fe = rxfile->file();
      uint64_t fsz = fe ? fe->entry()->size() : 0;
      info->end_of_file    = fsz;
      info->allocation_size = (fsz + 4095) & ~uint64_t(4095);
      info->number_of_links = 1;
      info->delete_pending  = 0;
      info->directory       = 0;
      set_iosb(X_STATUS_SUCCESS, sizeof(X_FILE_STANDARD_INFORMATION));
      return X_STATUS_SUCCESS;
    }
    if (ic == XFileBasicInformation) { // 4
      if (info_len < sizeof(X_FILE_BASIC_INFORMATION)) {
        set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0);
        return X_STATUS_INFO_LENGTH_MISMATCH;
      }
      auto* info = info_ptr.as<X_FILE_BASIC_INFORMATION*>();
      info->creation_time    = 0;
      info->last_access_time = 0;
      info->last_write_time  = 0;
      info->change_time      = 0;
      info->attributes       = 0x20u; // FILE_ATTRIBUTE_ARCHIVE
      info->_pad             = 0;
      set_iosb(X_STATUS_SUCCESS, sizeof(X_FILE_BASIC_INFORMATION));
      return X_STATUS_SUCCESS;
    }
    // Other info classes: return unsupported
    set_iosb(X_STATUS_INVALID_INFO_CLASS, 0);
    return X_STATUS_INVALID_INFO_CLASS;
  }

  info_ptr.Zero(info_len);

  switch (info_class) {
    case XFileBasicInformation: { // 4
      if (info_len < sizeof(X_FILE_BASIC_INFORMATION)) {
        set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0);
        return X_STATUS_INFO_LENGTH_MISMATCH;
      }
      auto* info = info_ptr.as<X_FILE_BASIC_INFORMATION*>();
      uint64_t ts = 0;
      const auto& hp = xfile->host_path();
      if (!hp.empty()) {
        std::error_code ec;
        auto wt = std::filesystem::last_write_time(hp, ec);
        if (!ec) ts = NativeToWindowsFileTime(wt);
      }
      info->creation_time    = ts;
      info->last_access_time = ts;
      info->last_write_time  = ts;
      info->change_time      = ts;
      info->attributes       = xfile->is_dir() ? 0x10u : 0x80u;
      info->_pad             = 0;
      set_iosb(X_STATUS_SUCCESS, sizeof(X_FILE_BASIC_INFORMATION));
      return X_STATUS_SUCCESS;
    }
    case XFileStandardInformation: { // 5
      if (info_len < sizeof(X_FILE_STANDARD_INFORMATION)) {
        set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0);
        return X_STATUS_INFO_LENGTH_MISMATCH;
      }
      auto* info = info_ptr.as<X_FILE_STANDARD_INFORMATION*>();
      uint64_t size  = xfile->file_size();
      uint64_t alloc = (size + 511u) & ~uint64_t(511u);
      info->allocation_size  = alloc;
      info->end_of_file      = size;
      info->number_of_links  = 1;
      info->delete_pending   = 0;
      info->directory        = xfile->is_dir() ? 1u : 0u;
      info->_pad             = 0;
      set_iosb(X_STATUS_SUCCESS, sizeof(X_FILE_STANDARD_INFORMATION));
      return X_STATUS_SUCCESS;
    }
    case XFileInternalInformation: { // 6
      if (info_len < 8) { set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0); return X_STATUS_INFO_LENGTH_MISMATCH; }
      auto* info = info_ptr.as<be<uint64_t>*>();
      *info = 0; // opaque index
      set_iosb(X_STATUS_SUCCESS, 8);
      return X_STATUS_SUCCESS;
    }
    case XFilePositionInformation: { // 14
      if (info_len < sizeof(X_FILE_POSITION_INFORMATION)) {
        set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0);
        return X_STATUS_INFO_LENGTH_MISMATCH;
      }
      auto* info = info_ptr.as<X_FILE_POSITION_INFORMATION*>();
      info->current_byte_offset = xfile->position();
      set_iosb(X_STATUS_SUCCESS, sizeof(X_FILE_POSITION_INFORMATION));
      return X_STATUS_SUCCESS;
    }
    case XFileAlignmentInformation: { // 17
      if (info_len < 4) { set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0); return X_STATUS_INFO_LENGTH_MISMATCH; }
      auto* info = info_ptr.as<be<uint32_t>*>();
      *info = 0; // FILE_BYTE_ALIGNMENT
      set_iosb(X_STATUS_SUCCESS, 4);
      return X_STATUS_SUCCESS;
    }
    case XFileNetworkOpenInformation: { // 34
      if (info_len < sizeof(X_FILE_NETWORK_OPEN_INFORMATION)) {
        set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0);
        return X_STATUS_INFO_LENGTH_MISMATCH;
      }
      auto* info = info_ptr.as<X_FILE_NETWORK_OPEN_INFORMATION*>();
      const auto& hp = xfile->host_path();
      uint64_t ts = 0, size = xfile->file_size();
      if (!hp.empty()) {
        std::error_code ec;
        auto wt = std::filesystem::last_write_time(hp, ec);
        if (!ec) ts = NativeToWindowsFileTime(wt);
        auto sz = std::filesystem::file_size(hp, ec);
        if (!ec) size = sz;
      }
      uint64_t alloc = (size + 511u) & ~uint64_t(511u);
      info->creation_time    = ts;
      info->last_access_time = ts;
      info->last_write_time  = ts;
      info->change_time      = ts;
      info->allocation_size  = alloc;
      info->end_of_file      = size;
      info->attributes       = xfile->is_dir() ? 0x10u : 0x80u;
      info->pad              = 0;
      set_iosb(X_STATUS_SUCCESS, sizeof(X_FILE_NETWORK_OPEN_INFORMATION));
      return X_STATUS_SUCCESS;
    }
    default:
      REXLOG_WARN("NtQueryInformationFile: unhandled info_class {:#x}", info_class);
      set_iosb(X_STATUS_INVALID_INFO_CLASS, 0);
      return X_STATUS_INVALID_INFO_CLASS;
  }
}

PPC_HOOK(__imp__NtQueryInformationFile, XNtQueryInformationFile_entry)

// =============================================================================
// NtReadFile (ordinal 0xF0)
//
// rexkerneld's implementation calls LookupObject<XFile> which returns nullptr
// for our bd::XNativeFile handles (kObjectType=100 ≠ XObject::Type::File=3),
// causing it to return X_STATUS_INVALID_HANDLE → game triggers dirty-disc error.
// We override with our own lookup using LookupObject<bd::XNativeFile>.
// =============================================================================
static ppc_u32_result_t XNtReadFile_entry(
    ppc_u32_t file_handle,
    ppc_u32_t event_handle,
    ppc_pvoid_t /*apc_routine_ptr*/,
    ppc_pvoid_t /*apc_context*/,
    ppc_ptr_t<rex::system::X_IO_STATUS_BLOCK> io_status_block,
    ppc_pvoid_t buffer,
    ppc_u32_t buffer_length,
    ppc_pu64_t byte_offset_ptr) {
  using namespace rex::system;
  using rex::X_STATUS;

  auto set_iosb = [&](X_STATUS s, uint32_t info) {
    if (io_status_block) {
      io_status_block->status      = s;
      io_status_block->information = info;
    }
  };

  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)file_handle);
  if (!xfile) {
    // Fallthrough: file was opened via rexkerneld's NtOpenFile VFS (XFile handle, type=3)
    auto rxfile = OT()->LookupObject<rex::system::XFile>((X_HANDLE)(uint32_t)file_handle);
    if (!rxfile) {
      REXLOG_WARN("NtReadFile: no file for handle 0x{:08X} (not XNativeFile nor XFile)",
                  (uint32_t)file_handle);
      set_iosb(X_STATUS_INVALID_HANDLE, 0);
      return X_STATUS_INVALID_HANDLE;
    }
    // Delegate to rexkerneld XFile::Read
    const uint32_t bytes_requested_xf = (uint32_t)buffer_length;
    uint64_t offset_xf = byte_offset_ptr ? static_cast<uint64_t>(*byte_offset_ptr)
                                          : static_cast<uint64_t>(-1);
    if (offset_xf == 0xFFFFFFFFFFFFFFFFull) offset_xf = static_cast<uint64_t>(-1);
    uint32_t bytes_read_xf = 0;
    rex::X_STATUS result_xf = rxfile->Read(
        buffer ? buffer.guest_address() : 0, bytes_requested_xf,
        offset_xf, &bytes_read_xf, 0);
    set_iosb(result_xf, bytes_read_xf);
    if (event_handle) {
      auto ev = OT()->LookupObject<rex::system::XEvent>((X_HANDLE)(uint32_t)event_handle);
      if (ev) ev->Set(0, false);
    }
    return result_xf;
  }

  // Seek to byte_offset if provided (0xFFFFFFFFFFFFFFFF = use current position)
  if (byte_offset_ptr) {
    uint64_t offset = static_cast<uint64_t>(*byte_offset_ptr);
    if (offset != 0xFFFFFFFFFFFFFFFFull) {
      if (xfile->is_ramdisk())     xfile->RamdiskSeekTo(offset);
      else if (xfile->is_cached()) xfile->CachedSeekTo(offset);
      else                         xfile->stream().seekg(
                                       static_cast<std::streamoff>(offset), std::ios::beg);
    }
  }

  const uint32_t bytes_requested = (uint32_t)buffer_length;
  void* host_buf = buffer ? (void*)buffer : nullptr;
  uint32_t bytes_read = 0;

  if (host_buf && bytes_requested > 0) {
    if (xfile->is_ramdisk()) {
      bytes_read = xfile->RamdiskRead(host_buf, bytes_requested);
    } else if (xfile->is_cached()) {
      bytes_read = xfile->CachedRead(host_buf, bytes_requested);
    } else {
      auto& s = xfile->stream();
      s.read(reinterpret_cast<char*>(host_buf), bytes_requested);
      bytes_read = static_cast<uint32_t>(s.gcount());
      if (s.eof() || s.fail()) s.clear();
    }
  }

  set_iosb(X_STATUS_SUCCESS, bytes_read);

  // Signal the event (if provided) to indicate I/O completion.
  if (event_handle) {
    auto ev = OT()->LookupObject<XEvent>((X_HANDLE)(uint32_t)event_handle);
    if (ev) ev->Set(0, false);
  }

  return X_STATUS_SUCCESS;
}

PPC_HOOK(__imp__NtReadFile, XNtReadFile_entry)

// =============================================================================
// NtSetInformationFile — handles file position and attributes for our
// XNativeFile handles (type=100). rexkerneld's implementation uses
// LookupObject<XFile>(type=3) which fails for our handles, causing the game
// to close root.arc and try root.spkg → XamShowDirtyDiscErrorUI.
// Commonly called right after CreateFileA to seek to a specific position.
// =============================================================================
static ppc_u32_result_t XNtSetInformationFile_entry(
    ppc_u32_t file_handle,
    ppc_ptr_t<rex::system::X_IO_STATUS_BLOCK> iosb_ptr,
    ppc_pvoid_t info_ptr,
    ppc_u32_t info_length,
    ppc_u32_t info_class_val) {
  using rex::X_STATUS;
  using rex::be;
  using namespace rex::system;

  auto set_iosb = [&](X_STATUS s, uint32_t info) {
    if (iosb_ptr) {
      iosb_ptr->status = s;
      iosb_ptr->information = info;
    }
  };

  auto xfile = OT()->LookupObject<bd::XNativeFile>((X_HANDLE)(uint32_t)file_handle);
  if (!xfile) {
    // Fallthrough: XFile handle opened via rexkerneld VFS
    auto rxfile = OT()->LookupObject<rex::system::XFile>((X_HANDLE)(uint32_t)file_handle);
    if (!rxfile) {
      set_iosb(X_STATUS_INVALID_HANDLE, 0);
      return X_STATUS_INVALID_HANDLE;
    }
    if ((uint32_t)info_class_val == XFilePositionInformation) {
      if ((uint32_t)info_length >= sizeof(X_FILE_POSITION_INFORMATION)) {
        auto* info = info_ptr.as<X_FILE_POSITION_INFORMATION*>();
        rxfile->set_position((uint64_t)info->current_byte_offset);
      }
    }
    set_iosb(X_STATUS_SUCCESS, 0);
    return X_STATUS_SUCCESS;
  }

  const uint32_t ic = (uint32_t)info_class_val;
  const uint32_t il = (uint32_t)info_length;

  switch (ic) {
    case XFilePositionInformation: { // 14
      if (il < sizeof(X_FILE_POSITION_INFORMATION)) {
        set_iosb(X_STATUS_INFO_LENGTH_MISMATCH, 0);
        return X_STATUS_INFO_LENGTH_MISMATCH;
      }
      auto* info = info_ptr.as<X_FILE_POSITION_INFORMATION*>();
      uint64_t pos = (uint64_t)info->current_byte_offset;
      if (xfile->is_ramdisk())     xfile->RamdiskSeekTo(pos);
      else if (xfile->is_cached()) xfile->CachedSeekTo(pos);
      else {
        xfile->stream().seekg(static_cast<std::streamoff>(pos), std::ios::beg);
      }
      set_iosb(X_STATUS_SUCCESS, 0);
      return X_STATUS_SUCCESS;
    }
    case XFileEndOfFileInformation: // 20
    case XFileAllocationInformation: // 19
    case XFileDispositionInformation: // 13
    case XFileLinkInformation: // 11
    case XFileRenameInformation: { // 10
      // No-op for read-only cached files
      set_iosb(X_STATUS_SUCCESS, 0);
      return X_STATUS_SUCCESS;
    }
    default:
      REXLOG_WARN("NtSetInformationFile: unhandled info_class={} handle=0x{:08X}",
                  ic, (uint32_t)file_handle);
      set_iosb(X_STATUS_INVALID_INFO_CLASS, 0);
      return X_STATUS_INVALID_INFO_CLASS;
  }
}

PPC_HOOK(__imp__NtSetInformationFile, XNtSetInformationFile_entry)
