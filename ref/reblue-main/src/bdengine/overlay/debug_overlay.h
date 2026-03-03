/**
 * @file        bdengine/overlay/debug_overlay.h
 *
 * @brief       ImGui debug overlay dialog for frame timing display.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */
#pragma once
#include <rex/ui/imgui_dialog.h>

namespace bd {

class DebugOverlayDialog : public rex::ui::ImGuiDialog {
public:
    explicit DebugOverlayDialog(rex::ui::ImGuiDrawer* imgui_drawer);

    void ToggleVisible() { visible_ = !visible_; }
    bool IsVisible() const { return visible_; }

protected:
    void OnDraw(ImGuiIO& io) override;

private:
    bool visible_ = true;
};

}  // namespace bd
