#include <vector>
#include "VibrationalDensity.h"
#include "PhysicalDensity.h"

#ifndef MATTER_H
#define MATTER_H

class Matter {

    private:
        std::vector<VibrationalDensity> vDensities;
        PhysicalDensity pDensity;

    public:
        Matter();
        ~Matter();

        // Setters
        

        // Getters

};

#endif