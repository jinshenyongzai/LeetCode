#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {

		unordered_set<int> record;
		for (int i = 0; i < nums.size(); i++) {
			if (record.find(nums[i]) != record.end())
				return true;

			record.insert(nums[i]);

			if (record.size() == k + 1)
				record.erase(nums[i - k]);
		}

		return false;
	}
};

//int main() {
//
//	vector<int> nums = { 1, 2, 3, 1 };
//	int k = 3;
//
//	bool ans = Solution().containsNearbyDuplicate(nums, k);
//	cout << ans << endl;
//}