#include "stat.h"
#include <iostream>

int Statistics::totalWins = 0;
int Statistics::totalRaces = 0;

void Statistics::AddWin()
{
    totalWins++;
}
void Statistics::AddRace()
{
    totalRaces++;
}

void Statistics::ShowStats()
{
    std::cout << "Celkové statistiky týmu - Závody: " << totalRaces << ", Výhry: " << totalWins << std::endl;
}
