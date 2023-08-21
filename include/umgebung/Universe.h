// Universe.h

#include <vector>
#include "Matter.h"

#ifndef UNIVERSE_H
#define UNIVERSE_H

class Universe {

private:
    std::string name;
    unsigned int uniqueID;
    std::vector<VibrationalDensity> VibrationalDensities;
    int sourceVibrationalDensity = VibrationalDensities.size() + 1;

public:
    Universe();
    ~Universe();

    void setNumVibrationalDensities(const std::vector<VibrationalDensity>& numVibrationalDensities);
    std::vector<VibrationalDensity> getNumVibrationalDensities() const;

    void setSourceVibrationalDensity(const int& sourceVibrationalDensity);
    int getSourceVibrationalDensity() const;

    void setName(const std::string& universeName);
    std::string getName() const;
    
    void setUniqueID(unsigned int id);
    unsigned int getUniqueID() const;


};

#endif