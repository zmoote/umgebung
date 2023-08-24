#include <iostream>
#include "../include/umgebung/Multiverse.h"

Multiverse::Multiverse() {
    
}

Multiverse::~Multiverse() {
    
}

void Multiverse::generateUniverses(int numUniverses) {
    // Method logic

    for(int i = 0; i < numUniverses; i++) {

        Universe u;
        u.setUniqueID(i);

        
        
        universes.push_back(u);
    }
}

int Multiverse::getNumUniverses() const {
    return universes.size();
}

Universe Multiverse::getUniverse(int index) {
    return universes[index];
}

void Multiverse::addUniverse(Universe u) {
    universes.push_back(u);
}

std::vector<Universe> Multiverse::getUniverses() {
    return universes;
}