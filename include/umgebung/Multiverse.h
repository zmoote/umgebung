// Multiverse.h

#include <vector>
#include "Universe.h"

#ifndef MULTIVERSE_H
#define MULTIVERSE_H

class Multiverse {

private:

  std::vector<Universe> universes;

public:

  Multiverse();
  ~Multiverse();

};

#endif //MULTIVERSE_H