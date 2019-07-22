#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {

		int len = nums.size();
		for (int i = 0, j = 0; i < len; i++) 
			if (nums[i] != 0) 
				swap(nums[i], nums[j++]);
	}
};

//int main() {
//
//	vector<int> nums{ 0, 1, 0, 3, 12 };
//
//	Solution().moveZeroes(nums);
//
//	int i = 0;
//	for (i = 0; i < nums.size() - 1; i++)
//		cout << nums[i] << " ";
//	cout << nums[i] << endl;
//}