#ifndef MapSquare_H
#define MapSquare_H

#include <iostream>
#include <vector>
using namespace std;

#include "MapGeneric.h"

class MapSquare : public MapGeneric
{
private:
    int f(int x);
};

#endif 