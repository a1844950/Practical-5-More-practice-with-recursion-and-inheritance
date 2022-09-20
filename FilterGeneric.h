#ifndef FilterGeneric_H
#define FilterGeneric_H

#include <iostream>
#include <vector>
using namespace std;

class FilterGeneric {
  virtual bool g(int) = 0;
  void recursiveFilter(size_t, const vector<int>&, vector<int>&);

 public:
  vector<int> filter(vector<int>);
};

#endif //FilterGeneric_H#ifndef FilterGeneric_H