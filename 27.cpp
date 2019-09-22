#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {

		int left = 0;
		for (int& num : nums) {
			if (num != val) {
				nums[left++] = num;
			}
		}
		return left;
	}
};

int main() {

	vector<int> nums{ 3,3 };
	int val = 3;

	int ans = Solution().removeElement(nums, val);
	cout << ans << endl;
}
