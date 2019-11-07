#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		vector<int> res;
		int len = nums.size();

		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				if (nums[i] + nums[j] == target) {
					res.push_back(i);
					res.push_back(j);
					break;
				}
			}
		}
		return res;
	}
};

// int main() {

// 	vector<int> nums{ 2, 7, 11, 15 };
// 	int target = 9;

// 	vector<int> ans = Solution().twoSum(nums, target);
// 	if (!ans.empty())
// 		cout << ans[0] << " " << ans[1] << endl;
// 	else
// 		cout << "no answer" << endl;
// }
