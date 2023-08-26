#include <iostream>
#include "../include/umgebung/PhysicalDensity.h"
#include "../include/umgebung/Logger.h"

PhysicalDensity::PhysicalDensity() {
    
}

PhysicalDensity::~PhysicalDensity() {
    
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