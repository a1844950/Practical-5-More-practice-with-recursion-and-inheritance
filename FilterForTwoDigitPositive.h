#ifndef FilterForTwoDigitPositive_H
#define FilterForTwoDigitPositive_H

#include <iostream>
#include <vector>
using namespace std;

#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric
{
  bool g(int) final;
};

#endif //FilterForTwoDigitPositive_H