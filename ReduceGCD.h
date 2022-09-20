#ifndef ReduceGCD_H
#define ReduceGCD_H

#include "ReduceGeneric.h"

class ReduceGCD: public ReduceGeneric
{
  int binaryOperator(int, int) final;
};

#endif //ReduceGCD_H