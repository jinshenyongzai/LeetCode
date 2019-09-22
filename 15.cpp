#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> res;
		for (unsigned int i = 0; i < nums.size(); i++) {
			if ((i > 0) && (nums[i] == nums[i - 1]))
				continue;
			int l = i + 1, r = nums.size() - 1;
			while (l < r) {
				int s = nums[i] + nums[l] + nums[r];
				if (s > 0) r--;
				else if (s < 0) l++;
				else {
					res.push_back(vector<int> {nums[i], nums[l], nums[r]});
					while (l + 1 < r && nums[l] == nums[l + 1]) l++;
					while (r - 1 > l && nums[r] == nums[r - 1]) r--;
					l++; r--;
				}
			}
		}
		return res;
	}
};

int main() {

	vector<int> nums{ -1, 0, 1, 2, -1, -4 };

	vector<vector<int>> ans = Solution().threeSum(nums);

	for (auto &s1 : ans) {
		cout << "[ ";
		for (auto& s2 : s1) 
			cout << s2 << " ";
		cout << "]" << endl;
	}
}