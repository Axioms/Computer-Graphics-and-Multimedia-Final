//
// Created by Ben on 11/8/2020.
//
#pragma once

#include "GLFW/glfw3.h"

namespace cs4722 {
    /**
     * \brief
     * Create a window, size it, and position it on the primary monitor.
     * Set the window context to be the default context.
     *
     * The proportion of the screen used is based on the smaller dimension of screen width or screen height.
     * Usually, the full screen is not available, just a somewhat smaller working area.
     * In windows, that seems to just leave out the task bar.
     *
     * There is no check made that either the `screen_ratio` or the `aspect_ratio` is reasonable.
     *
     * @param title  Title to display on the window
     * @param screen_ratio Proportion of the available screen to use
     * @param aspect_ratio Ratio of the window width divided by the height
     * @return Pointer to the window created.
     */
    GLFWwindow *setup_window(const char *title, double screen_ratio, double aspect_ratio = 1.0);
}