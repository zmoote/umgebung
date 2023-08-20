# This CMakeLists.txt is for including header files in the project

# Add the include directories for header files
target_include_directories(umgebung PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/umgebung  # Add each subdirectory here
)