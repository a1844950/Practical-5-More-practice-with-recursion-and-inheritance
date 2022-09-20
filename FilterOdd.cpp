#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include "FilterNonPositive.h"

bool FilterOdd::g(int x)
{
  return x & 1;
}
