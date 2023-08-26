// Matter.cpp

#include "../include/umgebung/Matter.h"
#include <random>

Matter::Matter() {
    // Initialize properties with random default values
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> frequencyDist(5.0, 15.0);
    std::uniform_real_distribution<double> massDist(0.5, 5.0);
    std::uniform_real_distribution<double> volumeDist(0.05, 0.5);

    vDensity.setVibrationalFrequency(frequencyDist(gen));
    pDensity.setMass(massDist(gen));
    pDensity.setVolume(volumeDist(gen));
}

Matter::~Matter() {
    // Cleanup if needed
}

void Matter::setVibrationalDensity(const VibrationalDensity& vDensity) {
    this->vDensity = vDensity;
}

VibrationalDensity Matter::getVibrationalDensity() const {
    return vDensity;
}

void Matter::setPhysicalDensity(const PhysicalDensity& pDensity) {
    this->pDensity = pDensity;
}

PhysicalDensity Matter::getPhysicalDensity() const {
    return pDensity;
}

// Implement other methods as needed

