cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(umgebung LANGUAGES CXX CUDA)

# Set the C++ compiler
set(CMAKE_CXX_COMPILER g++)

# Add the source code directory
add_subdirectory(src)