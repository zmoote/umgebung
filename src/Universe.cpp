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

void Universe::setNumDensities(const std::vector<Density>& densities) {
  this->densities = densities;
}

void Universe::setSourceDensity(const int& sourceDensity) {
  this->sourceDensity = sourceDensity;
} 

void Universe::setName(const std::string& name) {
  this->name = name;
}

void Universe::setUniqueID(unsigned int uniqueID) {
  this->uniqueID = uniqueID;
}

// Getters

std::vector<Density> Universe::getNumDensities() const {
  return densities;
}

int Universe::getSourceDensity() const {
  return sourceDensity; 
}

std::string Universe::getName() const {
  return name;
}

unsigned int Universe::getUniqueID() const {
  return uniqueID;
}