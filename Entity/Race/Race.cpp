#include "Race.hpp"

Race::Race() : name("Unknown") {
}

Race::Race(const std::string &name)
    : name(name) {
}

Race::~Race() {
}

const std::string& Race::getName() const {
    return name;
}

void Race::setName(const std::string &name) {
    this->name = name;
}

bool Race::operator<(const Race &other) const {
    return name < other.name;
}
