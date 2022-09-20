#include "ReduceGeneric.h"

int ReduceGeneric::recursiveReduce(
    size_t index,const std::vector<int>& a,int b)
    {
        if (index == a.size())
        {
        return b;
        }
  b = binaryOperator(b, a.at(index));

  return recursiveReduce(++index, a, b);
}

int ReduceGeneric::reduce(std::vector<int> a)
{
  return recursiveReduce(1, a, a.front());
}
