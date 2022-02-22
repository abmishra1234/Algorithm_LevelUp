/*
	Pair Problem & Solution
*/

#define FORREF
#ifndef FORREF
using namespace std;
#include<iostream>
#include<vector>
#include<unordered_set>

typedef std::pair<int, int> Pair;
typedef std::unordered_set<int> Set;

struct Solution {
	Pair solve(vector<int> arr, int S) {
		Set hset;
		Set::iterator iter;
		for (size_t i = 0; i < arr.size(); ++i) {
			iter = hset.find(S - arr[i]);
			if (iter != hset.end()) {
				// found reporting
				return make_pair(arr[i], S - arr[i]);
			}
			else
				hset.insert(arr[i]);
		}
		// fail reporting
		return make_pair(-1, -1);
	}
};

int main() {
	vector<int> arr = {10,5,2,3,-6,9,11};
	int S = 4;
	Solution sln;
	Pair pair = sln.solve(arr, S);
	cout << pair.first << ", " << pair.second << endl;
}

#endif // !FORREF

