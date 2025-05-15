#include "moto.h"
#include <iostream>

Motorcycle::Motorcycle(std::string model, double speed, double agility) : Vehicle(model, speed), agility(agility) {}

void Motorcycle::ShowInfo() const
{
    std::cout << "Motorka: " << model << ", Max rychlost: " << speed << " km/h, Obratnost: " << agility << std::endl;
}

double Motorcycle::GetMaxSpeed() const
{
    return speed * agility;
}
