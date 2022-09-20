#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include "MapGeneric.h"


void MapGeneric::recursiveMap
(const vector<int> &a, vector<int> &b)
{
    //keep looping until
    //the b is completely the same size as the
    //a
    if (b.size() == a.size()){return;}

    b.push_back(f(a.at(b.size())));
    recursiveMap(a, b);
}

vector<int> MapGeneric::map(vector<int> a)
{
    vector<int> b;
    recursiveMap(a, b);
    return b;
}

