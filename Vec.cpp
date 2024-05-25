#include "Vec.h"

Vec::Vec(const vector<int>& vec) : data(vec) {}

vector<int> Vec::increaseElements(int n) const {
	vector<int> result = data;
	for (int& i : result) {
		i += n;
	}
	return result;
}
