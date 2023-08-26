// Universe.cpp

#include "../include/umgebung/Universe.h"

Universe::Universe() {
    // Initialize properties
}

Universe::~Universe() {
    // Cleanup
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

// Implement other methods as needed
