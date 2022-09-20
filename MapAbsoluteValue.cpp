#include "MapAbsoluteValue.h"
#include <climits>

int MapAbsoluteValue::f(int x)
{
  int m = x >> sizeof(int) * (CHAR_BIT - 1);
  return (x ^ m) - m;
}
