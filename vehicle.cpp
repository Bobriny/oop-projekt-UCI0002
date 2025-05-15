#include "vehicle.h"

Vehicle::Vehicle(std::string m, double s) : model(m), speed(s) {}

void Vehicle::ShowInfo() const
{
    std::cout << "Vozidlo: " << model << ", Max rychlost: " << speed << " km/h" << std::endl;
}

double Vehicle::GetMaxSpeed() const
{
    return speed;
}
