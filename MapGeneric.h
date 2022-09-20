#ifndef MapGeneric_H
#define MapGeneric_H

#include <iostream>
#include <vector>
using namespace std;

class MapGeneric
{
private:
    virtual int f(int)=0;
    void recursiveMap(const vector<int>&, vector<int>&);
public:
    vector<int> map(vector<int>);
};

#endif //MapGeneric_H