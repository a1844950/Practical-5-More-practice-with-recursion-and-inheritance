#ifndef FilterNonPositive_H
#define FilterNonPositive_H

#include <iostream>
#include <vector>
using namespace std;

#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric
{
private:
  bool g(int) final;
};

#endif //FilterNonPositive_H