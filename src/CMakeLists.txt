add_executable(umgebung main.cu Multiverse.cpp Universe.cpp Logger.cpp)

# Set CUDA_ARCHITECTURES property
set_property(TARGET umgebung PROPERTY CUDA_ARCHITECTURES 80 90)