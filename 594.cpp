#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int findLHS(vector<int>& nums) {

		unordered_map<int, int> record;
		for (auto& num : nums)
			record[num]++;

		int res = 0;
		for (auto& num : nums)
			if (record[num + 1])
				res = max(res, record[num] + record[num + 1]);

		return res;
	}
};

int main() {
	
	vector<int> nums = { 1, 3, 2, 2, 5, 2, 3, 7 };
	int ans = Solution().findLHS(nums);
	cout << ans << endl;

	return 0;
}