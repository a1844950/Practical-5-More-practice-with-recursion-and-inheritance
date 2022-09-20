#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <iostream>
#include <vector>
using namespace std;

class FilterGeneric {
  virtual bool g(int) = 0;
  void recursiveFilter(size_t, const vector<int>&, vector<int>&);

 public:
  vector<int> filter(vector<int>);
};

#endif 
