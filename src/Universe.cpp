// Universe.cpp

#include "../include/umgebung/Universe.h"
#include <cmath>

Universe::Universe() {
    // Initialize properties
    name = "Unnamed Universe"; // Default name
    uniqueID = 0; // Default unique ID
    numVibrationalDensities = 0; // Default value
    sourceVibrationalDensity = numVibrationalDensities + 1;

    //Generate properties procedurally
    generateFractalProperties();
}

Universe::~Universe() {
    // Cleanup
}

void Universe::generateFractalProperties() {
    // Generate vibrational density frequency using a fractal pattern
    double baseFrequency = 7.83; // Base Schumann resonance frequency
    double fractalFactor = 0.5; // Adjust the fractal pattern
    double frequencyRange = 100.0; // Range of frequency variation
    vDensity.setVibrationalFrequency(baseFrequency + std::sin(uniqueID) * fractalFactor * frequencyRange);

    // Generate physical density mass using a fractal pattern
    double baseMass = 1.0; // Base mass value
    double massFactor = 0.1; // Adjust the fractal pattern
    double massRange = 10.0; // Range of mass variation
    pDensity.setMass(baseMass + std::cos(uniqueID) * massFactor * massRange);

    // Generate physical density volume using a fractal pattern
    double baseVolume = 1.0; // Base volume value
    double volumeFactor = 0.1; // Adjust the fractal pattern
    double volumeRange = 10.0; // Range of volume variation
    pDensity.setVolume(baseVolume + std::tan(uniqueID) * volumeFactor * volumeRange);
}

void Universe::setNumVibrationalDensities(const unsigned int& numVibrationalDensities) {
    this->numVibrationalDensities = numVibrationalDensities;
}

unsigned int Universe::getNumVibrationalDensities() const {
    return numVibrationalDensities;
}

void Universe::setSourceVibrationalDensity(const unsigned int& sourceVibrationalDensity) {
    this->sourceVibrationalDensity = sourceVibrationalDensity;
}

unsigned int Universe::getSourceVibrationalDensity() const {
    return sourceVibrationalDensity;
}

void Universe::setName(const std::string& universeName) {
    this->name = universeName;
}

std::string Universe::getName() const {
    return name;
}

void Universe::setUniqueID(unsigned int id) {
    this->uniqueID = id;
}

unsigned int Universe::getUniqueID() const {
    return uniqueID;
}

Matter Universe::getMatter() const {
    return matter;
}
