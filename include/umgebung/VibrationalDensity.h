// VibrationalDensity.h

#ifndef VibrationalDensity_H
#define VibrationalDensity_H

class VibrationalDensity {
    private:
        std::string name;
        double vibrationFrequency;

    public:
        VibrationalDensity();
        ~VibrationalDensity();

        void setVibrationFrequency(const double& vibrationFrequency);
        double getVibrationFrequency() const;

        void setName(const std::string& VibrationalDensityName);
        std::string getName() const;
};

#endif