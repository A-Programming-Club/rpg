#pragma once
#ifndef SPELL_H
#define SPELL_H

#include <string>

namespace Magic {

class Spell {
public:
    Spell(const std::string &name, int manaCost, int levelRequirement);
    virtual ~Spell();

    const std::string& getName() const;
    int getManaCost() const;
    int getLevelRequirement() const;

    // Pure virtual function to cast the spell.
    virtual void cast() = 0;

private:
    std::string name;
    int manaCost;
    int levelRequirement;
};

} // namespace Magic

#endif // SPELL_H
