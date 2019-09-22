#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

		sort(arr.begin(), arr.end());

		int len = arr.size();
		vector<vector<int>> res;

		if (len < 2)
			return res;

		int min = arr[1] - arr[0];
		for (int i = 0; i < arr.size() - 1; i++) 
			if (arr[i + 1] - arr[i] < min)
				min = arr[i + 1] - arr[i];

		for (int j = 0; j < arr.size() - 1; j++)
			if (arr[j + 1] - arr[j] == min)
				res.push_back({ arr[j], arr[j + 1] });

		return res;
	}
};

int main() {

	vector<int> arr{ 3, 8, -10, 23, 19, -4, -14, 27 };

	vector<vector<int>> ans = Solution().minimumAbsDifference(arr);

	for (auto &s1 : ans) {
		cout << "[ ";
		for (auto& s2 : s1) 
			cout << s2 << " ";
		cout << "]" << endl;
	}
}