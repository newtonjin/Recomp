/**
 * @file        bdengine/render_hooks.h
 *
 * @brief       Render/GPU hooks
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */
#pragma once

#include <cstdint>

namespace bd {

struct FrameStats {
    double frame_time_ms;
    double fps;
    uint64_t frame_count;
};

// Returns the most recent frame timing stats (thread-safe read).
FrameStats GetFrameStats();

}  // namespace bd
