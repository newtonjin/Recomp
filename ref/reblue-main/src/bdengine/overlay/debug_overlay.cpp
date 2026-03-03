/**
 * @file        bdengine/overlay/debug_overlay.cpp
 *
 * @brief       Debug overlay implementation. See debug_overlay.h for details.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */
#include "bdengine/overlay/debug_overlay.h"
#include "bdengine/render_hooks.h"
#include "bdengine/bd_init.h"
#include <imgui.h>

namespace bd {

DebugOverlayDialog::DebugOverlayDialog(rex::ui::ImGuiDrawer* imgui_drawer)
    : ImGuiDialog(imgui_drawer) {}

void DebugOverlayDialog::OnDraw(ImGuiIO& io) {
    if (!visible_) return;

    ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(220, 60), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowBgAlpha(0.5f);
    if (ImGui::Begin("Debug##overlay", nullptr, ImGuiWindowFlags_NoCollapse)) {
        ImGui::Text("%.1f FPS (%.2f ms)", io.Framerate, 1000.0f / io.Framerate);
        auto stats = bd::GetFrameStats();
        if (stats.frame_count > 0) {
            ImGui::Text("Render: %.1f FPS (%.2f ms)", stats.fps, stats.frame_time_ms);
        }
    }
    ImGui::End();
}

}  // namespace bd
