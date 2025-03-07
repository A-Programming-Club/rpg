#include "Item.hpp"

Item::Item(const std::string &name)
    : name(name) {
}

Item::~Item() {
}

const std::string& Item::getName() const {
    return name;
}

void Item::setName(const std::string &name) {
    this->name = name;
}
