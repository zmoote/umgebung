// VibrationalDensity.h

#include <string>

#ifndef VIBRATIONALDENSITY_H
#define VIBRATIONALDENSITY_H

class VibrationalDensity {
    private:
        std::string name;
        double vibrationalFrequency;

    public:
        VibrationalDensity();
        ~VibrationalDensity();

        void setVibrationalFrequency(const double& vibrationalFrequency);
        double getVibrationalFrequency() const;

        void setName(const std::string& name);
        std::string getName() const;
};

#endif