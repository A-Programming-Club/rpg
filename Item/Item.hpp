#pragma once
#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
    explicit Item(const std::string &name);
    virtual ~Item();

    const std::string& getName() const;
    void setName(const std::string &name);

private:
    std::string name;
};

#endif // ITEM_H
