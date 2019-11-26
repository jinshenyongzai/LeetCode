#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//
//		int len = nums.size();
//		if (len == 0 || k <= 0)
//			return;
//
//		vector<int> res(nums);
//		for (int i = 0; i < nums.size(); i++)
//			nums[(i + k) % len] = res[i];
//	}
//};

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int rem = k % nums.size();
		if (rem) {
			reverse(nums.begin(), nums.end());
			reverse(nums.begin(), nums.begin() + rem);
			reverse(nums.begin() + rem, nums.end());
		}
	}
};

// int main() {

// 	vector<int> nums{ 1,2,3,4,5,6,7 };
// 	int k = 3;
// 	Solution().rotate(nums, k);
// }
