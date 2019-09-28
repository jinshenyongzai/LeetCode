#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {

		int len = nums.size();
		int times = len / 2;

		sort(nums.begin(), nums.end());
		return nums[times];
	}
};

int main() {

	vector<int> nums{ 2,2,1,1,1,2,2 };
	int ans =Solution().majorityElement(nums);
	cout << ans << endl;
}
