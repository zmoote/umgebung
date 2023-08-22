#include "../include/umgebung/Matter.h"

Matter::Matter() {

}

Matter::~Matter() {
    
}

void Matter::setVibrationalDensity(const VibrationalDensity& vDensity) {
    this->vDensity = vDensity;
}

VibrationalDensity Matter::getVibrationalDensity() const {
    return vDensity;
}

void Matter::setPhysicalDensity(const PhysicalDensity& pDensity) {
    this->pDensity = pDensity;
}

PhysicalDensity Matter::getPhysicalDensity() const {
    return pDensity;
}