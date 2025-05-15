#include "race.h"
#include <iostream>

RaceEvent::RaceEvent(std::string loc, std::string t, int d) : location(loc), type(t), date(d) {}

void RaceEvent::ShowInfo() const
{
    std::cout << "Závod: " << type << " | Místo: " << location << " | Datum: " << date << std::endl;
}
