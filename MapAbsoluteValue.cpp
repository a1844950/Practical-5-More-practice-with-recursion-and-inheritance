#include "MapAbsoluteValue.h"
#include <climits>

int MapAbsoluteValue::f(int x)
{
  int a = x >> sizeof(int) * (CHAR_BIT - 1);
  return (x ^ a) - a;
}
