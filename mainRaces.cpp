#include "raceTeam.h"
#include "F1Car.h"
#include "rallyeCar.h"
#include "moto.h"
#include "dakarCar.h"
#include "racer.h"
#include "race.h"
#include "stat.h"

#include <vector>
#include <algorithm>

int main()
{
    RaceTeam *redBull = new RaceTeam("Red Bull Racing");

    redBull->AddRacer(new Racer("Max Verstappen", 10, 85));
    redBull->AddRacer(new Racer("Carlos Sainz", 8, 59));
    redBull->AddRacer(new Racer("Pedro Acosta", 7, 12));
    redBull->AddRacer(new Racer("Stephane Peterhansel", 9, 42));
    redBull->AddRacer(new Racer("Yuki Tsunoda", 8, 15));
    redBull->AddRacer(new Racer("Robert Kubica", 7, 25));

    std::vector<Vehicle *> vehicles;
    vehicles.push_back(new F1Car("RB20", 350, 1.2));
    vehicles.push_back(new RallyeCar("Ford Raptor T1+", 280, 1.5));
    vehicles.push_back(new Motorcycle("KTM RC16", 320, 1.3));
    vehicles.push_back(new DakarCar("Peugeot 3008 DKR", 200, 2.0, 500));
    vehicles.push_back(new F1Car("Mercedes RB19", 340, 1.1));
    vehicles.push_back(new RallyeCar("Citroen C4 WRC", 270, 1.4));

    for (auto vehicle : vehicles)
    {
        redBull->AddVehicle(vehicle);
    }

    redBull->ShowTeamInfo();

    std::cout << "\nZačátek závodu\n"
              << std::endl;
    RaceEvent f1Race("Monaco", "Formula 1", 20240525);
    RaceEvent rallyRace("Wales", "Rally", 20240610);
    RaceEvent dakarRace("Dakar", "Dakar Rally", 20240715);

    f1Race.ShowInfo();
    rallyRace.ShowInfo();
    dakarRace.ShowInfo();

    Vehicle *fastest = *std::max_element(vehicles.begin(), vehicles.end(),
                                         [](Vehicle *a, Vehicle *b)
                                         { return a->GetMaxSpeed() < b->GetMaxSpeed(); });

    std::cout << "\nNejrychlejší vozidlo v týmu: ";
    fastest->ShowInfo();

    Statistics::AddRace();
    Statistics::AddWin();
    Statistics::ShowStats();

    redBull->DeleteTeam();
    delete redBull;

    return 0;
}
