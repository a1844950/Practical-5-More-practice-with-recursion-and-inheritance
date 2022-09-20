#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include "FilterGeneric.h"


void FilterGeneric::recursiveFilter(
    size_t index,
    const vector<int>& list,
    vector<int>& res) {
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

/*void MapGeneric::recursiveMap
(const vector<int> &a, vector<int> &b, vector<int> &c)
{
    //keep looping until
    //the b is completely the same size as the
    //a
    if (c.size() == a.size()){return;}
    c.push_back(a.at(c.size()));

    if(g(a.at(b.size())) == true) //bool g(x)
    {
        b.push_back(g(a.at(b.size())));
    }

    recursiveMap(a, b, c);
}

vector<int> MapGeneric::map(vector<int> a)
{
    vector<int> b;
    vector<int> c;
    recursiveMap(a, b, c);
    return b;
}*/

