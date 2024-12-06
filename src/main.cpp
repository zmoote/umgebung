#include "PxConfig.h"
#include "PxPhysicsAPI.h"
#include <iostream>

using namespace physx;

int main(int argc, char** argv) {
    std::cout << "Starting PhysX up.." << std::endl;
    PxDefaultAllocator allocator;
    PxDefaultErrorCallback error_callback;
    auto foundation = PxCreateFoundation(PX_PHYSICS_VERSION, allocator, error_callback);

    // Create a CUDA context manager
    PxCudaContextManagerDesc cudaContextManagerDesc;
    auto cudaContextManager = PxCreateCudaContextManager(
        *foundation, cudaContextManagerDesc, PxGetProfilerCallback()
    );

    // Check if CUDA context manager is valid
    if(cudaContextManager && cudaContextManager->contextIsValid()) {
        std::cout << "GPU acceleration is available" << std::endl;
    } else {
        std::cout << "GPU acceleration is not available" << std::endl;
    }

    // Create a physics SDK object with GPU acceleration
    PxTolerancesScale tolerancesScale;
    PxSceneDesc sceneDesc(tolerancesScale);
    sceneDesc.gravity = PxVec3(0.0f, -9.81f, 0.0f);
    auto dispatcher = PxDefaultCpuDispatcherCreate(4);
    sceneDesc.cpuDispatcher = dispatcher;
    sceneDesc.filterShader  = PxDefaultSimulationFilterShader;
    sceneDesc.cudaContextManager = cudaContextManager;
    sceneDesc.flags |= PxSceneFlag::eENABLE_GPU_DYNAMICS;
    sceneDesc.broadPhaseType = PxBroadPhaseType::eGPU;
    auto physics_sdk = PxCreatePhysics(
        PX_PHYSICS_VERSION, *foundation, tolerancesScale, true, nullptr
    );
    auto scene = physics_sdk->createScene(sceneDesc);

    std::cout << "PhysX set up" << std::endl;

    // Release resources
    PX_RELEASE(scene);
    PX_RELEASE(dispatcher);
    PX_RELEASE(physics_sdk);
    PX_RELEASE(cudaContextManager);
    PX_RELEASE(foundation);

    std::cout << "Shutting down.." << std::endl;
}