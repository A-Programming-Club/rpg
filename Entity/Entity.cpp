#include <iostream>
#include <cmath>
#include "Entity.hpp"

void Entity::move_up()
{
    this->position.y += this->agility;
}
void Entity::move_down()
{
    this->position.y -= this->agility;
}
void Entity::move_right()
{
    this->position.x += this->agility;
}
void Entity::move_left()
{
    this->position.x -= this->agility;
}
void Entity::move_up_right()
{
    const long double MAGNITUDE = this->agility * std::sqrt(2);
    this->position.y += MAGNITUDE;
    this->position.x += MAGNITUDE;
}
void Entity::move_up_left()
{
    const long double MAGNITUDE = this->agility * std::sqrt(2);
    this->position.y += MAGNITUDE;
    this->position.x -= MAGNITUDE;
}
void Entity::move_down_right()
{
    const long double MAGNITUDE = this->agility * std::sqrt(2);
    this->position.y -= MAGNITUDE;
    this->position.x += MAGNITUDE;
}
void Entity::move_down_left()
{
    const long double MAGNITUDE = this->agility * std::sqrt(2);
    this->position.y -= MAGNITUDE;
    this->position.x -= MAGNITUDE;
}

