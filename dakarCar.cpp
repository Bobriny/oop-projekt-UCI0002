#include "dakarCar.h"
#include <iostream>

DakarCar::DakarCar(std::string model, double speed, double dur, double fuel) : Vehicle(model, speed), durability(dur), fuelCapacity(fuel) {}

void DakarCar::ShowInfo() const
{
    std::cout << "Dakar Auto: " << model << ", Max rychlost: " << speed << " km/h, Odolnost: " << durability << ", Palivová nádrž: " << fuelCapacity << " L" << std::endl;
}

double DakarCar::GetMaxSpeed() const
{
    return speed * (durability / 2);
}
