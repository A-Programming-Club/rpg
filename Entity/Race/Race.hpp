#pragma once
#ifndef RACE_H
#define RACE_H

class Race
{
public:
    std::string name;
    const double BASE_HEALTH;
    const double BASE_AGILITY;
    const double BASE_STRENGTH;

    Race(const std::string &name, const double health, const double agility, const double strength);
private:
};

#endif