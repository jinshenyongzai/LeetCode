#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {

		int len = nums.size();
		int sum = 0;

		sort(nums.begin(), nums.end());
		
		for (int i = 0; i < len; i += 2)
			sum += nums[i];

		return sum;
	}
};

//int main() {
//
//	vector<int> nums{ 1,4,3,2 };
//	int ans = Solution().arrayPairSum(nums);
//	cout << ans << endl;
//}