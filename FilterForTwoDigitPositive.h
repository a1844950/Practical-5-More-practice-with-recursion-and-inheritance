#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H

#include <iostream>
#include <vector>
using namespace std;

#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric
{
  bool g(int) final;
};

#endif 
