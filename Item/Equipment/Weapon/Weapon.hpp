#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

#include "../Item.hpp"

class Weapon : public Item {
public:
    explicit Weapon(const std::string &name);
    virtual ~Weapon();

    // weapon-specific attributes?
    double getMisfireChance() const;
    void setMisfireChance(double chance);

    double getUpgradeLevel() const;
    void setUpgradeLevel(double level);

    // simulate an attack (with misfire or backfire chance)
    void attack();

private:
    double misfireChance;
    double upgradeLevel;
};

#endif // WEAPON_H
