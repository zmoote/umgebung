// Density.h

#ifndef DENSITY_H
#define DENSITY_H

class Density {
private:
    std::string name;
    double vibrationFrequency;

public:
    Density();
    ~Density();

    void setVibrationFrequency(const double& vibrationFrequency);
    double getVibrationFrequency() const;

    void setName(const std::string& densityName);
    std::string getName() const;
};

#endif