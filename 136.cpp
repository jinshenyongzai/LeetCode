#include <iostream>
#include <vector>
#include <map>

using namespace std;

//class Solution {
//public:
//	int singleNumber(vector<int>& nums) {
//
//		int res = 0;
//		for (int i = 0; i < nums.size(); i++)
//			res ^= nums[i];
//			
//		return res;
//	}
//};

class Solution {
public:
	int singleNumber(vector<int>& nums) {

		map<int, int> visited;

		int res = 0;
		for (int i = 0; i < nums.size(); i++) {

			if (!visited[nums[i]]) {
				res += nums[i];
				visited[nums[i]] = 1;
			}
			else
				res -= nums[i];
		}

		return res;
	}
};

int main() {

	vector<int> nums = { 4, 1, 2, 1, 2 };
	cout << Solution().singleNumber(nums) << endl;

	return 0;
}