/**
 * @file        bdengine/render_hooks.cpp
 *
 * @brief       Mid-asm hooks for GPU spin-wait yield and frame timing.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */
#include "bdengine/render_hooks.h"
#include "bdengine/bd_init.h"

#include <atomic>
#include <chrono>
#include <thread>

#include <rex/cvar.h>
#include <rex/logging.h>

using Clock = std::chrono::steady_clock;

REXCVAR_DEFINE_BOOL(bd_frame_timing, true, "Show render-thread frame timing in overlay", "Render");

namespace {

constexpr double kTargetFrameMs60 = 1000.0 / 60;  // 60ms

// --- Frame timing state (written on render thread, read from UI thread) ---
std::atomic<double> g_frame_time_ms{0.0};
std::atomic<double> g_fps{0.0};
std::atomic<uint64_t> g_frame_count{0};
Clock::time_point g_frame_start{};

}  // namespace

// -------------------------------------------------------------------------
// Mid-asm hook: gpuRingBufferWaitForSpace spin-wait loop (0x8246E69C)
//
// Hooked at the top of the poll loop body, before bl gpuRingBufferPollReady.
// Yields the thread on each iteration so the OS can schedule other work
// while waiting for GPU ring buffer space. Eliminates ~24.4% CPU burn.
// Returns false - the original instruction (addi r3, r1, var_40) executes
// normally after the yield.
// -------------------------------------------------------------------------
void bdRingBufferYieldHook() {
    std::this_thread::yield();
}

// -------------------------------------------------------------------------
// Mid-asm hook: gpuPresentSwapBuffers entry (0x8246AAB0)
//
// Records timestamp at each present call to measure render-thread frame time.
// Returns false - the original instruction (mflr r12, lr) executes normally.
// -------------------------------------------------------------------------
void bdPresentTimingHook() {
    auto now = Clock::now();
    if (g_frame_start.time_since_epoch().count() != 0) {
        double ms = std::chrono::duration<double, std::milli>(now - g_frame_start).count();
        g_frame_time_ms.store(ms, std::memory_order_relaxed);
        g_fps.store(ms > 0.0 ? 1000.0 / ms : 0.0, std::memory_order_relaxed);
        g_frame_count.fetch_add(1, std::memory_order_relaxed);
    }
    g_frame_start = now;
}

// -------------------------------------------------------------------------
// Mid-asm hook: bdRenderStep frame limiter (0x82132F08)
//
// Hooked just before SetEvent at end of render loop - guaranteed once per
// frame. Sleeps to hit 30fps target.
// -------------------------------------------------------------------------
void bdRenderFrameLimiterHook() {
    static Clock::time_point frame_start{};

    auto now = Clock::now();
    if (frame_start.time_since_epoch().count() != 0) {
        double ms = std::chrono::duration<double, std::milli>(now - frame_start).count();
        double remaining = kTargetFrameMs60 - ms;
        if (remaining > 1.0) {
            std::this_thread::sleep_for(
                std::chrono::microseconds(static_cast<int64_t>((remaining - 1.0) * 1000.0)));
        }
        while (std::chrono::duration<double, std::milli>(Clock::now() - frame_start).count() < kTargetFrameMs60) {
            std::this_thread::yield();
        }
    }
    frame_start = Clock::now();
}

namespace bd {

FrameStats GetFrameStats() {
    return FrameStats{
        g_frame_time_ms.load(std::memory_order_relaxed),
        g_fps.load(std::memory_order_relaxed),
        g_frame_count.load(std::memory_order_relaxed),
    };
}

}  // namespace bd
