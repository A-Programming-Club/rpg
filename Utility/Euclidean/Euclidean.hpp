#pragma once
#ifndef EUCLIDEAN_H
#define EUCLIDEAN_H

#include "../Cartesian/Cartesian.hpp"

class Euclidean {
public:
    Euclidean(void);
    Euclidean(long double x, long double y, long double z);
    Euclidean(Cartesian a, long double b, char xyz);
    long double getX(void);
    long double getY(void);
    long double getZ(void);
    long double changeX(long double x);
    long double changeY(long double y);
    long double changeZ(long double z);
    long double setX(long double x);
    long double setY(long double y);
    long double setZ(long double z);
    long double distanceTo(long double x, long double y, long double z);
    long double distanceTo(Cartesian a);
    long double distanceTo(Euclidean a);
private:
    long double coords[3];
};

#endif