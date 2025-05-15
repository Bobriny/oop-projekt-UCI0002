#include "raceTeam.h"
#include <iostream>

RaceTeam::RaceTeam(std::string teamName) : name(teamName) {}

void RaceTeam::AddRacer(Racer *r)
{
    racers.push_back(r);
}

void RaceTeam::AddVehicle(Vehicle *v)
{
    vehicles.push_back(v);
}

void RaceTeam::ShowTeamInfo() const
{
    std::cout << "Závodní tým: " << name << std::endl;

    std::cout << "\nSeznam jezdců s podrobnými informacemi:\n";
    for (const auto &racer : racers)
    {
        racer->ShowInfo(true);
    }

    std::cout << "\nSeznam vozidel:\n";
    for (const auto &vehicle : vehicles)
    {
        vehicle->ShowInfo();
    }
}

void RaceTeam::DeleteTeam()
{
    for (auto &r : racers)
    {
        if (r)
        {
            delete r;
            r = nullptr;
        }
    }
    racers.clear();

    for (auto &v : vehicles)
    {
        if (v)
        {
            delete v;
            v = nullptr;
        }
    }
    vehicles.clear();
}

RaceTeam::~RaceTeam()
{
    DeleteTeam();
}
