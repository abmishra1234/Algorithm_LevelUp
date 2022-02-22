/*
	Triplet Problem and solution
*/

#define FORREF
#ifndef FORREF
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>

struct Triplet {

	vector<vector<int>> twoSum(vector<int> arr, int left, int right, int tsum) {
		vector<vector<int>> out;
		for (int i = left, j = right; i < j;) {
			vector<int> inner;
			if (arr[i] + arr[j] == tsum) {
				inner.push_back(arr[i]);
				inner.push_back(arr[j]);
				out.push_back(inner);
				++i;
				--j;
			}
			else if (arr[i] + arr[j] < tsum) {
				++i;
			}
			else
				--j;
		}
		return out;
	}


	/*
		Implement the logic here for triplet
	*/
	vector<vector<int>> solve(vector<int> arr, int tsum) {
		sort(arr.begin(), arr.end());
		vector<vector<int>> out;
		for (size_t i = 0; i < arr.size(); ++i) {
			vector<vector<int>> result = twoSum(arr, i + 1, arr.size() - 1, (tsum - arr[i]));
			for (size_t j = 0; j < result.size(); ++j) {
				vector<int> temp(3);
				temp[0] = arr[i];
				temp[1] = result[j][0];
				temp[2] = result[j][1];
				out.push_back(temp);
			}
		}
		return out;
	}
};

// drive code
int main() {
	vector<int> arr{ 1,2,3,4,5,6,7,8,9, 15 };
	int targetSum = 18;

	Triplet tp;
	vector<vector<int>> result = tp.solve(arr, targetSum);
	for (size_t i = 0; i < result.size(); ++i) {
		for (size_t j = 0; j < result[i].size(); ++j) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

#endif // !FORREF
