#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
	int thirdMax(vector<int>& nums) {

		set<int> newNums(nums.begin(), nums.end());
		set<int>::iterator it = newNums.end();

		int len = newNums.size();
		if (len <= 2)
			return *prev(it, 1);
		else
			return *prev(it, 3);
	}
};

//int main() {
//
//	vector<int> nums{ 1, 2, 2, 3 };
//
//	int ans = Solution().thirdMax(nums);
//	cout << ans << endl;
//}