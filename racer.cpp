#include "racer.h"
#include <iostream>

Racer::Racer(std::string n, int exp, int wins) : name(n), experience(exp), victories(wins) {}

void Racer::ShowInfo() const
{
    std::cout << "Jezdec: " << name << ", Výhry: " << victories << std::endl;
}

void Racer::ShowInfo(bool detailed) const
{
    if (detailed)
    {
        std::cout << "Jezdec: " << name << ", Zkušenosti: " << experience << ", Výhry: " << victories << std::endl;
    }
    else
    {
        ShowInfo();
    }
}
