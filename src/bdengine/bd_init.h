/**
 * @file        bdengine/bd_init.h
 *
 * @brief       CVar declarations and initialization entry points for bdengine.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */
#pragma once

#include <filesystem>
#include <string>

#include <rex/cvar.h>

// CVar declarations - defined in their respective .cpp files
REXCVAR_DECLARE(bool, bd_wireframe);
REXCVAR_DECLARE(bool, bd_camera_bbox);
REXCVAR_DECLARE(bool, bd_debug_menu);
REXCVAR_DECLARE(bool, bd_frame_timing);
REXCVAR_DECLARE(std::string, bind_fullscreen);
REXCVAR_DECLARE(std::string, bind_debug_overlay);
REXCVAR_DECLARE(std::string, bind_settings);
REXCVAR_DECLARE(std::string, bind_console);

namespace bd {

// Initialize native file I/O hooks (CreateFileA, ReadFile, etc.).
// Must be called before game module launch so the hooks are active.
void InitFileHooks(const std::filesystem::path& game_dir);

// Returns the user content root directory for saves and profile data.
// Windows: Documents/reblue   Linux: ~/.local/share/reblue
std::filesystem::path GetUserContentRoot();

// Cache guest membase for game patch hooks
void InitGamePatches();

}  // namespace bd
