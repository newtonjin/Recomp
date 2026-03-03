// assert_override.cpp
// ---------------------------------------------------------------------------
// Strong (non-inline) definition of rex::rex_assert_fail.
//
// rex/assert.h declares this function as `inline` (weak linkage).  We need a
// non-inline strong definition so that:
//   1. The process does NOT call std::terminate / abort on a failed assert.
//   2. The offending thread is parked in an infinite sleep so other threads
//      (render, input, audio) keep running and we can continue diagnosing.
//
// IMPORTANT: This TU intentionally does NOT include rex/assert.h or ANY rex
// headers.  Including them would trigger "redefinition" errors because
// rex/assert.h's inline definition and our non-inline definition would both
// appear in the same TU.  We only pull in CRT / Win32 headers here.
// ---------------------------------------------------------------------------
#include <cstdio>
#include <csignal>
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <Windows.h>

namespace rex {

[[noreturn]] void rex_assert_fail(const char* file, int line,
                                  const char* expr, const char* message) {
    // Raw fprintf first – safe even if logging system is in a bad state.
    fprintf(stderr,
            "\n*** UMVC3 REX ASSERT FAIL ***\n"
            "  File: %s:%d\n"
            "  Expr: %s\n"
            "  Msg:  %s\n\n",
            file    ? file    : "?",
            line,
            expr    ? expr    : "?",
            message ? message : "");
    fflush(stderr);

    // Park this thread forever; other threads (render, input, audio) keep
    // running so we can read logs without losing process state.
    while (true) { ::Sleep(INFINITE); }
}

}  // namespace rex
