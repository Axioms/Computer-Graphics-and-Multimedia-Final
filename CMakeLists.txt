cmake_minimum_required(VERSION 3.17)
project(final-code-fa21)


link_libraries(cs4722  glfw3 opengl32 glu32)

set(CMAKE_CXX_STANDARD 20)

include_directories(lib ../lib-common)
link_directories(lib ../lib-common)

add_executable(mixed-colors mixed-colors/mixed-colors.cpp)
configure_file(mixed-colors/fragment_shader.glsl .)
configure_file(mixed-colors/vertex_shader.glsl .)