#pragma once
#include <iostream>
#include <string>

class RaceEvent
{
private:
    std::string location;
    std::string type;
    int date;

public:
    RaceEvent(std::string loc, std::string t, int d);
    void ShowInfo() const;
};
