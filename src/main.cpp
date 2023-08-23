// main.cpp

#include <iostream>
#include <random>
#include "../include/umgebung/Multiverse.h"

int main() {
    Multiverse mv;
    mv.generateUniverses(5); 

    for(Universe u : mv.universes) {
    
    print("Universe ", u.getId());
    
    print("Matter: ");
    print("Vibrational ", u.matter.getVibrationalDensity().getFrequency());
    print("Physical ", u.matter.getPhysicalDensity().calculateDensity());

    for(VibrationalDensity vd : u.vibrationalDensities) {
        print("   ", vd.getFrequency()); 
    }

    }
}