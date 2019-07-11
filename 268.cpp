#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int len = nums.size();
		int sum1, sum2;
		
		sum1 = accumulate(nums.begin(), nums.end(), 0);
		sum2 = len * (len + 1) / 2;

		return sum2 -sum1;
		
	}
};

//int main() {
//
//	vector<int> nums{ 0 };
//	int ans = Solution().missingNumber(nums);
//	cout << ans << endl;
//}