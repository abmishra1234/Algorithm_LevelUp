/*
	Sub Array Sort Problem
*/

//#define FORREF
#ifndef FORREF
using namespace std;
#include<iostream>
#include<vector>

typedef std::pair<int, int> Pair;

struct SubArray {
	Pair sort(vector<int> arr) {
		Pair pair = make_pair(-1, -1);
		if (arr.size() <= 2)
			return pair;

		// Find the Peek and valley into the array
		vector<int> peeks;
		vector<int> valley;

		for (int i = 1; i < arr.size() - 1; ++i) {
			if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i] ) {
				peeks.push_back(i);
			}
			else if (arr[i - 1] > arr[i] && arr[i + 1] > arr[i]) {
				valley.push_back(i);
			}
		}

		if (peeks.size() > 0) {
			// means your given series is is increasing order





		}







		return pair;
	}

};

int main() {

	// Sample input
	vector<int> arr{1,2,3,4,5,8,6,7,9,10,11};

	// sample coutput [5,7]



}


#endif // !FORREF


