#ifndef ReduceMinimum_H
#define ReduceMinimum_H

#include "ReduceGeneric.h"

class ReduceMinimum: public ReduceGeneric {
  int binaryOperator(int, int) final;
};

#endif //ReduceMinimum_H