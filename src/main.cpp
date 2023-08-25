// main.cpp

#include <iostream>
#include <random>
#include "../include/umgebung/Multiverse.h"
#include "../include/umgebung/Logger.h"

int main() {
    
    Logger::log(Logger::Info, "Application started");
    

    Multiverse mv;
    mv.generateUniverses(5);

    int numUniverses = mv.getNumUniverses();

    for (int i=0; i < numUniverses; i++) {

        Universe u = mv.getUniverse(i);

        Logger::log(Logger::Info, "Universe "+u.getUniqueID());
    }    
}