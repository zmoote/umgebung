// Universe.h

#include <vector>
#include "Density.h"

#ifndef UNIVERSE_H
#define UNIVERSE_H

class Universe {

private:
    std::string name;
    unsigned int uniqueID;
    std::vector<Density> densities;
    int sourceDensity;

public:
    Universe();
    ~Universe();

    void setNumDensities(const std::vector<Density>& numDensities);
    std::vector<Density> getNumDensities() const;

    void setSourceDensity(const int& sourceDensity);
    int getSourceDensity() const;

    void setName(const std::string& universeName);
    std::string getName() const;
    
    void setUniqueID(unsigned int id);
    unsigned int getUniqueID() const;


};

#endif