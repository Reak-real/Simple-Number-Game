cmake_minimum_required(VERSION 4.2)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp)

target_compile_definitions(untitled PRIVATE UNICODE _UNICODE)

target_link_libraries(untitled comctl32 gdi32)