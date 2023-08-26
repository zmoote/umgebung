#include <iostream>
#include "../include/umgebung/Multiverse.h"
#include "../include/umgebung/Logger.h"

Multiverse::Multiverse() {
    
}

Multiverse::~Multiverse() {
    
}

void Multiverse::generateUniverses(int numUniverses) {
  
  for(int i=0; i < numUniverses; i++) {
    
    Universe universe;
    universe.setUniqueID(i);
    
    universes.push_back(universe);
  }

}

int Multiverse::getNumUniverses() {
  return universes.size();
}

Universe Multiverse::getUniverse(int index) {

  if(index < 0 || index >= universes.size()) {
    Logger::log(Logger::Error, " Universe Index is Out of Range");
  }

  return universes[index];
  
}

void Multiverse::addUniverse(Universe universe) {
  universes.push_back(universe); 
}