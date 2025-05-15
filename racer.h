#pragma once
#include <iostream>
#include <string>

class Racer
{
private:
    std::string name;
    int experience;
    int victories;

public:
    Racer(std::string n, int exp = 0, int wins = 0);
    void ShowInfo() const;
    void ShowInfo(bool detailed) const;
};
