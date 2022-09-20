#include "MapAbsoluteValue.h"
#include <climits>

int MapAbsoluteValue::f(int x)
{
  int y = x >> sizeof(int) * (CHAR_Bit - 1);
  return (x ^ y) - y;
}
