//
// Created by Ben on 12/11/2020.
//

#pragma once

//#include <exception>
#include <string>
#include <glad/gl.h>

#include "cs4722_exception.h"

namespace cs4722 {

    GLuint compile_shaders(const char* vertex_shader_path, const char* fragment_shader_path,
                        bool exit_on_error = true);


//    class shader_compile_error : public exception {
////    private:
////        std::string message;
////
////        shader_compile_error(int code) {
////            message = std::string("shader compiler error code") +  std::string(code);
////        }
////
////
//    public:
//        shader_compile_error() : exception("Shader compilation error"){}
//
////        const char * what() const noexcept override {
////            return message;
////        }
//
//
//    };

//    GLuint load_shaders(ShaderInfo *, bool exit_on_error = true);
}
