#include <algorithm>
#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

class Solution {
public:
	void sortColors(vector<int>& nums) {

		//1¡¢
		//sort(nums.begin(), nums.end());

		/*2¡¢
		int count[3] = { 0 };
		for (int i = 0; i < nums.size(); i++) {
			assert(nums[i] >= 0 && nums[i] <= 2);
			count[nums[i]]++;
		}
		int index = 0;
		for (int i = 0; i < count[0]; i++)
			nums[index++] = 0;
		for (int i = 0; i < count[1]; i++)
			nums[index++] = 1;
		for (int i = 0; i < count[2]; i++)
			nums[index++] = 2;*/

		int zero = -1;
		int two = nums.size();

		for (int i = 0; i < two;) {
			if (nums[i] == 1)
				i++;
			else if (nums[i] == 2)
				swap(nums[i], nums[--two]);
			else {
				assert(nums[i] == 0);
				swap(nums[i++], nums[++zero]);
			}
		}
	}
};

//int main() {
//
//	vector<int> nums{ 2, 0, 2, 1, 1, 0 };
//	Solution().sortColors(nums);
//
//	int i = 0;
//	for (i = 0; i < nums.size() - 1; i++)
//		cout << nums[i] << " ";
//	cout << nums[i] << endl;
//}