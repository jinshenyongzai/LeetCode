#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {

		vector<vector<int>> res = { {} };

		for (int i = 0; i < nums.size(); i++) {
			vector<vector<int>> temp(res);
			for (auto& s : temp) {
				s.push_back(nums[i]);
				res.push_back(s);
			}
		}

		return res;
	}
};

int main() {

	vector<int> nums = { 1, 2, 3 };
	vector<vector<int>> ans = Solution().subsets(nums);
	
	for (auto& s1 : ans) {
		cout << "[";
		for (auto& s2 : s1)
			cout << " " << s2 << " ";
		cout << "]" << endl;
	}
}