#include <iostream>
#include "../include/umgebung/Multiverse.h"

Multiverse::Multiverse() {
    // Initalization logic
    std::cout << "Multiverse Constructor" << std::endl;
}

Multiverse::~Multiverse() {
    // Cleanup logic
    std::cout << "Multiverse Deconstructor" << std::endl;
}

void Multiverse::generateUniverses(int numUniverses) {
    // Method logic

    for(int i = 0; i < numUniverses; i++) {

        Universe universe;
        universe.setUniqueID(i);

        std::cout << "Created universe " << universe.getUniqueID() << std::endl;
        
        universes.push_back(universe);
    }
}