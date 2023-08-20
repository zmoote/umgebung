#include "iostream"
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

    std::cout << "Generating " << numUniverses << " Universes..." << std::endl;
}