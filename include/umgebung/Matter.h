#include <vector>
#include "VibrationalDensity.h"
#include "PhysicalDensity.h"

#ifndef MATTER_H
#define MATTER_H

class Matter {

    private:
        VibrationalDensity vDensity;
        PhysicalDensity pDensity;

    public:
        Matter();
        ~Matter();

        void setVibrationalDensity(const VibrationalDensity& vDensity);
        VibrationalDensity getVibrationalDensity() const;

        void setPhysicalDensity(const PhysicalDensity& pDensity);
        PhysicalDensity getPhysicalDensity() const;
};

#endif