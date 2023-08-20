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

private:
    std::vector<Universe> universes;
};

#endif