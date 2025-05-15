#pragma once
#include <iostream>

class Statistics
{
private:
    static int totalWins;
    static int totalRaces;

public:
    static void AddWin();
    static void AddRace();
    static void ShowStats();
};
