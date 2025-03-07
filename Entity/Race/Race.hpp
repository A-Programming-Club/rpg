#pragma once
#ifndef RACE_H
#define RACE_H

#include <string>

class Race {
public:
    Race();
    explicit Race(const std::string &name);
    ~Race();

    const std::string& getName() const;
    void setName(const std::string &name);

    bool operator<(const Race &other) const; // For use in std::map if needed

private:
    std::string name;
};

#endif // RACE_H
