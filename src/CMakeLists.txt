# Add your source files
set(SOURCE_FILES
    main.cpp
    Multiverse.cpp
    Universe.cpp
    Logger.cpp
    # ... add other source files
)

# Create an executable target
add_executable(umgebung ${SOURCE_FILES})

# If CUDA is found, enable CUDA compilation
if(CUDA_FOUND)
    enable_language(CUDA)
    target_sources(umgebung PRIVATE cuda_file.cu)
endif()
