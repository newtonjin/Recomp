/**
 * @file        bdengine/keybinds.h
 *
 * @brief       Key binding parsing and matching utilities.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */
#pragma once
#include <string_view>
#include <rex/ui/virtual_key.h>
#include <rex/ui/ui_event.h>

namespace bd {

// Maps a key name string (e.g. "F3", "Backtick", "A") to VirtualKey.
// Returns VirtualKey::kNone for unrecognized names.
rex::ui::VirtualKey ParseVirtualKey(std::string_view name);

// Reads the named CVar string (must be a string CVar holding a key name)
// and returns true if e.virtual_key() matches the parsed VirtualKey.
// Returns false if the CVar is not found or the key name is unrecognized.
bool MatchesBind(const rex::ui::KeyEvent& e, std::string_view cvar_name);

}  // namespace bd
