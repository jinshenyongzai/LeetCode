#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

		vector<int> nums;
		int m = nums1.size();
		int n = nums2.size();

		int i = 0, j = 0;
		while (i < m && j < n) {
			if (nums1[i] < nums2[j])
				nums.push_back(nums1[i++]);
			else
				nums.push_back(nums2[j++]);
		}

		while (i < m)
			nums.push_back(nums1[i++]);

		while (j < n)
			nums.push_back(nums2[j++]);

		int mid = (m + n - 1) / 2;
		if ( (m + n) % 2 == 1)
			return nums[mid];
		else
			return double(nums[mid] + nums[mid + 1]) / 2;
	}
};

//int main() {
//
//	vector<int> nums1 = { 1, 2 };
//	vector<int> nums2 = { 3, 4 };
//	
//	double ans =  Solution().findMedianSortedArrays(nums1, nums2);
//	cout << ans << endl;
//}