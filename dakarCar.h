#pragma once
#include "vehicle.h"

class DakarCar : public Vehicle
{
private:
    double durability;
    double fuelCapacity;

public:
    DakarCar(std::string model, double speed, double dur, double fuel);
    void ShowInfo() const override;
    double GetMaxSpeed() const override;
};
