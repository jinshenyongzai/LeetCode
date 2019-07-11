#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool checkPossibility(vector<int>& nums) {

		int len = nums.size();
		int count = 0;

		for (int i = 0; i < len - 1 && count <= 1; i++) {
			if (nums[i] < nums[i - 1]) {
				count++;
				if (i - 1 < 0 || nums[i + 1] > nums[i - 1])
					nums[i] = nums[i + 1];
				else
					nums[i + 1] = nums[i];
			 }
		}

		return count <= 1;
	}
};

//int main() {
//
//	vector<int> nums{ -1,4};
//
//	bool ans = Solution().checkPossibility(nums);
//	cout << ans << endl;
//}