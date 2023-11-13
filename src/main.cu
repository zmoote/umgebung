#include <iostream>
#include <random>
#include <string>
#include <ctime>
#include "../include/umgebung/Multiverse.h"
#include "../include/umgebung/Logger.h"

__global__ void helloCUDA() 
{
    printf("Hello CUDA World\n");
}

__host__ void helloCPU() 
{
    printf("Hello CPU World\n");
}


int main() 
{
    helloCUDA<<<1, 1>>>();
    cudaDeviceSynchronize();

    helloCPU();

    return 0;
}