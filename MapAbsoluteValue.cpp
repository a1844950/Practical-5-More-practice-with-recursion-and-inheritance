#include "MapAbsoluteValue.h"
#include <climits>

int MapAbsoluteValue::f(int x)
{
  int g = x >> (CHAR_BIT - 1) * sizeof(int) ;
  return (x ^ g) - g;
}
