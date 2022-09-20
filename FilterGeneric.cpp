#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include "FilterGeneric.h"


void FilterGeneric::recursiveFilter(
    size_t index,
    const vector<int>& a,
    vector<int>& b) {
  if (index == a.size()) {
    return;
  }
  if (g(a.at(index))) {
    b.push_back(a.at(index));
  }
  recursiveFilter(++index, a, b);
}

vector<int> FilterGeneric::filter(vector<int> a) {
  vector<int> b;
  recursiveFilter(0, a, b);
  return b;
}

   
