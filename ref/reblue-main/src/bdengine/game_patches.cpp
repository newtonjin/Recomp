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
#include "bdengine/game_patches.h"

#include <rex/cvar.h>
#include <rex/logging.h>
#include <rex/ppc/types.h>

REXCVAR_DEFINE_BOOL(bd_wireframe,   false, "Enable wireframe rendering", "Patches");
REXCVAR_DEFINE_BOOL(bd_camera_bbox, false, "Enable camera bounding box debug display", "Patches");
REXCVAR_DEFINE_BOOL(bd_debug_menu, false, "Enable debug menu and debug tools", "Patches");

namespace bd {

void InitGamePatches() {
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
