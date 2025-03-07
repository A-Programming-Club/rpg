#include "Character.hpp"

Character::Character(const std::string &name)
    : name(name) {
}

Character::~Character() {
}

const std::string& Character::getName() const {
    return name;
}

void Character::setName(const std::string &name) {
    this->name = name;
}
