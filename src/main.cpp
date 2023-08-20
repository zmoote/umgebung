// main.cpp

#include <iostream>
#include "../include/umgebung/Multiverse.h"
#include "../include/umgebung/Universe.h"
#include "../include/umgebung/Density.h"

int main() {
    
    Multiverse myMultiverse;

    myMultiverse.generateUniverses(5);

    return 0;
}