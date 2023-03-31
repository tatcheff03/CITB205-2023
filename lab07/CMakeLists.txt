cmake_minimum_required(VERSION 3.5)
project(lab07)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")
add_executable(prog ${SOURCES})
