#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H

#include <iostream>
#include <vector>
using namespace std;

#include "MapGeneric.h"


class MapAbsoluteValue: public MapGeneric
{
  int f(int) final;
};

#endif 
