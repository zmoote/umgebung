// main.cpp

#include <iostream>
#include <random>
#include <string>
#include <ctime>
#include "../include/umgebung/Multiverse.h"
#include "../include/umgebung/Logger.h"

int main() {
    
    Logger::log(Logger::Info, "Application started");

    unsigned int seed = static_cast<unsigned int>(std::time(nullptr)); // Get the current time as the seed
    std::srand(seed); // Initialize the random number generator with the seed

    Logger::log(Logger::Info, "Setting seed..." +std::to_string(seed));
    
    Multiverse multiverse;

    unsigned int numUniverses = rand();
    
    // Generate universes
    multiverse.generateUniverses(numUniverses);

    // Log number of universes
    unsigned int num = multiverse.getNumUniverses();
    Logger::log(Logger::Info, "Number of universes: "+ std::to_string(num));

    // Loop through universes
    for(int i=0; i<num; i++) {

        Universe universe = multiverse.getUniverse(i);
        
        
    }
}