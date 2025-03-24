#include "Entity.hpp"

Entity::Entity() {
    //default stats (can be adjusted)
    stats.health = 100.0;
    stats.maxHealth = 100.0;
    stats.mana = 50.0;
    stats.maxMana = 50.0;
    stats.stamina = 75.0;
    stats.maxStamina = 75.0;
    stats.level = 1;
    stats.experience = 0.0;
    stats.strength = 10;
    stats.dexterity = 10;
    stats.constitution = 10;
    stats.intelligence = 10;
    stats.wisdom = 10;
    stats.charisma = 10;
    //These are percentages
    stats.resistances["Physical"] = 0.0;
    stats.resistances["Magical"] = 0.0;
}

Entity::~Entity() {
    //adjust as needed
}

const Stats& Entity::getStats() const {
    return stats;
}

void Entity::setStats(const Stats& newStats) {
    stats = newStats;
}
