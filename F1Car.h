#pragma once
#include "vehicle.h"

class F1Car : public Vehicle
{
private:
    double aerodynamics;

public:
    F1Car(std::string model, double speed, double aero);
    void ShowInfo() const override;
    double GetMaxSpeed() const override;
};
