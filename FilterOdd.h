#ifndef FilterOdd_H
#define FilterOdd_H

#include <iostream>
#include <vector>
using namespace std;

#include "FilterGeneric.h"



#include "FilterGeneric.h"

class FilterOdd: public FilterGeneric {
  bool g(int) final;
};


#endif //FilterOdd_H