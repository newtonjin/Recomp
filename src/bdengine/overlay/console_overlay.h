/**
 * @file        bdengine/overlay/console_overlay.h
 *
 * @brief       ImGui console overlay dialog for viewing captured log output.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */
#pragma once
#include "bdengine/log_capture_sink.h"
#include <rex/ui/imgui_dialog.h>
#include <imgui.h>
#include <deque>
#include <memory>
#include <string>
#include <vector>

namespace bd {

class ConsoleDialog : public rex::ui::ImGuiDialog {
public:
    ConsoleDialog(rex::ui::ImGuiDrawer* imgui_drawer,
                  std::shared_ptr<LogCaptureSink> sink);

    void ToggleVisible();
    bool IsVisible() const { return visible_; }

protected:
    void OnDraw(ImGuiIO& io) override;

private:
    void ExecuteCommand(std::string_view cmd);
    static int InputTextCallback(ImGuiInputTextCallbackData* data);

    bool visible_ = false;
    bool focus_input_next_frame_ = false;
    bool scroll_to_bottom_ = true;
    uint64_t last_generation_ = 0;

    std::shared_ptr<LogCaptureSink> sink_;
    std::vector<LogEntry> entries_;  // refreshed each frame when generation changes

    // Filters
    int min_level_ = 0;  // index into spdlog level enum; 0 = trace
    bool category_filter_[6] = {true, true, true, true, true, true};

    // Command input
    char input_buf_[512] = {};
    std::deque<std::string> history_;
    int history_pos_ = -1;
    static constexpr size_t kMaxHistory = 32;
};

}  // namespace bd
