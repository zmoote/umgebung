// Universe.h

#include <vector>
#include "Matter.h"

#ifndef UNIVERSE_H
#define UNIVERSE_H

class Universe {

private:
    std::string name;
    unsigned int uniqueID;
    unsigned int numVibrationalDensities;
    unsigned int sourceVibrationalDensity = numVibrationalDensities + 1;
    Matter matter;
    std::vector<VibrationalDensity> vibrationalDensities;

public:
    Universe();
    ~Universe();

    void setNumVibrationalDensities(const unsigned int& numVibrationalDensities);
    unsigned int getNumVibrationalDensities() const;

    void setSourceVibrationalDensity(const unsigned int& sourceVibrationalDensity);
    unsigned int getSourceVibrationalDensity() const;

    void setName(const std::string& universeName);
    std::string getName() const;
    
    void setUniqueID(unsigned int id);
    unsigned int getUniqueID() const;


};

#endif