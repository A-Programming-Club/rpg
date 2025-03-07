#include "Spell.hpp"

namespace Magic {

Spell::Spell(const std::string &name, int manaCost, int levelRequirement)
    : name(name), manaCost(manaCost), levelRequirement(levelRequirement) {
}

Spell::~Spell() {
}

const std::string& Spell::getName() const {
    return name;
}

int Spell::getManaCost() const {
    return manaCost;
}

int Spell::getLevelRequirement() const {
    return levelRequirement;
}

} // namespace Magic
