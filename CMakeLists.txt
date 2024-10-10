cmake_minimum_required(VERSION 3.16)    # Enforces a minimum version of CMake
project(rectangle VERSION 1.0 LANGUAGES CXX)    # Specifies project name and version, declares that it uses C++ (CXX) 

set(CMAKE_CXX_STANDARD 11)  # Specify that C++11 standard is followed strictly
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Declares executable testrect will be built from source files testrect.cpp, rect.cpp and rect.hpp
add_executable(testrect testrect.cpp rect.cpp rect.hpp)

add_executable(shapedemo
    shapedemo.cpp circle.cpp rect.cpp circle.hpp rect.hpp shape.hpp)