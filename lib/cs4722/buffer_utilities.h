#pragma once

#include <vector>
//#include "GLM/mat4x4.hpp"
//#include "GLM/ext/matrix_clip_space.hpp"
// #include "camera.h"
#include "view.h"
//#include "utility_glm.h"
#include "artifact.h"

/**
 * \file
 */


namespace cs4722 {




    /**
  *  \brief Initializes selected buffers given the names of the buffer variables in the vertex
  *      shader
  *
  * This function goes through `widget_list`, retrieves the needed data from associated shapes,
  * and then defines and populates buffers to be used in the vertex shader identified by `program`.
  * If a shape is shared by two or more widgets, it will be placed in the buffer only once.
  *
  * A buffer will be initialized only if the provided name is a string with length greater than 0.
  * Empty strings are provided as default values for all variable names, except `position_var` to save
  * some typing when calling this function.
  *
  * \warning In this version of the library, the tangent vector support has not been added.
  *
  *
  * @param program  Identifier of the shader program using these buffers
  * @param part_list  List of widgets that use shapes that will provide
  *  data for the buffers
  * @param position_var Name of the vertex shader variable to receive vertex position data
  * @param color_var  Name of the vertex shader variable to receive vertex color data
  * @param texture_var Name of the vertex shader variable to receive vertex texture coordinate data
  * @param normal_var Name of the vertex shader variable to receive vertex normal vector data
  * @param tangent_var Name of the vertex shader variable to receive vertex tangent vector data
  *
  * @return Return the VAO assigned to this buffer collection
  */
    GLuint init_buffers( GLuint program, std::vector<cs4722::artifact*>& part_list,
                         const char* position_var, const char* color_var = "",
                         const char* texture_var = "", const char* normal_var = "",
                         const char* tangent_var = "");





}
