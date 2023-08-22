#include <iostream>
#include "../include/umgebung/VibrationalDensity.h"

VibrationalDensity::VibrationalDensity() {
    std::cout << "VibrationalDensity Constructor" << std::endl;
}

VibrationalDensity::~VibrationalDensity() {
    std::cout << "VibrationalDensity Deconstructor" << std::endl;
}

// Setters
void VibrationalDensity::setName(const std::string& name) {
    this->name = name;
}

void VibrationalDensity::setVibrationalFrequency(const double& vibrationalFrequency) {
    this->vibrationalFrequency = vibrationalFrequency;
}

// Getters
std::string VibrationalDensity::getName() const {
    return name;
}

double VibrationalDensity::getVibrationalFrequency() const {
    return vibrationalFrequency;
}