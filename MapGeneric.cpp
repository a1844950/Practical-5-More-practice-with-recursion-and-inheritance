#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include "MapGeneric.h"


void MapGeneric::recursiveMap
(const vector<int> &a, vector<int> &b)
{
    if (b.size() == a.size()){return;}

    b.push_back(f(a.at(b.size())));
    recursiveMap(a, b);
}

vector<int> MapGeneric::map(std::vector<int> a)
{
    vector<int> b;
    recursiveMap(a, b);
    return b;
}

