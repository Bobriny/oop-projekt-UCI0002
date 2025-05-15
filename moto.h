#pragma once
#include "vehicle.h"

class Motorcycle : public Vehicle
{
private:
    double agility;

public:
    Motorcycle(std::string model, double speed, double agility);
    void ShowInfo() const override;
    double GetMaxSpeed() const override;
};
