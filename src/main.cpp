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

    Logger::log(Logger::Info, "Setting seed..." + std::to_string(seed));

    Multiverse multiverse;

    unsigned int numUniverses = rand() % 100 + 1;

    // Generate universes
    multiverse.generateUniverses(numUniverses);

    // Log number of universes
    unsigned int num = multiverse.getNumUniverses();
    Logger::log(Logger::Info, "Number of universes: " + std::to_string(num));

    // Loop through universes
    for (int i = 0; i < num; i++) {
        Universe universe = multiverse.getUniverse(i);

        // Process and interact with the universe, e.g., display its properties
        Logger::log(Logger::Info, "Universe " + std::to_string(i) + ": Name - " + universe.getName() + ", Unique ID - " + std::to_string(universe.getUniqueID()));

        // Access vibrational and physical densities and other properties as needed
        VibrationalDensity vd = universe.getMatter().getVibrationalDensity();
        PhysicalDensity pd = universe.getMatter().getPhysicalDensity();
        // Display vibrational and physical densities
        Logger::log(Logger::Info, "Vibrational Density Frequency: " + std::to_string(vd.getVibrationalFrequency()));
        Logger::log(Logger::Info, "Physical Density Mass: " + std::to_string(pd.getMass()) + ", Volume: " + std::to_string(pd.getVolume()));
    }
}