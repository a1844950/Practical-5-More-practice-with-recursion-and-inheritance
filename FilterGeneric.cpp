#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include "FilterGeneric.h"


void FilterGeneric::recursiveFilter
(
    size_t index,
    const vector<int>& list,
    vector<int>& res
    ) 
    {
  if (index == list.size()) {
    return;
  }
  if (g(list.at(index))) {
    res.push_back(list.at(index));
  }
  recursiveFilter(++index, list, res);
}

vector<int> FilterGeneric::filter(vector<int> list) {
  vector<int> res;
  recursiveFilter(0, list, res);
  return res;
}
