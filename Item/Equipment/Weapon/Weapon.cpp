#include "Weapon.hpp"
#include <iostream>
#include <cstdlib>

Weapon::Weapon(const std::string &name)
    : Item(name), misfireChance(0.05), upgradeLevel(1.0) {
}

Weapon::~Weapon() {
}

double Weapon::getMisfireChance() const {
    return misfireChance;
}

void Weapon::setMisfireChance(double chance) {
    misfireChance = chance;
}

double Weapon::getUpgradeLevel() const {
    return upgradeLevel;
}

void Weapon::setUpgradeLevel(double level) {
    upgradeLevel = level;
}

void Weapon::attack() {
    // basic simulation: if random chance is below misfireChance, the weapon misfires.
    if (static_cast<double>(rand()) / RAND_MAX < misfireChance) {
        std::cout << "Weapon misfire/backfire occurred!\n";
    } else {
        std::cout << "Attack successful!\n";
    }
}
