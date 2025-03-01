#pragma once
#ifndef CARTESIAN_H
#define CARTESIAN_H

#include "../Euclidean/Euclidean.hpp"

class Cartesian {
public:
    long double x;
    long double y;

    Cartesian(void);
    Cartesian(long double x);
    long double getX(void);
    long double getY(void);
    long double distanceTo(long double a, long double b);
    long double distanceTo(Cartesian a);
    long double distanceTo(Euclidean a);
};

#endif