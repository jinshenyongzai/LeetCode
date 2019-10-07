#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	vector<string> summaryRanges(vector<int>& nums) {

		vector<string> res;

		for (int i = 0; i < nums.size(); i++) {

			int start = i;
			while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1] )
				i++;
			int end = i;

			if (start == end)
				res.push_back(to_string(nums[start]));
			else
				res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
		}

		return res;
	}
};

int main() {

	vector<int> nums = { 0, 2, 3, 4, 6, 8, 9 };
	vector<string> ans = Solution().summaryRanges(nums);

	for (auto& s : ans)
		cout << s << endl;

	return 0;
}