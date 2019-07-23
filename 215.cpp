#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {

		sort(nums.rbegin(), nums.rend());
		return nums[k - 1];
	}
};

//int main() {
//
//	vector<int> nums1{ 3, 2, 1, 5, 6, 4 };
//	int k1 = 2;
//
//	vector<int> nums2{ 3, 2, 3, 1, 2, 4, 5, 5, 6 };
//	int k2 = 4;
//
//	int ans1 = Solution().findKthLargest(nums1, k1);
//	cout << ans1 << endl;
//
//	int ans2 = Solution().findKthLargest(nums2, k2);
//	cout << ans2 << endl;
//}