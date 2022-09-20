#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include "FilterNonPositive.h"

bool FilterNonPositive::g(int x)
{
  return x <= 0;
}
