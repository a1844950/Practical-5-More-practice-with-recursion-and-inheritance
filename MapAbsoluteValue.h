#ifndef MapAbsoluteValue_H
#define MapAbsoluteValue_H

#include <iostream>
#include <vector>
using namespace std;

#include "MapGeneric.h"


class MapAbsoluteValue: public MapGeneric
{
  int f(int) final;
};

#endif //MapAbsoluteValue_H