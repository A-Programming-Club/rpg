#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include "../Entity.hpp"
#include <string>

class Character : public Entity {
public:
    explicit Character(const std::string &name);
    virtual ~Character();

    const std::string& getName() const;
    void setName(const std::string &name);

private:
    std::string name;
};

#endif // CHARACTER_H
