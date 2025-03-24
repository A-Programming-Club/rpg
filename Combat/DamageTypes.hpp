#pragma once
#ifndef DAMAGETYPES_H
#define DAMAGETYPES_H

namespace Combat {

// Main damage categories
enum class DamageType {
    Physical,
    Magical,
    Internal
};

// Damage subtypes provide more granularity.
enum class DamageSubtype {
    Piercing,
    Bludgeoning,
    Slashing,
    Fire,
    Electric,
    Sonic,
    Psychic,
    Poison,
    Asphyxiation,
    Bleeding,
    Disease,
    Hemorrhage,
    Radiation,
    Prion
};

struct Damage {
    DamageType type;
    DamageSubtype subtype;
    double amount;
};

} // namespace Combat

#endif // DAMAGETYPES_H
