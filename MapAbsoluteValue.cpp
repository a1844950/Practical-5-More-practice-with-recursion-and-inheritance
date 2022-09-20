#include "MapAbsoluteValue.h"
#include <climits>

int MapAbsoluteValue::f(int x)
{
  int g = x >> sizeof(int) * (CHAR_Bit - 1);
  return (x ^ g) - g;
}
