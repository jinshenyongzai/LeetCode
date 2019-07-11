#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {

		int len = nums.size();

		if (len == 0)
			return 0;
		
		int pre = 0, cur = 0;
		while (cur < len) {
			if (nums[pre] == nums[cur]) {
				cur++;
			}
			else {
				pre++;
				nums[pre] = nums[cur];
				cur++;
			}
		}
		return pre + 1;
	}
};

//int main() {
//
//	vector<int> nums{ 1,2,2,3 };
//
//	int ans = Solution().removeDuplicates(nums);
//	cout << ans << endl;
//}