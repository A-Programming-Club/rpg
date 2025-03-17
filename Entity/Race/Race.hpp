#pragma once
#ifndef RACE_H
#define RACE_H

class Race
{
public:
   Race(const std::string &name,const double BASE_HEALTH, const double BASE_AGILITY, const double BASE_STRENGTH);
   void base_stats(Race){
    std::cout << "Race =" << name << std::endl;
    std::cout << "Health =" << BASE_HEALTH << std::endl;
    std::cout << "Agility =" << BASE_AGILITY << std::endl;
    std::cout << "BASE_STRENGTH" << BASE_STRENGTH << std::endl;
   }

private:
    std::string name;
    const double BASE_HEALTH;;
    const double BASE_AGILITY;
    const double BASE_STRENGTH;
    const double BASE_DEXTERITY;
    const double BASE_MANA;
    const double BASE_STAMINA;
    const double BASE_CONSTITUTION;
    const double BASE_INTELLIGENCE;
    const double BASE_WISDOM;
    const double BASE_CHARISMA;
    const double BASE_HITPOINTS;
};

#endif