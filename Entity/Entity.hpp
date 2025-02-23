#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include <map>
#include <Entity/Race/race.hpp>

class Entity {
public:

private:
    Race race;
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