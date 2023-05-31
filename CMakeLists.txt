cmake_minimum_required(VERSION 3.25)
project(gl_cursor_coordinates)

set(CMAKE_CXX_STANDARD 23)

add_executable(gl_cursor_coordinates main.cpp gl_cursor_coordinates/gl_cursor_coordinates.cpp gl_cursor_coordinates/gl_cursor_coordinates.h)
