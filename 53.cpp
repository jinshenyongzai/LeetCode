#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {

		int len = nums.size();
		vector<int> dp(len, 0);

		dp[0] = nums[0];
		int maxVal = dp[0];

		for (int i = 1; i < len; i++) {
			dp[i] = nums[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0);
			maxVal = max(maxVal, dp[i]);
		}

		return maxVal;
	}
};

int main() {

	vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int ans = Solution().maxSubArray(nums);
	
	cout << ans << endl;
}