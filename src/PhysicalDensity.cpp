#include <iostream>
#include "../include/umgebung/PhysicalDensity.h"

PhysicalDensity::PhysicalDensity() {
    std::cout << "PhysicalDensity Constructor" << std::endl;
}

PhysicalDensity::~PhysicalDensity() {
    std::cout << "PhysicalDensity Deconstructor" << std::endl;
}

void PhysicalDensity::setMass(double m) {
    mass = m;    
}

void PhysicalDensity::setVolume(double v) {
    volume = v;
}

double PhysicalDensity::getMass() const {
    return mass;
}

double PhysicalDensity::getVolume() const {
    return volume;
}

double PhysicalDensity::calculateDensity() const {
    return mass / volume;
}