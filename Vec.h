#pragma once
#include <vector>;
using namespace std;
class Vec {
public:
	Vec(const vector<int>& vec);
	vector<int> increaseElements(int n) const;
private:
	vector<int> data;
};

