#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include <map>
#include <string>
#include "Race/Race.hpp"

struct Stats {
    double health;
    double maxHealth;
    double mana;
    double maxMana;
    double stamina;
    double maxStamina;
    int level;
    double experience;
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
    std::map<std::string, double> resistances;
};

class Entity {
public:
    Entity();
    virtual ~Entity();

    const Stats& getStats() const;
    void setStats(const Stats& newStats);

private:
    Race race;
    Stats stats;
    std::vector<Entity*> hostileTo;
    std::vector<Entity*> aggressionPriority;
    std::map<Entity*, double> reputation;
    std::map<Race, double> bias;
};

#endif
