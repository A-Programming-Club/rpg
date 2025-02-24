#pragma once
#ifndef CARTESIAN_H
#define CARTESIAN_H

#include <../Euclidean/Euclidean.hpp>

class Cartesian {
public:
    Cartesian(void);
    long double getX(void);
    long double getY(void);
    long double distanceTo(long double a, long double b);
    long double distanceTo(Cartesian a);
    long double distanceTo(Euclidean a);
private:
    long double coords[2];
};

#endif