// Multiverse.h

#include <vector>
#include "Universe.h"

#ifndef MULTIVERSE_H
#define MULTIVERSE_H

class Multiverse {

public:
    Multiverse();
    ~Multiverse();

    void generateUniverses(int numUniverses);

    int getNumUniverses() const;

    Universe getUniverse(int index);

    void addUniverse(Universe u);

    std::vector<Universe> getUniverses();

private:
    std::vector<Universe> universes;
};

#endif