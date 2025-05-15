#include "F1Car.h"
#include <iostream>

F1Car::F1Car(std::string model, double speed, double aero) : Vehicle(model, speed), aerodynamics(aero) {}

void F1Car::ShowInfo() const
{
    std::cout << "F1 Auto: " << model << ", Max rychlost: " << speed << " km/h, Aerodynamika: " << aerodynamics << std::endl;
}

double F1Car::GetMaxSpeed() const
{
    return speed * aerodynamics;
}
