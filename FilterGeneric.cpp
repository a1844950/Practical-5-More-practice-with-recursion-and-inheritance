#include "FilterGeneric.h"

vector<int> FilterGeneric::fillter(vector<int> arr)
{
	if (arr.size() == 0) {
		return vector<int>();
	}
	int curr = arr[0]; 
	arr.erase(arr.begin()); 
	vector<int> res = fillter(arr);
	if (g(curr)) {
		res.insert(res.begin(),curr);
	}
	return res;

}
