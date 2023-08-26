// Universe.h

#include <vector>
#include "Matter.h"
#include "VibrationalDensity.h"

#ifndef UNIVERSE_H
#define UNIVERSE_H

class Universe {

private:
    std::string name;
    unsigned int uniqueID;
    unsigned int numVibrationalDensities;
    unsigned int sourceVibrationalDensity = numVibrationalDensities + 1;
    Matter matter; // Using Matter as an intermediary
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

    Matter getMatter() const; // Getter for Matter

    // Other methods

};

#endif