//
// Created by Ben on 11/6/2020.
//

#pragma once

#include "GLM/vec3.hpp"

#include "glad/gl.h"
#include "GLFW/glfw3.h"

namespace cs4722 {


    void set_pan_about_fixed_axis(bool flag = true);
    void set_pan_fixed_axis(glm::vec3 pan_axis);

    /**
     * Set the limit to how far up and down the camera can pan.
     * A value greater than 1 will set no limit at all.
     *
     * @param limit  Between 0 and 1 to set an actual limit.
     */
    void set_pan_vertical_limit(double limit = 2);

    void general_key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);


    void window_size_callback(GLFWwindow *window, int width, int height);


    void move_callback(GLFWwindow *window, double xpos, double ypos);


    void GLAPIENTRY
    message_callback(GLenum source,
                    GLenum type,
                    GLuint id,
                    GLenum severity,
                    GLsizei length,
                    const GLchar *message,
                    const void *userParam);



    void setup_debug_callbacks();

    void setup_user_callbacks(GLFWwindow *window);


}