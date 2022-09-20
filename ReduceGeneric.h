#ifndef ReduceGeneric_H
#define ReduceGeneric_H

#include <vector>
using namespace std;

class ReduceGeneric {
  virtual int binaryOperator(int, int) = 0;
  int recursiveReduce(size_t, const vector<int>&, int);

 public:
  int reduce(vector<int>);
};

#endif //ReduceGeneric_H