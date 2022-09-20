#ifndef FILTERODD_H
#define FILTERODD_H

#include <iostream>
#include <vector>
using namespace std;
#include "FilterGeneric.h"

class FilterODd : public FilterGeneric{
    bool g(int) final;
};

#endif
