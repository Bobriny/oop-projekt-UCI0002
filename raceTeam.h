#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "vehicle.h"
#include "racer.h"

class RaceTeam
{
private:
    std::string name;
    std::vector<Racer *> racers;
    std::vector<Vehicle *> vehicles;

public:
    RaceTeam(std::string teamName);
    void AddRacer(Racer *r);
    void AddVehicle(Vehicle *v);
    void ShowTeamInfo() const;
    void DeleteTeam();
    ~RaceTeam();
};
