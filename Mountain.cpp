/*
	Mountain problem & solution
*/
#define FORREF
#ifndef FORREF
using namespace std;
#include<iostream>
#include<vector>

struct Mountain {

	int maxLength(vector<int> arr) {
		// find the peak and push them into one vector
		if (arr.size() < 3) {
			cout << "invalid input" << endl;
			return 0;
		}

		vector<int> peaks;
		for (int i = 1; i < arr.size()-1; ++i) {
			if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
				peaks.push_back(i);
			}
		}
		
		int maxlength = INT_MIN;

		for (int i = 0; i<peaks.size(); ++i) {
			int ind = peaks[i];
			int left = 0, right = 0;
			while (ind > 0) {
				if (arr[ind] > arr[ind - 1]) {
					++left;
					--ind;
				}
				else
					break;
			}
			ind = peaks[i];
			while (ind < arr.size()-1) {
				if (arr[ind] > arr[ind + 1]) {
					++right;
					++ind;
				}
				else
					break;
			}

			maxlength = max(maxlength, left + right + 1);
		}

		return maxlength;
	}
};

int main() {
	vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
	Mountain mt;
	cout << "Max Length Mountain = " << mt.maxLength(arr) << endl;

}





#endif // !FORREF

