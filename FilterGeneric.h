#ifndef FILTERGENERIC_H_
#define FILTERGENERIC_H_

#include <vector>
using namespace std;

class FilterGeneric {
private:
	virtual bool g(int) = 0;
public:
	vector<int> fillter(vector<int>);
};


#endif
