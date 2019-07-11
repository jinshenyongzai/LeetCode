#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {

		int len = nums.size();
		if (len == 0)
			return 0;
		
		int left = 0, right = len - 1;
		while(left < right){
			int mid = (left + right) / 2;
			if (nums[mid] > target)
				right = mid - 1;
			else if (nums[mid] < target)
				left = mid + 1;
			else
				return mid;
		}

		return nums[left] < target ? left + 1 : left;
	}
};

//int main() {
//
//	vector<int> nums{ 1,3,5,6 };
//	int target = 2;
//
//	int ans = Solution().searchInsert(nums, target);
//	cout << ans << endl;
//}