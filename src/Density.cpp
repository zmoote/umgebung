#include <iostream>
#include "../include/umgebung/Density.h"

Density::Density() {
    std::cout << "Density Constructor" << std::endl;
}

Density::~Density() {
    std::cout << "Density Deconstructor" << std::endl;
}

// Setters
void Density::setName(const std::string& name) {
    this->name = name;
}

void Density::setVibrationFrequency(const double& vibrationFrequency) {
    this->vibrationFrequency = vibrationFrequency;
}

// Getters
std::string Density::getName() const {
    return name;
}

double Density::getVibrationFrequency() const {
    return vibrationFrequency;
}