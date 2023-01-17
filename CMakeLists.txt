cmake_minimum_required(VERSION 3.23)
project(string_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(string_project
        main.cpp
        String.cpp
        String.h)
