// umvc3_recomp - Phase 6: Clean Stubs and VFS Fix
#include <cstdint>
#include <atomic>
#include <memory>
#include <mutex>
#include <csignal>
#include <thread>
#include <chrono>

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <crtdbg.h>

#include <rex/cvar.h>
#include <rex/logging.h>
#include <rex/ppc/context.h>
#include <rex/ppc/function.h>
#include <rex/rex_app.h>
#include <rex/runtime.h>
#include <rex/system/export_resolver.h>
#include <rex/system/kernel_state.h>
#include <rex/system/xevent.h>
#include <rex/system/xmutant.h>
#include <rex/system/xobject.h>
#include <rex/system/xsemaphore.h>
#include <rex/system/xthread.h>

#include "bdengine/bd_init.h"
#include "bdengine/heap.h"

using namespace rex;
#include "generated/umvc3_recomp_config.h"
#include "generated/umvc3_recomp_init.h"

extern "C" PPC_FUNC(__imp__sub_82B953D8);
static rex::Runtime* g_runtime_for_stubs = nullptr;

// rex::rex_assert_fail is defined in src/bdengine/assert_override.cpp
// (separate TU to avoid redefinition with rex/assert.h's inline definition).

// SIGABRT handler: log and sleep (catches raw std::abort() calls that don't
// go through rex_assert_fail).
static void SigAbortHandler(int) {
  signal(SIGABRT, SigAbortHandler);  // re-install
  fprintf(stderr, "\n*** UMVC3: SIGABRT in thread %lu ***\n"
                  "  (Check recomp.log for rex_assert_fail details)\n\n",
          GetCurrentThreadId());
  fflush(stderr);
  REXLOG_ERROR("SIGABRT received in thread {} — sleeping instead of dying",
               GetCurrentThreadId());
  while (true) { Sleep(INFINITE); }
}

static int __cdecl RexCrtReportHook(int report_type, char* message, int* return_value) {
  if (report_type == _CRT_ASSERT) {
    if (message) {
      REXLOG_WARN("CRT ASSERT intercepted: {}", message);
    } else {
      REXLOG_WARN("CRT ASSERT intercepted (no message)");
    }
    if (return_value) {
      *return_value = 0;
    }
    return TRUE;
  }
  return FALSE;
}

static void InstallCrtAssertBypass() {
  static std::once_flag once;
  std::call_once(once, []() {
    // Use _CRTDBG_MODE_DEBUG (2) = send to OutputDebugString only, no dialog.
    // Mode 0 (suppress completely) proved unreliable with ucrtbased.dll.
    _CrtSetReportMode(_CRT_WARN,   _CRTDBG_MODE_DEBUG);
    _CrtSetReportMode(_CRT_ERROR,  _CRTDBG_MODE_DEBUG);
    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_DEBUG);
    // Install report hook as extra safety — if hook returns TRUE, the CRT
    // skips both the debug output AND any abort/dialog.
    _CrtSetReportHook(RexCrtReportHook);
    _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, RexCrtReportHook);
    // Suppress abort dialog and crash report; our SIGABRT handler will log
    // and sleep instead of letting the process die silently.
    _set_abort_behavior(0, _WRITE_ABORT_MSG | _CALL_REPORTFAULT);
    signal(SIGABRT, SigAbortHandler);
    REXLOG_INFO("UMVC3: CRT assert bypass + SIGABRT handler installed");
  });
}

class Umvc3RecompApp : public rex::ReXApp {
public:
  Umvc3RecompApp(rex::ui::WindowedAppContext &ctx, std::string_view name,
                 rex::PPCImageInfo ppc_info)
      : rex::ReXApp(ctx, name, ppc_info) {}

  static std::unique_ptr<rex::ui::WindowedApp>
  Create(rex::ui::WindowedAppContext &ctx) {
    return std::unique_ptr<Umvc3RecompApp>(
        new Umvc3RecompApp(ctx, "umvc3_recomp",
                           {PPC_CODE_BASE, PPC_CODE_SIZE, PPC_IMAGE_BASE,
                            PPC_IMAGE_SIZE, PPCFuncMappings}));
  }

protected:
  void OnBeforeLoadXex() override {
    REXLOG_INFO("UMVC3: OnBeforeLoadXex starting");
    InstallCrtAssertBypass();
    uint8_t *base = runtime()->memory()->virtual_membase();

    auto *fs = runtime()->file_system();

    // MT Framework specific mappings
    // d: is the game's home drive (the disc root).
    // Point to game: (assets root) not game:\nativeXenon so that
    // d:\nativeXenon\sa\X360\root.arc expands to
    // game:\nativeXenon\sa\X360\root.arc (single nativeXenon), not double.
    fs->RegisterSymbolicLink("d:", "game:");
    fs->RegisterSymbolicLink("D:", "game:");

    // Absolute and relative nativeXenon paths
    fs->RegisterSymbolicLink("\\nativeXenon", "game:\\nativeXenon");
    fs->RegisterSymbolicLink("nativeXenon", "game:\\nativeXenon");
    fs->RegisterSymbolicLink("\\NATIVEXENON", "game:\\nativeXenon");
    fs->RegisterSymbolicLink("NATIVEXENON", "game:\\nativeXenon");

    // NOTE: Do NOT register \Device -> game: (circular VFS loop).

    // 2. Register Guest Stubs with Export Trick (ONLY for functions, NOT
    // variables we already have!)
    auto stub_module = [&](const char *module_name, uint16_t ordinal,
                           uint32_t return_val = 0) {
      auto *mem = runtime()->memory();
      auto *resolver = runtime()->export_resolver();
      auto *entry = resolver->GetExportByOrdinal(module_name, ordinal);

      // Only stub if not already mapped
      if (entry && entry->variable_ptr != 0 &&
          entry->type == rex::runtime::Export::Type::kVariable)
        return;

      uint32_t addr = mem->SystemHeapAlloc(64);
      if (addr) {
        mem->Zero(addr, 64);
        // lis r3, high; ori r3, r3, low; blr
        PPC_STORE_U32(addr, 0x3C600000 | (return_val >> 16));
        PPC_STORE_U32(addr + 4, 0x60630000 | (return_val & 0xFFFF));
        PPC_STORE_U32(addr + 8, 0x4E800020);

        if (entry) {
          entry->type = rex::runtime::Export::Type::kVariable;
          resolver->SetVariableMapping(module_name, ordinal, addr);
        }
        REXLOG_INFO("Guest Stub: {}:0x{:02X} -> 0x{:08X}", module_name, ordinal,
                    addr);
      }
    };

    auto stub_module_variable = [&](const char *module_name, uint16_t ordinal) {
      auto *mem = runtime()->memory();
      auto *resolver = runtime()->export_resolver();
      auto *entry = resolver->GetExportByOrdinal(module_name, ordinal);

      // Only stub if not already mapped
      if (entry && entry->variable_ptr != 0 &&
          entry->type == rex::runtime::Export::Type::kVariable)
        return;

      uint32_t addr = mem->SystemHeapAlloc(64);
      if (addr) {
        mem->Zero(addr, 64);
        // We do not inject function instructions (like blr). Instead, we leave
        // it as valid scratch memory!

        if (entry) {
          entry->type = rex::runtime::Export::Type::kVariable;
          resolver->SetVariableMapping(module_name, ordinal, addr);
        }
        REXLOG_INFO("Guest Variable Stub: {}:0x{:02X} -> 0x{:08X}", module_name,
                    ordinal, addr);
      }
    };

    // VARIABLES
    stub_module_variable("xboxkrnl", 0x1B); // ExThreadObjectType
    stub_module_variable("xboxkrnl", 0x0E); // ExEventObjectType
    stub_module_variable("xboxkrnl",
                         0x12); // ExMutantObjectType (just in case!)
    stub_module_variable("xboxkrnl",
                         0x17); // ExSemaphoreObjectType (just in case!)

    // XAM stubs - return values chosen to satisfy MT Framework checks
    stub_module("xam", 0x210, 1); // XamUserGetSigninState -> 1 = Signed In
    stub_module("xam", 0x20A, 0); // XamUserGetXUID -> 0 = Success
    stub_module("xam", 0x20E, 0); // XamUserGetName -> 0 = Success
    stub_module("xam", 0x219, 0); // XamUserReadProfileSettings -> 0 = Success
    stub_module("xam", 0x226, 1); // XamUserCheckPrivilege -> 1 = Granted

    stub_module("xam", 0xAFF);    // XamPartyGetUserList
    stub_module("xam", 0xB00);    // XamPartySendGameInvites
    stub_module("xam", 0xB0B);    // XamPartySetCustomData
    stub_module("xam", 0xB10);    // XamPartyGetBandwidth
    stub_module("xam", 0x305);    // XamShowPartyUI
    stub_module("xam", 0x30B);    // XamShowCommunitySessionsUI
    stub_module("xam", 0x14F, 0); // XamShowMessageBoxUI
    stub_module("xam", 0x169, 0); // XamShowKeyboardUI
    stub_module("xam", 0x0D9, 0); // XamShowDeviceSelectorUI
    stub_module("xam", 0x011, 0); // XamEnumerate
    stub_module("xam", 0x3B3, 0); // XamTaskSchedule
    stub_module("xam", 0x3C4, 0); // XamTaskShouldExit
    stub_module("xam", 0x3BD, 0); // XamTaskCloseHandle
    stub_module("xam", 0x3C1, 0); // XMsgCompleteIORequest

    // IoDismountVolumeByFileHandle: return STATUS_NO_MEDIA_IN_DRIVE (C000014F).
    // This breaks the NullDevice drive-check loop; returning 0 causes it to
    // spin forever. rexkerneld's implementation returns 0, so we override.
    stub_module("xboxkrnl", 0x3C, 0xC000014F); // IoDismountVolumeByFileHandle

    // XeKeys crypto bypass — returning 0 (STATUS_SUCCESS) makes the STFS content
    // verification code treat the signature as valid, letting it proceed past the
    // authentication loop (guest address 82F333F8).
    stub_module("xboxkrnl", 0x257, 0); // XeKeysConsoleSignatureVerification
    stub_module("xboxkrnl", 0x256, 0); // XeKeysConsolePrivateKeySign

    // NtCreateFile (0xD2) is handled by our PPC_FUNC_IMPL override below.
    // NtDeviceIoControlFile (0xD9) and NtQueryInformationFile (0xE8) are
    // handled by PPC_HOOK overrides in file_hooks.cpp.
  }

  void OnPostSetup() override {
    REXLOG_INFO("UMVC3: OnPostSetup starting");
    g_runtime_for_stubs = runtime();

    // Re-register d:/D: symlinks AFTER the XEX loader has run.
    // The XEX disc-info descriptor causes rexkerneld to override our
    // OnBeforeLoadXex registration with game:\nativeXenon (double).
    // Overriding here (post-load) ensures single nativeXenon expansion.
    {
      auto *fs = runtime()->file_system();
      fs->RegisterSymbolicLink("d:", "game:");
      fs->RegisterSymbolicLink("D:", "game:");
      REXLOG_INFO("UMVC3: re-registered d:/D: -> game: (post-xex-load)");
    }

    bd::InitNativeHeap();
    // Initialize native file I/O hooks (CreateFileA, ReadFile, etc.)
    bd::InitFileHooks(runtime()->game_data_root());

    // Initialize game patches (installs the null-execute VEH guard)
    bd::InitGamePatches();

    // Commit the first 64 KB of guest physical memory so that writes to
    // guest address 0 (which is valid physical RAM on Xbox 360) don't crash.
    // On Xbox 360, physical address 0 is accessible to games; writes there
    // are legitimate (MT Framework uses it as a null/sentinel region).
    {
      uint8_t* page0 = runtime()->memory()->virtual_membase();
      LPVOID committed = VirtualAlloc(page0, 0x10000,
                                     MEM_COMMIT, PAGE_READWRITE);
      if (committed) {
        REXLOG_INFO("UMVC3: Guest physical page 0 committed (host={:p})",
                    (void*)page0);
      } else {
        REXLOG_WARN("UMVC3: Failed to commit guest page 0 (err={})",
                    GetLastError());
      }
    }

    // Commit the Xbox 360 physical memory heap range (0xA0000000-0xBFFFFFFF).
    //
    // rexkerneld reserves but does NOT commit this 512 MB window. The game uses
    // MmAllocatePhysicalMemory to place objects here (job queues, task structs,
    // etc.). When a worker thread accesses such an object (e.g. ctx=0xB74A0060),
    // the host page is not committed → immediate READ/WRITE AV → process crash.
    //
    // Fix: explicitly commit the entire range up-front with PAGE_READWRITE.
    // This is safe because rexkerneld has already VirtualAlloc(RESERVE)-d the
    // 8 GB guest window, so committing a subset of it cannot conflict with other
    // allocations. Xbox 360 games routinely use the full physical heap; 512 MB
    // of committed pages is acceptable on modern hardware.
    {
      uint8_t* phys_base = runtime()->memory()->virtual_membase() + 0xA0000000u;
      // Commit in two 256 MB chunks to avoid a single huge commit failure.
      constexpr SIZE_T kChunk = 0x10000000u; // 256 MB
      bool ok = true;
      for (int i = 0; i < 2; ++i) {
        LPVOID res = VirtualAlloc(phys_base + i * kChunk, kChunk,
                                  MEM_COMMIT, PAGE_READWRITE);
        if (!res) {
          REXLOG_WARN("UMVC3: Physical heap commit chunk {} FAILED (err={})",
                      i, GetLastError());
          ok = false;
        }
      }
      if (ok) {
        REXLOG_INFO("UMVC3: Physical heap 0xA0000000-0xBFFFFFFF committed "
                    "(host base={:p})", (void*)phys_base);
      }
    }

    // Commit the physical_membase raw VIEW.
    //
    // The 512 MB "physical raw" view in xmemory's MapViews table maps
    //   virtual_address 0x100000000-0x11FFFFFFF → file offset 0x100000000
    // at host address (physical_membase + 0).  This is the same file pages
    // as the vA0000000 view above, but Windows tracks commit state PER VIEW
    // (not per file page).  Committing vA0000000 does not auto-commit the
    // physical_membase view.
    //
    // When the GPU Commands thread (via rexkerneld) calls TranslatePhysical()
    // it reads from (physical_membase + guest_phys_addr & 0x1FFFFFFF).  If
    // those pages are uncommitted we get a READ AV at physical_membase+0x10
    // (GPU rptr writeback pointer) → crash.
    //
    // Fix: commit the first 512 MB of physical_membase explicitly.
    {
      uint8_t* phys_mem = runtime()->memory()->physical_membase();
      REXLOG_INFO("UMVC3: physical_membase()={:p}", (void*)phys_mem);
      constexpr SIZE_T kPhysRawCommit = 0x20000000u; // 512 MB
      constexpr SIZE_T kChunkSize     = 0x10000000u; // 256 MB per chunk
      bool pm_ok = true;
      for (int i = 0; i < (int)(kPhysRawCommit / kChunkSize); ++i) {
        LPVOID res = VirtualAlloc(phys_mem + i * kChunkSize, kChunkSize,
                                  MEM_COMMIT, PAGE_READWRITE);
        if (!res) {
          REXLOG_WARN("UMVC3: physical_membase commit chunk {} FAILED (err={})",
                       i, GetLastError());
          pm_ok = false;
        }
      }
      if (pm_ok) {
        REXLOG_INFO("UMVC3: physical_membase 512MB committed (host={:p})", (void*)phys_mem);
      }
    }

    // Commit the D3D GPU virtual memory range (0x70000000-0x71000000).
    //
    // The game's D3D front buffer and texture headers live at addrs like
    // 0x7018D390 (fetch constant) and 0x7018D380 (frontbuffer ptr). These
    // are in the "GPU virtual" window that D3D allocates via MmAllocate*.
    // If D3D init was partially null-stubbed, rexkerneld may not have
    // committed these pages. VdSwap would then AV trying to read them.
    // Pre-committing 16 MB covers the common D3D header area safely.
    {
      uint8_t* gpu_va_base = runtime()->memory()->virtual_membase() + 0x70000000u;
      constexpr SIZE_T kGpuVaSize = 0x1000000u; // 16 MB
      LPVOID res = VirtualAlloc(gpu_va_base, kGpuVaSize, MEM_COMMIT, PAGE_READWRITE);
      if (res) {
        REXLOG_INFO("UMVC3: GPU virtual range 0x70000000-0x70FFFFFF committed "
                    "(host={:p})", (void*)gpu_va_base);
      } else {
        // Non-fatal: already committed by rexkerneld, or cannot commit here.
        REXLOG_WARN("UMVC3: GPU VA commit failed (err={}) – may already be committed",
                    GetLastError());
      }
    }

    // Commit the XEX 64k-pages BSS region (0x80000000-0x8FFFFFFF).
    //
    // The XEX image is loaded via AllocFixed only up to base_address+total_xex_size
    // (0x82000000+0x1230000 = 0x83230000). But the game uses XEX 64k-page addresses
    // beyond the image (e.g., 0x88E80000 for the MT Framework job manager singleton)
    // – likely via NtAllocateVirtualMemory or similar at runtime. If these pages are
    // not committed before the static ctors run, WRITE AVs will corrupt the ctors.
    //
    // For file-backed MapViewOfFile regions, VirtualAlloc(MEM_COMMIT) doesn't apply
    // – pages are committed lazily by the OS when touched. We force-touch the relevant
    // pages by reading (which triggers page-in) to ensure they are accessible.
    // The XEX region from AllocFixed (0x82000000..0x83230000) is already committed.
    // We touch pages from 0x83230000 to 0x8FFFFFFF to ensure the BSS beyond XEX.
    {
      uint8_t* virt = runtime()->memory()->virtual_membase();
      // Touch pages beyond XEX image up to 0x8FFFFFFF (or at minimum 0x88E90000)
      const uint32_t start = 0x83230000u; // right after XEX image
      const uint32_t end   = 0x89000000u; // covers 0x88E80000 + margin
      const uint32_t page  = 0x10000u;    // 64KB XEX page stride
      int touched = 0;
      for (uint32_t off = start; off < end; off += page) {
          uint8_t* ptr = virt + off;
          // Use VirtualAlloc(MEM_COMMIT) directly -- avoids burning VEH budget.
          // If the page is already committed (e.g., by XEX load) this is a no-op.
          LPVOID res = VirtualAlloc(ptr, page, MEM_COMMIT, PAGE_READWRITE);
          if (res) {
              ++touched;
          } else {
              // Already committed (ERROR_INVALID_ADDRESS for already-committed pages)
              // Try a write to ensure it's accessible
              DWORD err = GetLastError();
              if (err == ERROR_INVALID_ADDRESS || err == ERROR_ACCESS_DENIED) {
                  ++touched; // consider already committed
              }
          }
      }
      REXLOG_INFO("UMVC3: XEX BSS 0x83230000-0x88FFFFFF VirtualAlloc-committed {} pages "
                  "(pre-commit for singleton ctor at 0x88E80000)", touched);
    }

    // 3. Object Type Patching logic...
    auto *ks = runtime()->kernel_state();
    auto *mem = runtime()->memory();
    auto *resolver = runtime()->export_resolver();

    // Missing guest function fallback:
    // 0x82B953D8 is reached via a vtable call in sub_8277C9F8 and currently
    // resolves to nullptr in PPC_LOOKUP_FUNC, generating a null-execute storm.
    // Register a minimal stub so indirect calls can continue deterministically.
    mem->SetFunction(0x82B953D8u, (PPCFunc *)&__imp__sub_82B953D8);
    REXLOG_INFO("UMVC3: registered fallback function for guest 0x82B953D8");

    // -- ExThreadObjectType (ordinal 0x1B) --
    {
      auto gpu_thread = ks->GetThreadByID(1); // thid 1 = GPU Commands
      if (gpu_thread) {
        uint32_t guest_obj = gpu_thread->guest_object();
        if (guest_obj) {
          // X_OBJECT_HEADER lives at guest_obj - 0x10; object_type_ptr at -0x8
          uint32_t type_ptr_addr = guest_obj - 0x8;
          // Guest memory is big-endian; byteswap to get host value
          uint32_t raw = *reinterpret_cast<uint32_t *>(
              mem->TranslateVirtual(type_ptr_addr));
          uint32_t real_type_ptr = _byteswap_ulong(raw);
          // Write the real type ptr into our stub variable memory
          auto *entry = resolver->GetExportByOrdinal("xboxkrnl", 0x1B);
          if (entry && entry->variable_ptr) {
            *reinterpret_cast<uint32_t *>(mem->TranslateVirtual(
                entry->variable_ptr)) = _byteswap_ulong(real_type_ptr);
            REXLOG_INFO("UMVC3: Patched ExThreadObjectType -> 0x{:08X}",
                        real_type_ptr);
          }
        }
      }
    }

    // -- ExEventObjectType (ordinal 0x0E) --
    {
      auto ev = rex::system::object_ref<rex::system::XEvent>(
          new rex::system::XEvent(ks));
      ev->Initialize(true, false);
      uint32_t guest_obj = ev->guest_object();
      if (guest_obj) {
        // Guest memory is big-endian; byteswap to get host value
        uint32_t raw = *reinterpret_cast<uint32_t *>(
            mem->TranslateVirtual(guest_obj - 0x8));
        uint32_t real_type_ptr = _byteswap_ulong(raw);
        auto *entry = resolver->GetExportByOrdinal("xboxkrnl", 0x0E);
        if (entry && entry->variable_ptr) {
          *reinterpret_cast<uint32_t *>(mem->TranslateVirtual(
              entry->variable_ptr)) = _byteswap_ulong(real_type_ptr);
          REXLOG_INFO("UMVC3: Patched ExEventObjectType -> 0x{:08X}",
                      real_type_ptr);
        }
      }
      // ev released here via RAII
    }

    // -- ExMutantObjectType (ordinal 0x12) --
    {
      auto mu = rex::system::object_ref<rex::system::XMutant>(
          new rex::system::XMutant(ks));
      mu->Initialize(false);
      uint32_t guest_obj = mu->guest_object();
      if (guest_obj) {
        uint32_t raw = *reinterpret_cast<uint32_t *>(
            mem->TranslateVirtual(guest_obj - 0x8));
        uint32_t real_type_ptr = _byteswap_ulong(raw);
        auto *entry = resolver->GetExportByOrdinal("xboxkrnl", 0x12);
        if (entry && entry->variable_ptr) {
          *reinterpret_cast<uint32_t *>(mem->TranslateVirtual(
              entry->variable_ptr)) = _byteswap_ulong(real_type_ptr);
          REXLOG_INFO("UMVC3: Patched ExMutantObjectType -> 0x{:08X}",
                      real_type_ptr);
        }
      }
    }

    // -- ExSemaphoreObjectType (ordinal 0x17) --
    {
      auto sem = rex::system::object_ref<rex::system::XSemaphore>(
          new rex::system::XSemaphore(ks));
      sem->Initialize(0, 32);
      uint32_t guest_obj = sem->guest_object();
      if (guest_obj) {
        uint32_t raw = *reinterpret_cast<uint32_t *>(
            mem->TranslateVirtual(guest_obj - 0x8));
        uint32_t real_type_ptr = _byteswap_ulong(raw);
        auto *entry = resolver->GetExportByOrdinal("xboxkrnl", 0x17);
        if (entry && entry->variable_ptr) {
          *reinterpret_cast<uint32_t *>(mem->TranslateVirtual(
              entry->variable_ptr)) = _byteswap_ulong(real_type_ptr);
          REXLOG_INFO("UMVC3: Patched ExSemaphoreObjectType -> 0x{:08X}",
                      real_type_ptr);
        }
      }
    }

    // Note: processor()->SetFunction only works for addresses inside the code
    // section [PPC_CODE_BASE, PPC_CODE_BASE+PPC_CODE_SIZE). Our XAM stubs live
    // in the system heap (0x2F000-0x4B000) so SetFunction cannot bind native
    // C++ handlers to them. The PPC stubs above (lis r3, val; blr) are the
    // actual implementations - ensure return values above are correct.
    (void)mem; (void)resolver;

    // ===========================================================================
    // DIAGNOSTIC: Singleton state after XEX load and static ctor execution
    // Check if the MT Framework job manager singleton has been initialized.
    // global at 0x82BEDD34 → tagged ptr → object vtable.
    // Note: guest memory is big-endian (Xbox 360 PPC). We byteswap when reading.
    // ===========================================================================
    {
        auto readBE32 = [&](uint32_t guest_addr) -> uint32_t {
            void* host = mem->TranslateVirtual(guest_addr);
            if (!host) return 0u;
            uint32_t raw = *reinterpret_cast<uint32_t*>(host);
            return _byteswap_ulong(raw);
        };

        // --- Singleton A: 0x82BEDD34 (observer loop / sub_82F2A2D8 context) ---
        static constexpr uint32_t kGlobalAddr = 0x82BEDD34u;
        uint32_t global_val = readBE32(kGlobalAddr);
        uint32_t obj_addr   = global_val & ~0x7u;  // strip 3 tag bits if tagged ptr
        uint32_t vtable_val = 0u;
        if (obj_addr > 0x80000000u && obj_addr < 0xC0000000u) {
            vtable_val = readBE32(obj_addr);
        }
        REXLOG_INFO("UMVC3 DIAG: singleton[A] 0x82BEDD34 = {:#010x}  "
                    "obj={:#010x}  vtable={:#010x}",
                    global_val, obj_addr, vtable_val);
        if (vtable_val != 0) {
            uint32_t fn64 = readBE32(vtable_val + 64);
            REXLOG_INFO("UMVC3 DIAG: [A] vtable+64={:#010x}  -- singleton READY!", fn64);
        } else {
            REXLOG_WARN("UMVC3 DIAG: [A] vtable=0 -- singleton NOT constructed yet");
        }

        // --- Singleton B: 0x8310DD34 (worker dispatch / sub_8277DA68 actual global) ---
        // Generated code: lis r11,-31983 (=0x83110000); lwz r3,-8908(r11) => *(0x8310DD34)
        static constexpr uint32_t kWorkerGlobal = 0x8310DD34u;
        uint32_t wglobal_val = readBE32(kWorkerGlobal);
        uint32_t wvtable_val = 0u;
        if (wglobal_val > 0x80000000u && wglobal_val < 0xC0000000u) {
            wvtable_val = readBE32(wglobal_val);
        }
        REXLOG_INFO("UMVC3 DIAG: singleton[B] 0x8310DD34 = {:#010x}  "
                    "obj={:#010x}  vtable={:#010x}",
                    wglobal_val, wglobal_val, wvtable_val);
        if (wvtable_val != 0) {
            uint32_t fn64 = readBE32(wvtable_val + 64);
            uint32_t fn60 = readBE32(wvtable_val + 60);
            REXLOG_INFO("UMVC3 DIAG: [B] vtable+60={:#010x} vtable+64={:#010x} -- READY!",
                        fn60, fn64);
        } else {
            REXLOG_WARN("UMVC3 DIAG: [B] vtable=0 -- worker global NOT ready yet");
        }
    }
  }
};

// Wrapper to configure startup CVars before the Application's global scope
// starts
struct RexVulkanBootstrapper {
  RexVulkanBootstrapper() {
    // Force the Vulkan backend to prevent DirectX initialization errors (assert
    // 344)
    if (::GetModuleHandleA("umvc3_recomp.exe")) {
      rex::cvar::SetFlagByName("backend", "vulkan");
    }
  }
};
static RexVulkanBootstrapper g_vulkan_bootstrapper;

REX_DEFINE_APP(umvc3_recomp, Umvc3RecompApp::Create)

// ---------------------------------------------------------------------------
// Kernel import overrides — object file symbols win over rexkerneld.lib.
// The generated recompiled code calls __imp__Xxx(ctx, base) as a direct C++
// symbol. Defining them here overrides the rexkerneld.lib version at link time.
// ---------------------------------------------------------------------------
extern "C" void rex_NtCreateFile(::PPCContext &ctx, uint8_t *base);

extern "C" {
  // MmGetPhysicalAddress: avoid rexkerneld debug assert when translation fails.
  // In bring-up runs some callers pass aliased/non-canonical addresses; the
  // stock implementation asserts on UINT32_MAX before applying its own fallback.
  PPC_FUNC_IMPL(__imp__MmGetPhysicalAddress) {
    const uint32_t base_addr = ctx.r3.u32;

    uint32_t physical = UINT32_MAX;
    if (g_runtime_for_stubs && g_runtime_for_stubs->memory()) {
      physical = g_runtime_for_stubs->memory()->GetPhysicalAddress(base_addr);
    }

    if (physical == UINT32_MAX) {
      // Fallback: preserve Xbox-style physical aliasing semantics by masking
      // to the 512MB physical window.
      physical = base_addr & 0x1FFFFFFFu;
      static std::atomic<uint32_t> s_mm_get_phys_fallbacks{0};
      uint32_t n = ++s_mm_get_phys_fallbacks;
      if (n <= 16 || (n % 512) == 0) {
        REXLOG_WARN("MmGetPhysicalAddress fallback: base={:#010x} -> phys={:#010x} (count={})",
                    base_addr, physical, n);
      }
    }

    ctx.r3.u64 = physical;
  }

  PPC_FUNC_IMPL(__imp__sub_82B953D8) {
    static std::atomic<uint32_t> s_calls{0};
    uint32_t n = ++s_calls;
    const uint32_t size = ctx.r4.u32;

    uint32_t out_addr = 0;
    if (g_runtime_for_stubs && g_runtime_for_stubs->memory() && size != 0 && size < 0x08000000u) {
      // Allocate from the physical 64K heap (heaps_.vA0000000, addresses 0xA0000000-0xBFFFFFFF).
      // This is required so that CPU writes via PPC_STORE_U32(addr, ...) and GPU reads via
      // TranslatePhysical(phys_addr) alias to the same backing file-mapping pages.
      // - SystemHeapAlloc (virtual heap):   PPC_STORE_U32(addr) -> file offset = addr (~0x10xxxxxx) [WRONG]
      // - PhysicalHeap vA0000000 (physical): PPC_STORE_U32(0xB0xxxxxx) -> file offset = 0x100000000 + 0x10xxxxxx
      //   and TranslatePhysical(0x10xxxxxx)  -> file offset = 0x100000000 + 0x10xxxxxx  [MATCH]
      auto* mem = g_runtime_for_stubs->memory();
      auto* heap = mem->LookupHeapByType(true, 64u * 1024u);  // heaps_.vA0000000
      if (heap) {
        const uint32_t page = 64u * 1024u;
        const uint32_t adj_size = (size + page - 1u) & ~(page - 1u);
        heap->Alloc(adj_size, page,
                    rex::memory::kMemoryAllocationReserve | rex::memory::kMemoryAllocationCommit,
                    rex::memory::kMemoryProtectRead | rex::memory::kMemoryProtectWrite,
                    false, &out_addr);
      }
    }

    if (n <= 16 || (n % 256) == 0) {
      REXLOG_WARN("Fallback __imp__sub_82B953D8 called (count={}, this={:#010x}, size={:#010x}) -> {:#010x} (phys heap)",
                  n, ctx.r3.u32, size, out_addr);
    }
    ctx.r3.u64 = out_addr;
  }

  // NtCreateFile: our XNtCreateFile_entry handles \Device\Image -> default.xex
  PPC_FUNC_IMPL(__imp__NtCreateFile) { rex_NtCreateFile(ctx, base); }

  // IoDismountVolumeByFileHandle: return STATUS_NO_MEDIA_IN_DEVICE (0xC000014F).
  // rexkerneld's stub returns 0 (dismount success), causing the game's STFS
  // content-check loop to cycle endlessly. 0xC000014F breaks the loop cleanly.
  PPC_FUNC_IMPL(__imp__IoDismountVolumeByFileHandle) {
    ctx.r3.u64 = 0xC000014F; // STATUS_NO_MEDIA_IN_DEVICE
  }
}
#define STUB_S(name)                                                           \
  extern "C" {                                                                 \
  PPC_FUNC_IMPL(name) {}                                                       \
  PPC_FUNC_IMPL(__imp__##name) {}                                              \
  PPCFunc *__imp_##name = (PPCFunc *)&__imp__##name;                           \
  }

STUB_S(NetDll_XNetRegisterKey);
STUB_S(NetDll_XNetUnregisterKey);
STUB_S(NetDll_XNetUnregisterInAddr);
STUB_S(NetDll_XNetConnect);
STUB_S(NetDll_XNetGetConnectStatus);
STUB_S(NetDll_XNetQosLookup);
STUB_S(NetDll_XNetGetBroadcastVersionStatus);
STUB_S(NetDll_XNetGetSystemLinkPort);
STUB_S(NetDll_getsockname);
STUB_S(NetDll_getpeername);
STUB_S(XNetLogonGetTitleID);
STUB_S(XamVoiceSubmitPacket);
STUB_S(XamUserCreateStatsEnumerator);
STUB_S(XamShowFriendsUI);
STUB_S(XamShowGamerCardUIForXUID);
STUB_S(XamShowMessageComposeUI);
STUB_S(XamShowGameInviteUI);
STUB_S(IoInvalidDeviceRequest);
STUB_S(ObReferenceObject);
STUB_S(IoDeleteDevice);
STUB_S(IoCompleteRequest);
STUB_S(RtlUpcaseUnicodeChar);
STUB_S(IoDismountVolume);
STUB_S(NtWriteFileGather);
STUB_S(XamContentClose);
STUB_S(XamContentFlush);
STUB_S(XamContentGetCreator);
STUB_S(XamContentCreateEnumerator);
STUB_S(XamContentGetDeviceData);
STUB_S(XamContentCreateEx);
STUB_S(XeCryptBnQwBeSigVerify);
STUB_S(XeKeysGetKey);
STUB_S(XeCryptRotSumSha);
STUB_S(ObIsTitleObject);
STUB_S(IoCheckShareAccess);
STUB_S(IoSetShareAccess);
STUB_S(IoRemoveShareAccess);