#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {

		int left = -1, right = nums.size();
		int maxCon = 0;

		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) {
				maxCon = max(maxCon, i - left  - 1);
				left = i;
			}
		}

		return max(maxCon, right - left - 1);
	}
};

int main() {

	vector<int> nums = { 1, 1, 0, 1, 1, 1 };

	int ans = Solution().findMaxConsecutiveOnes(nums);
	cout << ans << endl;
}