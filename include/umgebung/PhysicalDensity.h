// PhysicalDensity.h

#ifndef PhysicalDensity_H
#define PhysicalDensity_H

class PhysicalDensity {
    private:
        double mass;
        double volume;

    public:
        PhysicalDensity();
        ~PhysicalDensity();

        void setMass(double m);
        double getMass() const;

        void setVolume(double v);
        double getVolume() const;

        double calculateDensity() const;
};

#endif