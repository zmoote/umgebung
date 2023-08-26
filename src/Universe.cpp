#include <iostream>
#include <string>
#include "../include/umgebung/Universe.h"
#include "../include/umgebung/Logger.h"

Universe::Universe() {

    Matter m;

    VibrationalDensity vd;
    vd.setVibrationalFrequency(rand() % 100 + 1); // 1-100Hz

    PhysicalDensity pd;
    pd.setMass(rand() % 10 + 1); // 1-10kg
    pd.setVolume(rand() % 10 + 1); // 1-10m^3

    m.setVibrationalDensity(vd);
    m.setPhysicalDensity(pd);

    matter = m;

    for(int i=0; i<10; i++) {

      VibrationalDensity vd;
      vd.setVibrationalFrequency(rand() % 100 + 1);

      vibrationalDensities.push_back(vd);
    }
}

Universe::~Universe() {

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