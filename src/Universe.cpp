// Universe.cpp

#include "../include/umgebung/Universe.h"
#include "../include/umgebung/Logger.h"
#include <cmath>
#include <functional>

Universe::Universe() {
    // Initialize properties
    name = "Unnamed Universe"; // Default name

    //Generate a procedural unique identifier for this universe
    std::hash<std::string> hashFunction;
    uniqueID = hashFunction(name);

    numVibrationalDensities = 0; // Default value
    sourceVibrationalDensity = numVibrationalDensities + 1;

    //Generate properties procedurally
    generateFractalProperties();
}

Universe::~Universe() {
    // Cleanup
}

void Universe::generateFractalProperties() {

    Logger::log(Logger::Info, "Generating Fractal Properties");

    // Generate vibrational density frequency using a fractal pattern
    double baseFrequency = 7.83; // Base Schumann resonance frequency
    double fractalFactor = 0.5; // Adjust the fractal pattern
    double frequencyRange = 100.0; // Range of frequency variation
    double vibrationalFrequency = baseFrequency + std::sin(uniqueID) * fractalFactor * frequencyRange;
    matter.getVibrationalDensity().setVibrationalFrequency(vibrationalFrequency);

    // Generate physical density mass using a fractal pattern
    double baseMass = 1.0; // Base mass value
    double massFactor = 0.1; // Adjust the fractal pattern
    double massRange = 10.0; // Range of mass variation
    double mass = baseMass + std::cos(uniqueID) * massFactor * massRange;
    matter.getPhysicalDensity().setMass(mass);

    // Generate physical density volume using a fractal pattern
    double baseVolume = 1.0; // Base volume value
    double volumeFactor = 0.1; // Adjust the fractal pattern
    double volumeRange = 10.0; // Range of volume variation
    double volume = baseVolume + std::tan(uniqueID) * volumeFactor * volumeRange;
    matter.getPhysicalDensity().setVolume(volume);
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
