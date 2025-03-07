#include "Ability.hpp"

Ability::Ability(const std::string &name, int levelRequirement)
    : name(name), levelRequirement(levelRequirement) {
}

Ability::~Ability() {
}

const std::string& Ability::getName() const {
    return name;
}

int Ability::getLevelRequirement() const {
    return levelRequirement;
}
