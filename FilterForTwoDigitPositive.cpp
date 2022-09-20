#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include"FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x)
{
  return x > 0 && x / 10 < 10;
}
