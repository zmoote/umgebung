#include <iostream>
#include <string>
#include "../include/umgebung/Universe.h"

Universe::Universe() {
    std::cout << "Universe Constructor" << std::endl;
}

Universe::~Universe() {
    std::cout << "Universe Deconstructor" << std::endl;
}

void Universe::setNumVibrationalDensities(const unsigned int& numVibrationalDensities) {
  this->numVibrationalDensities = numVibrationalDensities;
}

void Universe::setSourceVibrationalDensity(const unsigned int& sourceVibrationalDensity) {
  this->sourceVibrationalDensity = sourceVibrationalDensity;
} 

void Universe::setName(const std::string& universeName) {
  this->name = name;
}

void Universe::setUniqueID(unsigned int uniqueID) {
  this->uniqueID = uniqueID;
}

unsigned int Universe::getNumVibrationalDensities() const {
  return numVibrationalDensities;
}

unsigned int Universe::getSourceVibrationalDensity() const {
  return sourceVibrationalDensity; 
}

std::string Universe::getName() const {
  return name;
}

unsigned int Universe::getUniqueID() const {
  return uniqueID;
}