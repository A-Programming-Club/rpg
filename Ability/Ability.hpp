#pragma once
#ifndef ABILITY_H
#define ABILITY_H

#include <string>

class Ability {
public:
    Ability(const std::string &name, int levelRequirement);
    virtual ~Ability();

    const std::string& getName() const;
    int getLevelRequirement() const;

    // Pure virtual function to activate the ability.
    virtual void activate() = 0;

private:
    std::string name;
    int levelRequirement;
};

#endif // ABILITY_H
