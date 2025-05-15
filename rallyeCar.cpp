#include "rallyeCar.h"
#include <iostream>

RallyeCar::RallyeCar(std::string model, double speed, double offroad) : Vehicle(model, speed), offroadCapability(offroad) {}

void RallyeCar::ShowInfo() const
{
    std::cout << "Rallye Auto: " << model << ", Max rychlost: " << speed << " km/h, Offroad schopnosti: " << offroadCapability << std::endl;
}

double RallyeCar::GetMaxSpeed() const
{
    return speed * offroadCapability;
}
