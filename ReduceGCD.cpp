#include "ReduceGCD.h"

int ReduceGCD::binaryOperator(int x, int y)
{
  return y == 0 ? x : binaryOperator(y , x % y);
}
