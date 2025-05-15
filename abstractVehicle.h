#pragma once

class AbstractVehicle
{
public:
    virtual void ShowInfo() const = 0;
    virtual double GetMaxSpeed() const = 0;
    virtual ~AbstractVehicle() = default;
};
