#pragma once
#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
#include "../Utility/Cartesian/Cartesian.hpp"

#include <vector>
#include <map>
#include "Race/Race.hpp"

class Entity
{
public:
    void move_up();
    void move_up_left();
    void move_up_right();
    void move_down();
    void move_down_right();
    void move_down_left();
    void move_right();
    void move_left();

private:
    Cartesian position;
    Race race;
    std::string name;
    double maxHealth;
    double health;
    double maxAgility;
    double agility;
    double maxStrength;
    double strength;
    std::vector<Entity> hostileTo;
    std::vector<Entity> aggressionPriority;
    std::map<Entity, double> reputation;
    std::map<Race, double> bias;
};

#endif