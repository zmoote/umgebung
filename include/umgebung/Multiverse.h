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

  void generateUniverses(int numUniverses);
  
  int getNumUniverses();
  
  Universe getUniverse(int index);

  void addUniverse(Universe universe); 

};

#endif