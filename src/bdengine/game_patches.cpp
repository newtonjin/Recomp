/**
 * @file        bdengine/game_patches.cpp
 *
 * @brief       xenia-canary community patches ported as CVars with mid-asm hooks.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */
// IMPORTANT: must be first so the game-specific config macros
// (PPC_IMAGE_BASE, PPC_CODE_BASE, etc.) are visible when context.h is parsed.
#include "generated/umvc3_recomp_config.h"

#include "bdengine/game_patches.h"

#include <rex/cvar.h>
#include <rex/logging.h>
#include <rex/ppc/context.h>
#include <rex/ppc/types.h>
#include <rex/graphics/graphics_system.h>
#include <rex/graphics/command_processor.h>
#include <rex/system/mmio_handler.h>
#include <rex/runtime.h>
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <thread>
#include <chrono>
#include <atomic>
#include <mutex>
#include <spdlog/spdlog.h>

// ---------------------------------------------------------------------------
// Explicit template instantiations for ObjectTable::LookupObject<T>
//
// PROBLEM: rexkerneld.lib was compiled with the SDK's original object_table.h
// which has `assert_true(object->type() == T::kObjectType)` at line 52. When
// the game passes a handle whose object type doesn't match T, this fires the
// MSVC assert dialog. Our patched rexglu/include/rex/system/util/object_table.h
// replaces assert_true with REXLOG_WARN + return nullptr, which is safe.
//
// But template auto-instantiations are COMDAT ("weak") symbols. If rexkerneld.lib
// has an instantiation for T and we don't, the linker uses the lib's (broken) one.
//
// FIX: Force explicit instantiation of LookupObject<T> in THIS translation unit.
// Explicit instantiations are **strong** symbols that unconditionally override
// the lib's COMDAT instantiations at link time (our .obj is before the .lib).
// ---------------------------------------------------------------------------
#include <rex/system/util/object_table.h>
#include <rex/system/xevent.h>
#include <rex/system/xmutant.h>
#include <rex/system/xsemaphore.h>
#include <rex/system/xthread.h>
#include <rex/system/xfile.h>
#include <rex/system/xtimer.h>
#include <rex/system/xiocompletion.h>
#include <rex/system/xenumerator.h>
#include <rex/system/xnotifylistener.h>
#include <rex/system/xsymboliclink.h>

namespace rex::system::util {
// Each explicit instantiation definition emits a strong COMDAT symbol in this
// .obj so lld-link picks our non-asserting version instead of the lib's.
template object_ref<rex::system::XThread>          ObjectTable::LookupObject<rex::system::XThread>(rex::X_HANDLE);
template object_ref<rex::system::XEvent>           ObjectTable::LookupObject<rex::system::XEvent>(rex::X_HANDLE);
template object_ref<rex::system::XMutant>          ObjectTable::LookupObject<rex::system::XMutant>(rex::X_HANDLE);
template object_ref<rex::system::XSemaphore>       ObjectTable::LookupObject<rex::system::XSemaphore>(rex::X_HANDLE);
template object_ref<rex::system::XFile>            ObjectTable::LookupObject<rex::system::XFile>(rex::X_HANDLE);
template object_ref<rex::system::XTimer>           ObjectTable::LookupObject<rex::system::XTimer>(rex::X_HANDLE);
template object_ref<rex::system::XIOCompletion>    ObjectTable::LookupObject<rex::system::XIOCompletion>(rex::X_HANDLE);
template object_ref<rex::system::XEnumerator>      ObjectTable::LookupObject<rex::system::XEnumerator>(rex::X_HANDLE);
template object_ref<rex::system::XNotifyListener>  ObjectTable::LookupObject<rex::system::XNotifyListener>(rex::X_HANDLE);
template object_ref<rex::system::XSymbolicLink>    ObjectTable::LookupObject<rex::system::XSymbolicLink>(rex::X_HANDLE);
}  // namespace rex::system::util

// ---------------------------------------------------------------------------
// Override MSVC CRT _wassert so rexkerneld assert_true() failures LOG and
// CONTINUE instead of showing a popup and calling abort().
//
// assert_true(expr) expands to assert(expr) which calls _wassert(msg,file,line)
// in the MSVC debug CRT. By defining our own _wassert here (linked before the
// CRT via /FORCE:MULTIPLE), every assertion in rexkerneld becomes a logged
// warning that execution continues past.
//
// Caution: code after a failed assertion may behave incorrectly (UB territory).
// That is acceptable during bringup — each silenced assertion should be
// eventually investigated and properly fixed.
// ---------------------------------------------------------------------------
extern "C" void __cdecl _wassert(wchar_t const* msg, wchar_t const* file, unsigned line) {
    // Convert wide strings for logging
    char cmsg[512]{}, cfile[512]{};
    WideCharToMultiByte(CP_UTF8, 0, msg,  -1, cmsg,  sizeof(cmsg)-1,  nullptr, nullptr);
    WideCharToMultiByte(CP_UTF8, 0, file, -1, cfile, sizeof(cfile)-1, nullptr, nullptr);
    REXLOG_WARN("ASSERTION SILENCED ({}:{}) : {}", cfile, line, cmsg);
    // Do NOT call abort() — just return and let execution continue past the assert.
}

// ---------------------------------------------------------------------------
// Null-execute safety net (Vectored Exception Handler)
//
// Catches ACCESS_VIOLATION at address 0 with execute intent — this is the
// symptom of PPC_CALL_INDIRECT_FUNC(0) when a function table lookup returns
// a null function pointer.
//
// IMPORTANT: We must NOT kill the thread here. Killing the MAIN game thread
// causes the whole process to exit. Instead we redirect to a stub that just
// sets r3=0 and returns normally, so the caller continues executing.
//
// The recompiler calls PPC_CALL_INDIRECT_FUNC as:
//   auto fn = PPC_LOOKUP_FUNC(base, addr);  // returns nullptr when addr=0
//   fn(ctx, base);                          // crashes here (rip=0)
// Windows x64 ABI: fn(PPCContext& ctx [rcx], uint8_t* base [rdx])
// Our stub receives the same args, zeroes r3, and returns — the generated
// C++ code continues normally after the call site.
// ---------------------------------------------------------------------------
static void null_ppc_func_stub(PPCContext& ppc_ctx, uint8_t* /*base*/) noexcept {
    // Simulate a "function returned 0" so callers don't read garbage in r3.
    ppc_ctx.r3.u64 = 0;
    REXLOG_WARN("null_ppc_func_stub: null PPC call skipped in thread {} – r3=0",
                GetCurrentThreadId());
}

static LONG CALLBACK NullExecuteVEH(PEXCEPTION_POINTERS ep) noexcept {
    static std::atomic<uint32_t> s_av_recoveries{0};
    static constexpr uint32_t kMaxAvRecoveries = 65536;

    // ---------------------------------------------------------------------------
    // Handle integer divide-by-zero (STATUS_INTEGER_DIVIDE_BY_ZERO = 0xC0000094)
    // This occurs when recompiled PPC code executes divw/divwu with a zero divisor.
    // On real PPC hardware (Xbox 360), divw with divisor=0 produces an undefined
    // result (NOT a trap for most games). We recover by setting result to 0 and
    // skipping the faulting idiv instruction.
    // ---------------------------------------------------------------------------
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_INT_DIVIDE_BY_ZERO) {
        static std::atomic<uint32_t> s_divzero_count{0};
        uint32_t n = ++s_divzero_count;
        DWORD64 faulting_rip = ep->ContextRecord->Rip;
        DWORD64 ret_addr = 0;
        uint32_t ppc_lr = 0;
        __try {
            ret_addr = *reinterpret_cast<DWORD64*>(ep->ContextRecord->Rsp);
        } __except(EXCEPTION_EXECUTE_HANDLER) {}
        __try {
            auto* ppc_ctx = reinterpret_cast<PPCContext*>(ep->ContextRecord->Rcx);
            if (ppc_ctx) ppc_lr = static_cast<uint32_t>(ppc_ctx->lr);
        } __except(EXCEPTION_EXECUTE_HANDLER) {}

        if (n <= 32 || (n % 256) == 0) {
            REXLOG_ERROR("NullExecuteVEH: INT_DIVIDE_BY_ZERO #{} in thread {} "
                         "RIP=0x{:016X} RetAddr=0x{:016X} ppc_lr={:#010x} -- skipping, result=0",
                         n, GetCurrentThreadId(), faulting_rip, ret_addr, ppc_lr);
            spdlog::default_logger()->flush();
        }

        // Skip the faulting instruction: scan forward for idiv/div opcode bytes.
        // The idiv r/m32 encoding is F7 /7 (2+ bytes) or F7 /6 (for div).
        // We advance RIP past the current instruction. x64 idiv is:
        //   F7 /7 => F7 rX (modrm byte where /7 means reg=7 in modrm)
        // The signed quotient is rAX = rdx:rax / r/m; rDX = remainder.
        // On divide-by-zero, we set rAX=0, rDX=0 and skip the instruction.
        // Use a safe instruction skip: look for the 0xF7 opcode byte.
        const uint8_t* code = reinterpret_cast<const uint8_t*>(faulting_rip);
        size_t skip = 0;
        __try {
            // REX prefix (optional)
            size_t i = 0;
            if ((code[i] & 0xF0) == 0x40) ++i;  // skip REX
            if (code[i] == 0xF7) {
                uint8_t modrm = code[i+1];
                uint8_t mod   = (modrm >> 6) & 3;
                uint8_t rm    = modrm & 7;
                skip = i + 2; // opcode + modrm
                if (mod == 0) {
                    if (rm == 5) skip += 4; // disp32
                    else if (rm == 4) { skip += 1; /* SIB */ if (code[i+2+1-1] == 5) skip += 4; }
                } else if (mod == 1) {
                    skip += (rm == 4 ? 2 : 1); // SIB? + disp8
                } else if (mod == 2) {
                    skip += (rm == 4 ? 5 : 4); // SIB? + disp32
                }
            }
        } __except(EXCEPTION_EXECUTE_HANDLER) {}

        if (skip > 0) {
            ep->ContextRecord->Rip = faulting_rip + skip;
        } else {
            // Fallback: advance by 2 bytes (minimum idiv size)
            ep->ContextRecord->Rip = faulting_rip + 2;
        }
        // Set quotient=0, remainder=0 (consistent with "undefined" PPC behavior)
        ep->ContextRecord->Rax = 0;
        ep->ContextRecord->Rdx = 0;
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION &&
        ep->ExceptionRecord->NumberParameters >= 2)
    {
        const DWORD_PTR av_type = ep->ExceptionRecord->ExceptionInformation[0];
        const DWORD_PTR av_addr = ep->ExceptionRecord->ExceptionInformation[1];

        if (av_type == 8 && av_addr == 0) {
            // Null-execute (PPC_CALL_INDIRECT_FUNC to address 0).
            // Redirect to stub that sets r3=0 and returns.
            DWORD64 ret_addr = 0;
            uint32_t ppc_lr = 0, ppc_ctr = 0, ppc_r3 = 0, ppc_r4 = 0;
            __try {
                ret_addr = *reinterpret_cast<DWORD64*>(ep->ContextRecord->Rsp);
            } __except(EXCEPTION_EXECUTE_HANDLER) {}
            __try {
                auto* ppc_ctx = reinterpret_cast<PPCContext*>(ep->ContextRecord->Rcx);
                if (ppc_ctx) {
                    ppc_lr  = static_cast<uint32_t>(ppc_ctx->lr);
                    ppc_ctr = ppc_ctx->ctr.u32;
                    ppc_r3  = ppc_ctx->r3.u32;
                    ppc_r4  = ppc_ctx->r4.u32;
                }
            } __except(EXCEPTION_EXECUTE_HANDLER) {}

            REXLOG_ERROR("NullExecuteVEH: null-execute in thread {} "
                         "RIP=0x{:016X} RetAddr=0x{:016X} "
                         "(ppc lr={:#010x} ctr={:#010x} r3={:#010x} r4={:#010x}) "
                         "- redirecting to null stub",
                         GetCurrentThreadId(),
                         ep->ContextRecord->Rip,
                         ret_addr,
                         ppc_lr, ppc_ctr, ppc_r3, ppc_r4);
            spdlog::default_logger()->flush(); // flush immediately so we don't lose this on clean exit
            ep->ContextRecord->Rip = reinterpret_cast<DWORD64>(&null_ppc_func_stub);
            return EXCEPTION_CONTINUE_EXECUTION;
        } else {
            // Read or write access violation.
            // av_type: 0=read, 1=write, 8=execute
            const char* kind = (av_type == 0) ? "READ" : (av_type == 1) ? "WRITE" : "EXECUTE";
            DWORD64 ret_addr = 0;
            __try {
                ret_addr = *reinterpret_cast<DWORD64*>(ep->ContextRecord->Rsp);
            } __except(EXCEPTION_EXECUTE_HANDLER) {}

            // For READ/WRITE AVs, try to materialize the faulting page on-demand.
            // Bringup goal: keep the process alive long enough to expose the
            // next root blocker in logs instead of crashing on first miss.
            if (av_type == 0 || av_type == 1) {
                uint32_t recovered = s_av_recoveries.load(std::memory_order_relaxed);
                if (recovered >= kMaxAvRecoveries) {
                    REXLOG_ERROR("NullExecuteVEH: AV recovery budget exceeded ({}), kind={} addr=0x{:016X}",
                                 recovered, kind, av_addr);
                } else {
                LPVOID page_base = reinterpret_cast<LPVOID>(av_addr & ~(DWORD_PTR)0xFFFF);
                LPVOID committed = VirtualAlloc(page_base, 0x10000,
                                               MEM_COMMIT, PAGE_READWRITE);
                if (committed) {
                    // Page successfully committed (was reserved, not committed).
                    // Continue execution — the faulting instruction will retry
                    // and access the freshly zeroed page.
                    s_av_recoveries.fetch_add(1, std::memory_order_relaxed);
                    REXLOG_WARN("NullExecuteVEH: {} AV at host=0x{:016X} "
                                "recovered by on-demand commit (thread {})",
                                kind, av_addr, GetCurrentThreadId());
                    return EXCEPTION_CONTINUE_EXECUTION;
                }

                DWORD commit_err = GetLastError();
                if (av_type == 1 && commit_err == ERROR_ACCESS_DENIED) {
                    DWORD old_protect = 0;
                    if (VirtualProtect(page_base, 0x10000, PAGE_EXECUTE_READWRITE, &old_protect)) {
                        s_av_recoveries.fetch_add(1, std::memory_order_relaxed);
                        REXLOG_WARN("NullExecuteVEH: WRITE AV at host=0x{:016X} "
                                    "recovered by VirtualProtect RWX (old_protect=0x{:X}, thread {})",
                                    av_addr, old_protect, GetCurrentThreadId());
                        return EXCEPTION_CONTINUE_EXECUTION;
                    }
                    commit_err = GetLastError();
                }

                // Some faulting regions are not reserved in this process view.
                // Try reserve+commit as a last-resort recovery to keep booting
                // and surface the next blocker instead of crashing immediately.
                LPVOID reserved_and_committed = VirtualAlloc(page_base, 0x10000,
                                                            MEM_RESERVE | MEM_COMMIT,
                                                            PAGE_READWRITE);
                if (reserved_and_committed) {
                    s_av_recoveries.fetch_add(1, std::memory_order_relaxed);
                    REXLOG_WARN("NullExecuteVEH: {} AV at host=0x{:016X} "
                                "recovered by reserve+commit fallback (thread {})",
                                kind, av_addr, GetCurrentThreadId());
                    return EXCEPTION_CONTINUE_EXECUTION;
                }

                DWORD reserve_err = GetLastError();
                REXLOG_ERROR("NullExecuteVEH: {} AV recovery failed at host=0x{:016X} "
                             "(commit_err={} reserve_err={})",
                             kind, av_addr, commit_err, reserve_err);
                }
            }

            REXLOG_CRITICAL("NullExecuteVEH: {} AV in thread {} at host=0x{:016X} "
                         "RIP=0x{:016X} RetAddr=0x{:016X} - FATAL, will crash",
                         kind, GetCurrentThreadId(), av_addr,
                         ep->ContextRecord->Rip, ret_addr);
            // Flush the logger so the message makes it to disk before the OS
            // terminates the process due to the unhandled exception.
            spdlog::default_logger()->flush();
            return EXCEPTION_CONTINUE_SEARCH;
        }
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

// Install the VEH once (called from bd::InitGamePatches)
static void InstallNullExecuteGuard() {
    static std::once_flag once;
    std::call_once(once, []() {
        PVOID h = AddVectoredExceptionHandler(1 /*first*/, NullExecuteVEH);
        if (h) {
            REXLOG_INFO("InstallNullExecuteGuard: VEH installed (handle={:p})", h);
        } else {
            REXLOG_ERROR("InstallNullExecuteGuard: AddVectoredExceptionHandler FAILED ({})",
                         GetLastError());
        }
    });
}

REXCVAR_DEFINE_BOOL(bd_wireframe,   false, "Enable wireframe rendering", "Patches");
REXCVAR_DEFINE_BOOL(bd_camera_bbox, false, "Enable camera bounding box debug display", "Patches");
REXCVAR_DEFINE_BOOL(bd_debug_menu, false, "Enable debug menu and debug tools", "Patches");

namespace bd {

void InitGamePatches() {
    InstallNullExecuteGuard();
    REXLOG_INFO("Game patches initialized (wireframe={}, bbox={}, debug={})",
                REXCVAR_GET(bd_wireframe), REXCVAR_GET(bd_camera_bbox),
                REXCVAR_GET(bd_debug_menu));
}

}  // namespace bd

// ---------------------------------------------------------------------------
// Wireframe rendering (credit: illusion, xenia-canary/game-patches) 
// ---------------------------------------------------------------------------
bool bdWireframeHook(PPCRegister& r11) {
    if (REXCVAR_GET(bd_wireframe)) {
        r11.u64 = 1;
        return true;
    }
    return false;
}

// ---------------------------------------------------------------------------
// 2. Camera bounding box debug overlay (credit: illusion, xenia-canary/game-patches) 
// ---------------------------------------------------------------------------
bool bdCameraBBoxHook(PPCRegister& r11) {
    if (REXCVAR_GET(bd_camera_bbox)) {
        r11.u64 = 1;
        return true;
    }
    return false;
}

// ---------------------------------------------------------------------------
// Debug menu: Force debug labels flag (credit: Wylie, xenia-canary/game-patches)
// ---------------------------------------------------------------------------
bool bdDebugLabelsHook(PPCRegister& r11) {
    if (REXCVAR_GET(bd_debug_menu)) {
        r11.u64 = 1;
        return true;
    }
    return false;
}

// ---------------------------------------------------------------------------
// Debug menu: Force debug content flags (credit: Wylie, xenia-canary/game-patches) 
// ---------------------------------------------------------------------------
bool bdDebugContentStartHook(PPCRegister& r11) {
    if (REXCVAR_GET(bd_debug_menu)) {
        r11.u64 = 0xFF;
        return true;
    }
    return false;
}

// ---------------------------------------------------------------------------
// Debug menu: Debug content end (credit: Wylie, xenia-canary/game-patches) 
// ---------------------------------------------------------------------------
bool bdDebugContentEndHook(PPCRegister& r11) {
    if (REXCVAR_GET(bd_debug_menu)) {
        r11.u64 = 0;
        return true;
    }
    return false;
}

// ---------------------------------------------------------------------------
// Debug menu: Bypass conditional branches (credit: Wylie, xenia-canary/game-patches) 
// ---------------------------------------------------------------------------
bool bdDebugMenuEnableHook() {
    return REXCVAR_GET(bd_debug_menu);
}

// Forward declarations for PPC kernel functions used in overrides below.
extern "C" PPC_FUNC(__imp__RtlEnterCriticalSection);
extern "C" PPC_FUNC(__imp__RtlLeaveCriticalSection);

// =============================================================================
// sub_82F2A2D8 – MT Framework thread observer notification loop (selective)
//
// This function iterates a doubly-linked list of observers held under a
// critical section and calls each observer's fn_ptr with the opcode argument.
// The list lives at guest address 0x830F9D3C (sentinel) protected by a
// critical section at 0x830F9D60.
//
// Node layout (all uint32 big-endian):
//   [+0] next    – pointer to next node
//   [+4] prev    – pointer to previous node
//   [+8] fn_ptr  – PPC function pointer to call
//
// At boot, some nodes have fn_ptr=0 (uninitialized). Calling
// PPC_CALL_INDIRECT_FUNC(0) caused a null-execute storm. Previously we
// stubbed this as a no-op, but that blocks the HAL D3D init path which needs
// observer notifications to complete — specifically, VdSetGraphicsInterruptCallback
// is registered inside an observer that we were silently skipping.
//
// Fix (Session 6): iterate normally but skip nodes with fn_ptr=0.
// This allows valid observers (HAL init, D3D, audio) to run while avoiding
// the null-execute crash for uninitialized list entries.
//
// Risk: valid observers may call further PPC code that is not yet working.
// The null-execute VEH above provides a safety net for those cases.
// =============================================================================
PPC_FUNC_IMPL(__imp__sub_82F2A2D8) {
    PPC_FUNC_PROLOGUE();

    const uint32_t opcode = ctx.r3.u32;  // 0=thread done, 1=thread starting

    // Observer list layout (derived from generated code at 82F2A2D8):
    //   lis r11,-31984       → r11 = 0x83100000
    //   addi r29,r11,-25248  → critical section at 0x830F9D60
    //   addi r31,r11,-25220  → list sentinel at 0x830F9D3C
    //   lwz r11,-25220(r11)  → first node = sentinel->next
    static constexpr uint32_t kCritSection  = 0x83100000u - 25248u; // 0x830F9D60
    static constexpr uint32_t kListSentinel = 0x83100000u - 25220u; // 0x830F9D3C

    // Enter critical section (r3 = &crit_section)
    ctx.r3.u64 = kCritSection;
    ctx.lr = 0x82F2A2F8;
    __imp__RtlEnterCriticalSection(ctx, base);

    // Iterate the doubly-linked observer list.
    // Guard with a cap to prevent infinite loops from list corruption.
    uint32_t current = PPC_LOAD_U32(kListSentinel); // sentinel->next = head
    uint32_t iters   = 0;
    while (current != kListSentinel && current != 0 && ++iters <= 256) {
        uint32_t next   = PPC_LOAD_U32(current + 0); // node->next
        uint32_t fn_ptr = PPC_LOAD_U32(current + 8); // node->fn_ptr

        if (fn_ptr != 0) {
            REXLOG_DEBUG("sub_82F2A2D8: opcode={} node={:#010x} fn_ptr={:#010x}",
                         opcode, current, fn_ptr);
            ctx.r3.u64  = opcode;
            ctx.ctr.u64 = fn_ptr;
            ctx.lr      = 0x82F2A328;
            PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
        } else {
            REXLOG_DEBUG("sub_82F2A2D8: opcode={} node={:#010x} fn_ptr=0 (skip)",
                         opcode, current);
        }

        current = next;
    }

    if (iters > 256) {
        REXLOG_WARN("sub_82F2A2D8: list iteration cap hit (possible corruption)");
    }

    // Leave critical section
    ctx.r3.u64 = kCritSection;
    ctx.lr     = 0x82F2A338;
    __imp__RtlLeaveCriticalSection(ctx, base);

    ctx.r3.u64 = 0;
}

// =============================================================================
// sub_82F333F8  –  MT Framework XAPI thread trampoline (safe override)
//
// This function is the xapi_thread_startup passed to ExCreateThread by MT
// Framework.  The SDK launches every worker thread at this address.  Its job:
//   1. Notify observers "thread is starting"  (sub_82F2A2D8 r3=1)
//   2. Call actual thread function            (start_address(start_context))
//   3. Notify observers "thread is ending"   (sub_82F2A2D8 r3=0)
//   4. ExTerminateThread
//
// The observer list at 0x8309DD7C has a node whose fn_ptr field is 0
// (uninitialized at the time threads launch — either a race condition or a
// relocation that didn't apply).  Calling PPC_CALL_INDIRECT_FUNC(0) crashes.
//
// Fix: override with PPC_FUNC_IMPL (strong symbol beats PPC_WEAK_FUNC).
// We keep observer notifications, but rely on sub_82F2A2D8's selective filter
// (skip only fn_ptr=0) to avoid null-execute crashes.
// =============================================================================
extern "C" PPC_FUNC(__imp__ExTerminateThread);

PPC_FUNC_IMPL(__imp__sub_82F333F8) {
    PPC_FUNC_PROLOGUE();

    const uint32_t start_address = ctx.r3.u32;   // thread entry point
    const uint32_t start_context = ctx.r4.u32;   // thread argument

    // Create the -128-byte guest stack frame that the original trampoline
    // builds, so the called thread function's own prologue sees valid linkage.
    const uint32_t old_sp = ctx.r1.u32;
    const uint32_t new_sp = old_sp - 128u;
    PPC_STORE_U32(new_sp, old_sp);   // back-chain word (stwu r1,-128(r1))
    ctx.r1.u32 = new_sp;

    // Notify observers: thread starting (opcode=1).
    ctx.r3.u64 = 1u;
    ctx.lr = 0x82F33424;
    __imp__sub_82F2A2D8(ctx, base);

    uint32_t exit_code = 0;

    if (start_address != 0) {
        REXLOG_DEBUG("sub_82F333F8: calling {:#010x}(ctx={:#010x})", start_address, start_context);
        // Pass start_context as the sole argument (PPC r3 calling convention).
        ctx.r3.u64 = start_context;
        // Set lr so the thread function can branch-and-link back here if needed.
        ctx.lr = 0x82F33454; // original blr target (nop epilogue in original)
        ctx.ctr.u64 = start_address;
        PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
        exit_code = ctx.r3.u32; // thread's return value
        REXLOG_DEBUG("sub_82F333F8: {:#010x} returned {}", start_address, exit_code);
    } else {
        REXLOG_WARN("sub_82F333F8: start_address is 0, skipping thread body");
    }

    // Notify observers: thread ending (opcode=0).
    ctx.r3.u64 = 0u;
    ctx.lr = 0x82F33474;
    __imp__sub_82F2A2D8(ctx, base);

    // Restore stack (matches the original addi r1,r1,128; restgprlr epilogue).
    ctx.r1.u32 = old_sp;

    // ExTerminateThread(exit_code)
    ctx.r3.u64 = exit_code;
    ctx.lr = 0; // no return from ExTerminateThread
    __imp__ExTerminateThread(ctx, base);
}

// =============================================================================
// sub_8277DA68  –  MT Framework worker thread virtual dispatch
//
// This function is called by each worker thread (via the 82F333F8 trampoline).
// Generated PPC (umvc3_recomp_recomp.69.cpp):
//   lis  r11, -31983         → r11 = 0x83110000
//   mr   r4, r3              → r4 = start_context (thread arg)
//   lwz  r3, -8908(r11)      → r3 = *( 0x83110000 - 0x22CC ) = *(0x8310DD34)
//   lwz  r10, 0(r3)          → r10 = vtable = *(r3)
//   lwz  r9, 64(r10)         → r9 = vtable[64] (virtual method #16)
//   mtctr r9 ; bctr          → call vtable[64](r3=obj, r4=start_context)
//
// IMPORTANT: the global IS at 0x8310DD34, NOT 0x82BEDD34 (historical mistake).
// 0x82BEDD34 is a DIFFERENT singleton used by the observer loop (sub_82F2A2D8).
// No tag-stripping: the value at 0x8310DD34 is a plain pointer, used directly.
//
// PROBLEM: At thread startup the value at 0x8310DD34 may not yet be set.
// FIX: Spin-wait until non-zero, then call vtable[64].
// =============================================================================
// Correct guest address of the cJobManager-style global used by this function:
static constexpr uint32_t kWorkerGlobalAddr = 0x8310DD34u;

PPC_FUNC_IMPL(__imp__sub_8277DA68) {
    PPC_FUNC_PROLOGUE();

    const uint32_t start_context = ctx.r3.u32;  // thread start_context

    REXLOG_INFO("sub_8277DA68: OVERRIDE called ctx={:#010x} base={:p}",
                start_context, (void*)base);

    // Host address that corresponds to guest address kWorkerGlobalAddr.
    const void* host_addr = (const void*)(base + kWorkerGlobalAddr);
    REXLOG_DEBUG("sub_8277DA68: reading global at guest={:#010x} host={:p}",
                 kWorkerGlobalAddr, host_addr);

    // Spin until the global singleton is initialized (may race with main init).
    uint32_t global_ptr = 0;
    int retries = 0;
    while ((global_ptr = PPC_LOAD_U32(kWorkerGlobalAddr)) == 0) {
        if (++retries == 1) {
            REXLOG_WARN("sub_8277DA68: global at {:#010x} is null, spinning...", kWorkerGlobalAddr);
        }
        if (retries > 50000) {
            REXLOG_ERROR("sub_8277DA68: global still null after 50000 retries – aborting thread");
            ctx.r3.u64 = 0;
            return;
        }
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }

    if (retries > 0) {
        REXLOG_INFO("sub_8277DA68: global ready after {} retries -> {:#010x}", retries, global_ptr);
    } else {
        REXLOG_DEBUG("sub_8277DA68: global={:#010x} (already initialized)", global_ptr);
    }

    // No tag stripping: the generated code uses global_ptr directly as the
    // object pointer (r3 = raw value from 0x8310DD34, no & ~0x7 strip).
    // The object at this address is a plain C++ pointer, not a tagged ptr.
    const uint32_t obj_ptr = global_ptr;
    REXLOG_DEBUG("sub_8277DA68: global_ptr={:#010x} obj_ptr={:#010x} host={:p}",
                 global_ptr, obj_ptr, (void*)(base + obj_ptr));

    // The singleton object at obj_ptr may not be fully constructed yet
    // (vtable field = 0 means ctor hasn't run). Spin until vtable is non-null.
    // Log the vtable value every 5 seconds to diagnose singleton construction.
    uint32_t vtable = 0;
    uint64_t vtable_retries = 0;
    while ((vtable = PPC_LOAD_U32(obj_ptr + 0)) == 0) {
        ++vtable_retries;
        if (vtable_retries == 1) {
            REXLOG_WARN("sub_8277DA68: object at {:#010x} vtable=null, spinning...", obj_ptr);
        }
        // Log current vtable value every 5 seconds (50000 × 100µs = 5s)
        if (vtable_retries % 50000 == 0) {
            uint32_t current_val = PPC_LOAD_U32(obj_ptr + 0);
            REXLOG_WARN("sub_8277DA68: vtable still null after {}s "
                        "(obj={:#010x} raw={:#010x}) – still waiting...",
                        vtable_retries / 10000, obj_ptr, current_val);
            spdlog::default_logger()->flush();
        }
        // Keep wait bounded to avoid startup stalls if singleton construction
        // never completes in this run.
        // 6000000 * 100µs ≈ 600s (10 min) — matches XamLoaderTerminateTitle intercept.
        if (vtable_retries > 6000000ULL) {
            REXLOG_WARN("sub_8277DA68: vtable null after ~10 min, aborting worker dispatch");
            spdlog::default_logger()->flush();
            ctx.r3.u64 = 0;
            return;
        }
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }
    if (vtable_retries > 0) {
        REXLOG_INFO("sub_8277DA68: vtable ready after {}s retries -> {:#010x}",
                    vtable_retries / 10000, vtable);
    } else {
        REXLOG_DEBUG("sub_8277DA68: vtable={:#010x}", vtable);
    }

    // Load vtable and dispatch to virtual method at offset 64.
    const uint32_t fn = PPC_LOAD_U32(vtable + 64);

    REXLOG_DEBUG("sub_8277DA68: obj_ptr={:#010x} vtable={:#010x} fn={:#010x} start_ctx={:#010x}",
                 obj_ptr, vtable, fn, start_context);

    if (fn == 0) {
        REXLOG_ERROR("sub_8277DA68: virtual fn at vtable+64 is null, aborting");
        ctx.r3.u64 = 0;
        return;
    }

    // Match generated code exactly:
    //   r3 = raw global_ptr (the object pointer, no tags)
    //   r4 = start_context (thread argument passed in r3 on entry)
    //   ctr = vtable[64]
    ctx.r4.u64 = start_context;
    ctx.r3.u64 = global_ptr;
    ctx.ctr.u64 = fn;
    PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
}
// NOTE: sub_82F32098 (NtWaitForSingleObjectEx wrapper) is intentionally NOT
// overridden here.  The rexkerneld.lib implementation handles it correctly.
// Our previous override using __savegprlr_28/__restgprlr_28 in a standalone
// context was corrupting the guest stack (those save/restore helpers assume
// they are called at the start/end of a single continuous PPC function frame).
// The null-execute that results when handle==0 is caught by the VEH above.

// NOTE: sub_827A5BD0 (MT Framework physical job dispatcher) is intentionally
// NOT overridden here.  Stubbing it caused a deadlock:
//   - The main thread submits jobs (including the singleton constructor) to
//     the queue managed by sub_827A5BD0.
//   - With our stub, those jobs never execute, so the singleton at 0x08E80007
//     is never constructed, and the 6 worker threads in sub_8277DA68 spin on
//     vtable==null forever.
// The rexkerneld-generated code handles the queue correctly.  Any null-execute
// that arises from uninitialized job tasks is caught by the VEH above.

// =============================================================================
// Diagnostic: sub_82B39AD8 – type registry lookup used by app factory
// =============================================================================
PPC_FUNC_IMPL(__imp__sub_82B39AD8) {
    PPC_FUNC_PROLOGUE();
    const uint32_t input_r3 = ctx.r3.u32;  // save input
    // r11 = PPC_LOAD_U32(r3+24)
    uint32_t r11 = PPC_LOAD_U32(input_r3 + 24);
    ctx.r11.u64 = r11;
    // lis r10,-31983 = 0x83110000; addi r9,r10,9416 = table base
    ctx.r10.s64 = -2096037888;
    uint32_t r9 = ctx.r10.u32 + 9416u;
    ctx.r9.u64 = r9;
    // r8 = (r11 >> 1) & 0xFC = index (rlwinm r8,r11,31,24,29)
    uint32_t r8 = (__builtin_rotateleft32(r11, 31)) & 0xFC;
    ctx.r8.u64 = r8;
    // r3 = table[r8]
    uint32_t result = PPC_LOAD_U32(r8 + r9);
    ctx.r3.u64 = result;
    return;
}

// =============================================================================
// GPU interrupt callback capture
//
// When the game calls VdSetGraphicsInterruptCallback(callback_fn, user_data),
// it registers a PPC function to be called by the GPU driver on each VBlank.
// In a normal flow: GPU Commands thread processes PM4_XE_SWAP → calls
// GraphicsSystem::DispatchInterruptCallback → executes the PPC callback which
// signals the event/semaphore the main thread is waiting on.
//
// Since we override VdInitializeRingBuffer as no-op (ring buffer is never
// properly initialized because D3D init is broken), the GPU Commands thread
// never processes PM4_XE_SWAP, so DispatchInterruptCallback is never called,
// and the main thread's VBlank wait times out after ~10 seconds → GPU hang
// detector reads GPU MMIO at physical_membase+0x10 → AV.
//
// FIX: Capture the interrupt callback here. Our VdSwap override disptaches
// this callback directly (simulating the VBlank interrupt), waking the main
// thread's wait without needing a functional GPU Commands thread.
// =============================================================================
static std::atomic<uint32_t> g_gpu_interrupt_callback{0};
static std::atomic<uint32_t> g_gpu_interrupt_user_data{0};
// VIRTUAL base address of the GPU ring buffer (set lazily in VdSwap from buffer_guest).
// This is in the 0xA0000000 range so PPC_STORE_U32 and TranslatePhysical alias the same pages.
static std::atomic<uint32_t> g_ring_buffer_base{0};
// Size of the GPU ring buffer in bytes (captured from VdInitializeRingBuffer).
static std::atomic<uint32_t> g_ring_buffer_size{0};
// log2 of ring size (as passed to VdInitializeRingBuffer), needed for lazy CP init.
static std::atomic<uint32_t> g_ring_size_log2{0};
// True once CommandProcessor::InitializeRingBuffer was called with the correct physical address.
static std::atomic<bool> g_ring_cp_initialized{false};
// Physical base address of the actual GPU ring buffer (derived lazily in VdSwap from buffer_guest).
static std::atomic<uint32_t> g_ring_phys_addr{0};
// Physical base address of the rendering ring (first VdSwap ring slice, 0x16eXXXXX).
// Set once at VdSwap #1. Used to compute absolute write_ptr across slices.
static std::atomic<uint32_t> g_render_ring_phys_base{0};
// Previous frame's absolute write pointer (dwords from render ring base).
// The CURRENT frame's PM4 lives at [g_prev_abs_write_ptr .. abs_write_ptr).
static std::atomic<uint32_t> g_prev_abs_write_ptr{0};

// =============================================================================
// OurGpuWriteThunk – GPU MMIO CP_RB_WPTR suppressor
//
// Patched directly into the existing MMIORange's write pointer (via
// MMIOHandler::global_handler()->LookupRange()) in VdSwap #1.  This replaces
// in-place rather than adding a new range entry (AddVirtualMappedRange appends
// to the end; CheckStore returns on first match, so a new entry would never
// be reached).
//
// Primary goal: suppress CP_RB_WPTR (0x01C5) writes after we switch to the
// rendering ring.  The game writes slice-local offsets to CP_RB_WPTR, which
// would advance write_ptr_index_ past our carefully placed PM4 into garbage
// data → CP processes garbage → floods of unknown-register warnings + crash.
//
// All other GPU MMIO writes are forwarded to the saved original handler
// (GraphicsSystem::WriteRegisterThunk) so rendering state is updated normally.
// =============================================================================

// Saved original GPU MMIO write callback and context (GraphicsSystem*).
// Populated in VdSwap #1; forwarded-to for all non-0x01C5 GPU register writes.
static rex::runtime::MMIOWriteCallback g_original_gpu_write = nullptr;
static void*                           g_original_gpu_ctx   = nullptr;

static void OurGpuWriteThunk(void* ppc_context, void* /*ctx*/, uint32_t addr, uint32_t value) {
    const uint32_t r = (addr & 0xFFFFu) / 4u;
    if (r == 0x01C5u) {
        // CP_RB_WPTR: suppress. VdSwap drives the write pointer exclusively.
        return;
    }
    // Forward all other GPU MMIO writes to the original GraphicsSystem handler
    // so register_file_ stays up-to-date (viewport, surface address, etc.).
    if (g_original_gpu_write) {
        g_original_gpu_write(ppc_context, g_original_gpu_ctx, addr, value);
    }
}

// =============================================================================
// VdInitializeRingBuffer – capture ring buffer base and forward to real impl
//
// We override VdInitializeRingBuffer so we can capture the ring buffer physical
// base address (r3 = ptr) into g_ring_buffer_base. VdSwap uses this to compute
// the new ring buffer write pointer index (dword count from base) that it needs
// to write to CP_RB_WPTR MMIO register to wake the GPU Commands thread.
//
// We forward to CommandProcessor::InitializeRingBuffer (same as rexkerneld's
// VdInitializeRingBuffer_entry) to preserve the real ring buffer setup.
// =============================================================================
PPC_FUNC_IMPL(__imp__VdInitializeRingBuffer) {
    PPC_FUNC_PROLOGUE();
    const uint32_t ptr       = ctx.r3.u32;   // ring buffer physical base address
    const uint32_t size_log2 = ctx.r4.u32;   // log2 of ring buffer size in 8-byte units
    const uint32_t ring_size = uint32_t(1u) << (size_log2 + 3u);
    REXLOG_INFO("VdInitializeRingBuffer: ptr={:#010x} size_log2={} (ring_size={} bytes)",
                ptr, size_log2, ring_size);
    g_ring_buffer_size.store(ring_size, std::memory_order_release);
    g_ring_size_log2.store(size_log2, std::memory_order_release);
    // Forward to CommandProcessor so the CP worker thread is ready to process packets
    // when the game writes CP_RB_WPTR (reg 0x01C5) during D3D initialisation.
    // Without this, UpdateWritePointer signals an uninitialised CP which would then try
    // to read from physical address 0 (primary_buffer_ptr_=0).
    {
        auto* gs = static_cast<rex::graphics::GraphicsSystem*>(
            ctx.kernel_state->emulator()->graphics_system());
        if (gs && gs->command_processor()) {
            gs->command_processor()->InitializeRingBuffer(ptr, size_log2);
            REXLOG_INFO("VdInitializeRingBuffer: forwarded InitializeRingBuffer(ptr={:#010x})", ptr);
        } else {
            REXLOG_WARN("VdInitializeRingBuffer: graphics_system/command_processor null, skipping InitializeRingBuffer");
        }
    }
    ctx.r3.u64 = 0;
}

PPC_FUNC_IMPL(__imp__VdSetGraphicsInterruptCallback) {
    PPC_FUNC_PROLOGUE();
    const uint32_t callback  = ctx.r3.u32; // PPC guest function address
    const uint32_t user_data = ctx.r4.u32; // opaque data passed to callback
    REXLOG_INFO("VdSetGraphicsInterruptCallback: callback={:#010x} user_data={:#010x}",
                callback, user_data);
    g_gpu_interrupt_callback.store(callback,  std::memory_order_release);
    g_gpu_interrupt_user_data.store(user_data, std::memory_order_release);
    // Forward to rexkerneld's GraphicsSystem so DispatchInterruptCallback works.
    // Without this, the CP thread processes XE_SWAP → IssueSwap → DispatchInterruptCallback
    // but has no registered callback → the game thread that is waiting for a GPU fence
    // after VdSwap never wakes up → VdSwap #2 is never called.
    auto* gs = static_cast<rex::graphics::GraphicsSystem*>(
        ctx.kernel_state->emulator()->graphics_system());
    if (gs) {
        gs->SetInterruptCallback(callback, user_data);
    }
}

// =============================================================================
// VdSwap – GPU present/swap dispatcher
//
// State (sessão 7):
//   • physical_membase committed (512MB) ✅
//   • VdInitializeRingBuffer forwarded to rexkerneld (ring buffer initialized) ✅
//   • fetch_ptr = real D3D9 texture fetch constant (not garbage 0x4) ✅
//   • GPU Commands thread active (xthread 3), processing ring buffer ✅
//
// Our override:
//   • Reads the front buffer physical address from the GPU texture fetch
//     constant at fetch_ptr (dword_1 bits [12:31] = virt_addr >> 12), then
//     translates virt → phys using Xbox 360 aliasing rules.
//   • Writes a correct PM4_XE_SWAP packet into buffer_guest so the GPU
//     Commands thread calls IssueSwap() with the real physical address →
//     D3D12 presents the front buffer → game content appears on screen.
//   • Captures and dispatches the VBlank interrupt callback directly
//     (since VdSetGraphicsInterruptCallback is NOT forwarded to rexkerneld's
//     GPU system, DispatchInterruptCallback has no registered callback; we
//     must fire it manually so the main thread's VBlank wait returns).
// =============================================================================
PPC_FUNC_IMPL(__imp__VdSwap) {
    PPC_FUNC_PROLOGUE();

    // r3 = buffer_ptr        (write position in the primary ring buffer)
    // r4 = fetch_ptr         (D3D9 texture fetch constant for the front buffer)
    // r5 = unk2, r6 = unk3, r7 = unk4
    // r8 = frontbuffer_ptr   (guest ptr whose *value* is the front buffer vaddr)
    // r9 = texture_format_ptr, r10 = color_space_ptr, r11 = width_ptr, r12 = height_ptr
    const uint32_t buffer_guest  = ctx.r3.u32;
    const uint32_t fetch_guest   = ctx.r4.u32;
    const uint32_t fb_ptr_guest  = ctx.r8.u32;

    static std::atomic<uint32_t> s_swap_count{0};
    uint32_t n = ++s_swap_count;
    if (n <= 5 || (n % 300 == 0)) {
        REXLOG_INFO("VdSwap #{}: buffer={:#010x} fetch={:#010x} fb_ptr={:#010x}",
                    n, buffer_guest, fetch_guest, fb_ptr_guest);
    }

    // ---------------------------------------------------------------------------
    // Compute the real front buffer PHYSICAL address for PM4_XE_SWAP.
    //
    // The real VdSwap_entry reads the gpu_texture_fetch_t at fetch_ptr, extracts
    // base_address (bits [12:31] of dword_1, which is virtual_addr >> 12), and
    // calls GetPhysicalAddress() to find the GPU physical offset.
    //
    // We replicate that here using the Xbox 360 memory layout:
    //   Uncached/write-combined: 0xA0000000–0xBFFFFFFF → phys = virt & 0x1FFFFFFF
    //   Cached coherent:         0x80000000–0x9FFFFFFF → phys = virt & 0x1FFFFFFF
    //   Direct physical range:   0x00000000–0x1FFFFFFF → phys = virt
    //
    // Primary source: *frontbuffer_ptr (== gpu_fetch.base_address << 12 per rexkrnld assert)
    // Fallback:       parse dword_1 of the texture fetch constant at fetch_ptr
    // ---------------------------------------------------------------------------
    uint32_t frontbuffer_phys = 0u;
    {
        // Primary: read front buffer virtual address from *r8
        uint32_t fbva = 0u;
        if (fb_ptr_guest >= 0x1000u && fb_ptr_guest < 0xF0000000u) {
            fbva = PPC_LOAD_U32(fb_ptr_guest);
        }
        // Fallback: parse bits [12:31] of gpu_texture_fetch_t dword_1 at fetch_ptr+4
        if (fbva == 0u && fetch_guest >= 0x1000u && fetch_guest < 0xF0000000u) {
            uint32_t dw1 = PPC_LOAD_U32(fetch_guest + 4u);
            fbva = ((dw1 >> 12) & 0xFFFFFu) << 12;
        }
        // Translate virtual → GPU physical offset
        if (fbva >= 0xA0000000u) {
            frontbuffer_phys = fbva & 0x1FFFFFFFu;   // uncached/write-combined alias
        } else if (fbva >= 0x80000000u) {
            frontbuffer_phys = fbva & 0x1FFFFFFFu;   // cached coherent alias
        } else if (fbva >= 0x1000u) {
            frontbuffer_phys = fbva;                  // already physical / tiled
        }
        if (n <= 5 || (n % 300 == 0)) {
            REXLOG_INFO("VdSwap #{}: fbva={:#010x} frontbuffer_phys={:#010x}",
                        n, fbva, frontbuffer_phys);
        }
    }

    // Read actual resolution from fetch constant dword_2 (size_2d: width[13] | height[13])
    uint32_t actual_width = 1280u, actual_height = 720u;
    if (fetch_guest >= 0x1000u && fetch_guest < 0xF0000000u) {
        uint32_t dw2 = PPC_LOAD_U32(fetch_guest + 8u);
        uint32_t w = (dw2 & 0x1FFFu) + 1u;
        uint32_t h = ((dw2 >> 13) & 0x1FFFu) + 1u;
        if (w >= 64u && w <= 4096u) actual_width  = w;
        if (h >= 64u && h <= 4096u) actual_height = h;
    }

    // Write PM4 commands into the ring buffer.
    //
    // DESIGN: The rendering ring (0x16e00000+) is ONE large continuous buffer used across
    // all frames. Each frame's game rendering PM4 starts at the PREVIOUS frame's write_ptr
    // (not at offset 0 of any slice). We initialize the CP to the rendering ring ONCE at
    // VdSwap #1, then track an ABSOLUTE write_ptr that grows monotonically across slices:
    //
    //   abs_write_ptr = (ring_phys_frame - g_render_ring_phys_base)/4 + local_write_ptr
    //
    // This ensures the CP always reads [prev_write_ptr..new_write_ptr) — exactly the PM4
    // the game wrote for this frame — without ever re-reading old or stale data.
    //
    // WHY NOT per-frame InitializeRingBuffer:
    //   InitializeRingBuffer resets read_ptr=0. The game's PM4 for frame N starts at
    //   off_ring (not 0). Data at [0..off_ring) in the slice is left over from the
    //   PREVIOUS session (physical memory not zeroed). When the CP reads from 0 it hits
    //   stale TYPE0 packets with huge counts → ExecutePacketType0 overflow → fail.
    //
    // CP_RB_WPTR MMIO (register 0x01C5): rexglue DOES handle this → UpdateWritePointer.
    //   But the game's MMIO updates point to the INIT ring (0x1e160000), not the rendering
    //   ring. So we must call UpdateWritePointer ourselves here.
    {
        const uint32_t ring_size = g_ring_buffer_size.load(std::memory_order_acquire);
        if (ring_size != 0u && buffer_guest >= 0xA0000000u && buffer_guest < 0xC0000000u) {
            // Derive ring physical base for this slice (ring_size-aligned below buffer_guest).
            const uint32_t ring_phys_frame  = (buffer_guest - 0xA0000000u) & ~(ring_size - 1u);
            const uint32_t ring_base_frame  = 0xA0000000u + ring_phys_frame;

            // Track changes so we log only when the ring slice switches.
            const uint32_t prev_ring = g_ring_phys_addr.exchange(ring_phys_frame, std::memory_order_acq_rel);

            auto* gs = static_cast<rex::graphics::GraphicsSystem*>(
                ctx.kernel_state->emulator()->graphics_system());

            if (gs && gs->command_processor()) {
                if (prev_ring != ring_phys_frame) {
                    REXLOG_INFO("VdSwap #{}: ring slice switch {:#010x} -> {:#010x}",
                                n, prev_ring, ring_phys_frame);
                }

                // Pause the CP: wait for the PREVIOUS frame's PM4 (including XE_SWAP)
                // to finish before writing this frame's PM4 into the ring and calling
                // UpdateWritePointer.  This implements VdSwap's real "wait for GPU ready"
                // semantic — the rendering thread blocks here until the CP is idle,
                // providing natural frame-rate synchronisation without InitializeRingBuffer.
                REXLOG_INFO("VdSwap #{}: calling Pause() [t={}]", n,
                            ::GetCurrentThreadId());
                gs->command_processor()->Pause();
                REXLOG_INFO("VdSwap #{}: Pause() returned", n);

                // VdSwap #1 only: switch CP from init ring (0x1e160000, 32KB) to the
                // rendering ring. Use a large ring size (sl2=23 → 64MB virtual ring) so
                // the CP's ring-size check doesn't spuriously wrap for many frames.
                // abs_write_ptr grows monotonically relative to render_ring_base and
                // will correctly address slice 1, 2, 3, ... via a single base pointer
                // because the physical pages are contiguous.
                uint32_t render_base = g_render_ring_phys_base.load(std::memory_order_acquire);
                if (render_base == 0u) {
                    // First VdSwap: establish the rendering ring.
                    // CP is already paused (outer Pause() above), so InitializeRingBuffer
                    // is safe to call without an additional Pause/Resume.
                    render_base = ring_phys_frame;
                    g_render_ring_phys_base.store(render_base, std::memory_order_release);
                    // sl2=23 → primary_buffer_size = 2^26 = 64MB (virtual ring limit).
                    gs->command_processor()->InitializeRingBuffer(render_base, 23u);
                    REXLOG_INFO("VdSwap #{}: rendering ring initialized at {:#010x} (64MB virtual)",
                                n, render_base);

                    // Patch the existing GPU MMIO range's write callback to suppress
                    // CP_RB_WPTR (0x01C5) writes from the game while the rendering ring
                    // is active.  We use LookupRange + in-place replacement rather than
                    // AddVirtualMappedRange (which appends to end; CheckStore first-match
                    // would still hit the original handler first).
                    {
                        auto* mmio = rex::runtime::MMIOHandler::global_handler();
                        if (mmio) {
                            auto* range = mmio->LookupRange(0x7FC80000u);
                            if (range) {
                                g_original_gpu_write = range->write;
                                g_original_gpu_ctx   = range->callback_context;
                                range->write = OurGpuWriteThunk;
                                REXLOG_INFO("VdSwap #{}: GPU MMIO write handler REPLACED "
                                            "(CP_RB_WPTR suppressor active, original={:p})",
                                            n, reinterpret_cast<void*>(g_original_gpu_write));
                            } else {
                                REXLOG_ERROR("VdSwap #{}: GPU MMIO LookupRange(0x7FC80000) returned null!", n);
                            }
                        } else {
                            REXLOG_ERROR("VdSwap #{}: MMIOHandler::global_handler() is null!", n);
                        }
                    }
                }

                // Fill the gap between the previous frame's PM4 end and this frame's
                // slice start with PM4 NOPs (0x80000000 = type-2 NOP).
                // Without this the CP reads zeros in the gap, which the PM4 decoder
                // interprets as TYPE0 packets targeting register 0 → thousands of
                // spurious "Write to unknown register" warnings and potential crashes.
                {
                    const uint32_t early_slice_off = (ring_phys_frame - render_base) / 4u;
                    const uint32_t gap_start = g_prev_abs_write_ptr.load(std::memory_order_acquire);
                    REXLOG_INFO("VdSwap #{}: NOP-fill check: early_slice_off={} gap_start={} diff={}",
                                n, early_slice_off, gap_start,
                                (early_slice_off > gap_start) ? (early_slice_off - gap_start) : 0u);
                    if (early_slice_off > gap_start) {
                        const uint32_t gap_dwords = early_slice_off - gap_start;
                        REXLOG_INFO("VdSwap #{}: NOP-filling gap [{}, {}) = {} dwords",
                                    n, gap_start, early_slice_off, gap_dwords);
                        for (uint32_t gi = 0u; gi < gap_dwords; ++gi) {
                            PPC_STORE_U32(0xA0000000u + render_base + (gap_start + gi) * 4u, 0x80000000u);
                        }
                        REXLOG_INFO("VdSwap #{}: NOP-fill done", n);
                    }
                }

                // Write TYPE0 (fetch constant) + PM4_XE_SWAP at buffer_guest.
                uint32_t off = 0u;
                if (fetch_guest >= 0x1000u && fetch_guest < 0xF0000000u && frontbuffer_phys != 0u) {
                    // MakePacketType0(XE_GPU_REG_SHADER_CONSTANT_FETCH_00_0=0x4800, count=6)
                    PPC_STORE_U32(buffer_guest + off * 4u, 0x00054800u); off++;
                    PPC_STORE_U32(buffer_guest + off * 4u, PPC_LOAD_U32(fetch_guest + 0u)); off++;
                    {
                        uint32_t dw1 = PPC_LOAD_U32(fetch_guest + 4u);
                        dw1 = (dw1 & 0x00000FFFu) | ((frontbuffer_phys >> 12u) << 12u);
                        PPC_STORE_U32(buffer_guest + off * 4u, dw1); off++;
                    }
                    PPC_STORE_U32(buffer_guest + off * 4u, PPC_LOAD_U32(fetch_guest + 8u)); off++;
                    PPC_STORE_U32(buffer_guest + off * 4u, PPC_LOAD_U32(fetch_guest + 12u)); off++;
                    PPC_STORE_U32(buffer_guest + off * 4u, PPC_LOAD_U32(fetch_guest + 16u)); off++;
                    PPC_STORE_U32(buffer_guest + off * 4u, PPC_LOAD_U32(fetch_guest + 20u)); off++;
                }
                // PM4_XE_SWAP: MakePacketType3(0x64, count=4) = 0xC0036400
                PPC_STORE_U32(buffer_guest + off * 4u, 0xC0036400u); off++;
                PPC_STORE_U32(buffer_guest + off * 4u, 0x50415753u); off++; // kSwapSignature = make_fourcc("SWAP")
                PPC_STORE_U32(buffer_guest + off * 4u, frontbuffer_phys); off++;
                PPC_STORE_U32(buffer_guest + off * 4u, actual_width); off++;
                PPC_STORE_U32(buffer_guest + off * 4u, actual_height); off++;
                // Trailing NOPs so the CP reader has clean padding.
                for (uint32_t i = off; i < off + 5u; i++) {
                    PPC_STORE_U32(buffer_guest + i * 4u, 0x80000000u);
                }

                // Compute absolute write_ptr from the rendering ring base.
                // frame_slice_offset = dword distance from render_ring_base to this slice.
                // offset_in_ring     = dword offset of buffer_guest within this slice.
                // abs_write_ptr      = total dwords from render_ring_base to end of our PM4.
                // CP reads [prev_abs_write_ptr .. abs_write_ptr): exactly this frame's PM4.
                const uint32_t offset_in_ring   = (buffer_guest - ring_base_frame) / 4u;
                const uint32_t frame_slice_off  = (ring_phys_frame - render_base) / 4u;
                const uint32_t abs_write_ptr    = frame_slice_off + offset_in_ring + off + 5u;
                if (n <= 5 || (n % 300 == 0)) {
                    REXLOG_INFO("VdSwap #{}: buf={:#010x} ring_phys={:#010x} "
                                "fb_phys={:#010x} off_ring={} abs_write_ptr={}",
                                n, buffer_guest, ring_phys_frame,
                                frontbuffer_phys, offset_in_ring, abs_write_ptr);
                }

                // Pre-scan the frame's PM4 stream and patch any TYPE0 writes to
                // SQ_VS_CONST (0x2307) / SQ_PS_CONST (0x2308) that carry non-standard
                // values (not 0x000FF000 / 0x000FF100 / 0x0).
                // The rexglue D3D12 backend has assert_true on these — non-standard
                // values abort the CP thread via SIGABRT.
                {
                    const uint32_t scan_from = g_prev_abs_write_ptr.load(std::memory_order_acquire);
                    const uint32_t scan_to   = frame_slice_off + offset_in_ring; // game's PM4 only, not our XE_SWAP
                    uint32_t si = scan_from;
                    while (si < scan_to) {
                        // Virtual address of dword si (in render ring physical space → 0xA0... alias)
                        const uint32_t vaddr = 0xA0000000u + render_base + si * 4u;
                        if (vaddr < 0xA0000000u || vaddr >= 0xC0000000u) break;
                        const uint32_t hdr  = PPC_LOAD_U32(vaddr);
                        const uint32_t type = (hdr >> 30) & 3u;
                        if (type == 0u) {
                            // TYPE0: base_reg[14:0], count-1[29:16]
                            const uint32_t base  = hdr & 0x7FFFu;
                            const uint32_t count = ((hdr >> 16) & 0x3FFFu) + 1u;
                            for (uint32_t r = 0; r < count && (si + 1u + r) < scan_to; ++r) {
                                const uint32_t reg = base + r;
                                const uint32_t va  = vaddr + (r + 1u) * 4u;
                                if (reg == 0x2307u) { // SQ_VS_CONST
                                    const uint32_t v = PPC_LOAD_U32(va);
                                    if (v != 0x000FF000u && v != 0u) {
                                        REXLOG_WARN("VdSwap #{}: PM4 patch SQ_VS_CONST {:08X}→000FF000", n, v);
                                        PPC_STORE_U32(va, 0x000FF000u);
                                    }
                                } else if (reg == 0x2308u) { // SQ_PS_CONST
                                    const uint32_t v = PPC_LOAD_U32(va);
                                    if (v != 0x000FF100u && v != 0u) {
                                        REXLOG_WARN("VdSwap #{}: PM4 patch SQ_PS_CONST {:08X}→000FF100", n, v);
                                        PPC_STORE_U32(va, 0x000FF100u);
                                    }
                                }
                            }
                            si += 1u + count;
                        } else if (type == 1u) {
                            si += 3u; // TYPE1: header + 2 values
                        } else if (type == 2u) {
                            si += 1u; // TYPE2: NOP
                        } else {
                            // TYPE3
                            const uint32_t count = ((hdr >> 16) & 0x3FFFu) + 1u;
                            si += 1u + count;
                        }
                    }
                }
                g_prev_abs_write_ptr.store(abs_write_ptr, std::memory_order_release);

                REXLOG_INFO("VdSwap #{}: calling UpdateWritePointer({}) then Resume()", n, abs_write_ptr);
                gs->command_processor()->UpdateWritePointer(abs_write_ptr);
                // Resume the CP: it will now process [prev_abs_write_ptr..abs_write_ptr),
                // which is exactly the game's PM4 for this frame + our XE_SWAP packet.
                gs->command_processor()->Resume();
                REXLOG_INFO("VdSwap #{}: Resume() done", n);
            }
        }
    }

    // Dispatch the VBlank interrupt callback directly as a safety net.
    //
    // The GPU Commands thread will call DispatchInterruptCallback after
    // processing PM4_XE_SWAP → IssueSwap. However, since we override
    // VdSetGraphicsInterruptCallback and do NOT forward to rexkerneld's
    // graphics system, DispatchInterruptCallback in GraphicsSystem has no
    // registered callback. We fire it manually here so the game's main thread
    // VBlank wait is satisfied regardless.
    const uint32_t cb  = g_gpu_interrupt_callback.load(std::memory_order_acquire);
    const uint32_t usd = g_gpu_interrupt_user_data.load(std::memory_order_acquire);
    if (cb != 0) {
        if (n <= 3) {
            REXLOG_INFO("VdSwap #{}: firing GPU interrupt callback {:#010x} usd={:#010x}",
                        n, cb, usd);
        }
        // PPC calling convention: r3=source(1=VBlank), r4=user_data
        ctx.r3.u64 = 1u;   // VBlank interrupt source
        ctx.r4.u64 = usd;
        ctx.ctr.u64 = cb;
        PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
    } else {
        // Interrupt callback not yet registered (early frames) – sleep briefly
        // so the main thread doesn't busy-spin before D3D init registers it.
        if (n <= 3) {
            REXLOG_WARN("VdSwap #{}: interrupt callback not yet registered, sleeping 16ms", n);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }

    ctx.r3.u64 = 0;
}

// NOTE: VdInitializeRingBuffer and VdEnableRingBufferRPtrWriteBack are
// intentionally NOT overridden here. The ring buffer pointer is now valid
// (ptr=0x1009f000) so we forward to rexkerneld to properly set up the GPU
// ring buffer. Without this, the GPU Commands thread asserts in ring_buffer.h:92
// because it tries to read sizeof(T) bytes from an uninitialized ring buffer.
// =============================================================================
// XamShowDirtyDiscErrorUI — NO-OP stub (sessão 7)
//
// rexkerneld's default implementation calls exit(1) unconditionally.
// We stub this to be a no-op so that missing optional files (root.spkg, DLC)
// don't kill the process. The game should handle missing content gracefully.
// =============================================================================
PPC_FUNC_IMPL(__imp__XamShowDirtyDiscErrorUI) {
    PPC_FUNC_PROLOGUE();
    REXLOG_WARN("XamShowDirtyDiscErrorUI: STUBBED (no-op) user_index={} — allowing game to continue",
                ctx.r3.u32);
    ctx.r3.u64 = 0; // return success
}

// =============================================================================
// ExTerminateTitleProcess – process exit interceptor (sessão 7)
//
// rexkerneld's default implementation calls ::TerminateProcess(GetCurrentProcess(), exit_code).
// During bringup this kills the process prematurely, masking game flow that
// happens AFTER an initialization "failure" we can fix (e.g. vtable null).
//
// We intercept: log the call, flush the logger, then block for kBlockSeconds
// before returning 0 (no-op). Worker threads keep running during the block,
// allowing the singleton at 0x08E80000 time to be constructed and the 6
// sub_8277DA68 workers to proceed.
//
// Set kBlockSeconds = 0 to re-enable real termination after bringup.
// =============================================================================
PPC_FUNC_IMPL(__imp__ExTerminateTitleProcess) {
    PPC_FUNC_PROLOGUE();
    static constexpr uint32_t kBlockSeconds = 60;
    const uint32_t exit_code = ctx.r3.u32;
    REXLOG_ERROR("ExTerminateTitleProcess: INTERCEPTED exit_code={:#010x} thread={} "
                 "– blocking process exit for {}s (debug intercept)",
                 exit_code, GetCurrentThreadId(), kBlockSeconds);
    spdlog::default_logger()->flush();
    // Allow other threads to continue running during the block.
    std::this_thread::sleep_for(std::chrono::seconds(kBlockSeconds));
    // Do NOT call the real ExTerminateTitleProcess — just return.
    REXLOG_WARN("ExTerminateTitleProcess: block expired, returning 0 (no-op exit)");
    spdlog::default_logger()->flush();
    ctx.r3.u64 = 0;
}

// =============================================================================
// XamLoaderTerminateTitle – main thread "done" intercept
//
// On Xbox 360, the xstart thread deliberately calls XamLoaderTerminateTitle at
// the end of initialization. The kernel terminates only the calling thread;
// other game threads (workers, audio, GPU) keep running.
//
// In rexglue, KernelState::TerminateTitle() kills ALL guest threads, so the
// workers die with xstart. We intercept XamLoaderTerminateTitle and SLEEP
// instead of terminating, keeping xstart alive (and thus keeping all workers
// alive). The process exits naturally when the user closes the window (which
// triggers rex_app.cpp's QuitFromUIThread → TerminateTitle for real).
// =============================================================================
PPC_FUNC_IMPL(__imp__XamLoaderTerminateTitle) {
    PPC_FUNC_PROLOGUE();
    REXLOG_WARN("XamLoaderTerminateTitle: INTERCEPTED in thread {} "
                "– xstart blocking instead of terminating (keeping workers alive)",
                GetCurrentThreadId());
    spdlog::default_logger()->flush();
    // Sleep for up to 10 minutes — window close will terminate us anyway via
    // rex_app.cpp OnDestroy → TerminateTitle which suspends all guest threads.
    std::this_thread::sleep_for(std::chrono::minutes(10));
    REXLOG_WARN("XamLoaderTerminateTitle: 10-min sleep expired, returning");
    spdlog::default_logger()->flush();
    ctx.r3.u64 = 0;
}