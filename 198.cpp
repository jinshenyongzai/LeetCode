#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//
//private:
//
//	vector<int> memo;
//
//	int tryRob(vector<int> &nums, int index) {
//
//		if (index >= nums.size())
//			return 0;
//
//		if (memo[index] != -1)
//			return memo[index];
//
//		int res = 0;
//		for (int i = index; i < nums.size(); i++)
//			res = max(res, nums[i] + tryRob(nums, i + 2));
//		memo[index] = res;
//
//		return res;
//	}
//public:
//	int rob(vector<int>& nums) {
//		memo = vector<int>(nums.size(), -1);
//		return tryRob(nums, 0);
//	}
//};

class Solution {

public:
	int rob(vector<int>& nums) {
		int a = 0;
		int b = 0;

		for (int i = 0; i < nums.size(); i++){
			if (i % 2 == 0)
				a = max(a + nums[i], b);
			else
				b = max(a, b + nums[i]);
		}

		return max(a, b);
	}
};

//int main() {
//
//	vector<int> nums = { 2, 7, 9, 3, 1 };
//	cout << Solution().rob(nums) << endl;
//	
//	return 0;
//}