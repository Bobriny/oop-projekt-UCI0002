#pragma once
#include "vehicle.h"

class RallyeCar : public Vehicle
{
private:
    double offroadCapability;

public:
    RallyeCar(std::string model, double speed, double offroad);
    void ShowInfo() const override;
    double GetMaxSpeed() const override;
};
