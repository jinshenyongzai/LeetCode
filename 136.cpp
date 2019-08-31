#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {

		int res = 0;
		for (int i = 0; i < nums.size(); i++) {
			res = res ^ nums[i];
			cout << res << endl;
		}
			
		return res;
	}
};

int main() {

	vector<int> nums1 = { 2, 2, 1 };
	vector<int> nums2 = { 4, 1, 2, 1, 2 };

	cout << Solution().singleNumber(nums1) << endl;
	cout << Solution().singleNumber(nums2) << endl;

	return 0;
}