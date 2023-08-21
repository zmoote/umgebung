#include <iostream>
#include "../include/umgebung/Universe.h"

Universe::Universe() {
    // Initalization logic
    std::cout << "Universe Constructor" << std::endl;
}

Universe::~Universe() {
    // Cleanup logic
    std::cout << "Universe Deconstructor" << std::endl;
}

// Setters

void Universe::setNumVibrationalDensities(const std::vector<VibrationalDensity>& numVibrationalDensities) {
  this->numVibrationalDensities = numVibrationalDensities;
}

void Universe::setSourceVibrationalDensity(const int& sourceVibrationalDensity) {
  this->sourceVibrationalDensity = sourceVibrationalDensity;
} 

void Universe::setName(const std::string& name) {
  this->name = name;
}

void Universe::setUniqueID(unsigned int uniqueID) {
  this->uniqueID = uniqueID;
}

// Getters

std::vector<VibrationalDensity> Universe::getNumVibrationalDensities() const {
  return numVibrationalDensities;
}

int Universe::getSourceVibrationalDensity() const {
  return sourceVibrationalDensity; 
}

std::string Universe::getName() const {
  return name;
}

unsigned int Universe::getUniqueID() const {
  return uniqueID;
}