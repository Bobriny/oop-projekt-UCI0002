#pragma once
#include <iostream>
#include <string>
#include "abstractVehicle.h"

class Vehicle : public AbstractVehicle
{
protected:
    std::string model;
    double speed;

public:
    Vehicle(std::string m, double s);
    virtual ~Vehicle() {}

    void ShowInfo() const override;
    double GetMaxSpeed() const override;
};
