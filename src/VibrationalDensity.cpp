#include <iostream>
#include "../include/umgebung/VibrationalDensity.h"
#include "../include/umgebung/Logger.h"

VibrationalDensity::VibrationalDensity() {
    Logger::log(Logger::Info, "VibrationalDensity Constructor");
}

VibrationalDensity::~VibrationalDensity() {
    Logger::log(Logger::Info, "VibrationalDensity Deconstructor");
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