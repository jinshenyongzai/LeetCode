#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {

		if (nums.size() <= 2) 
			return nums.size();
		
		for (auto it = nums.begin(); it != nums.end() - 2;){
			if (*it == *(it + 1) && *it == *(it + 2)) 
				nums.erase(it + 2);
			else 
				it++;
		}
		return nums.size();
	}
};

//int main() {
//
//	vector<int> nums{ 1, 1, 1, 2, 2, 3 };
//	int ans = Solution().removeDuplicates(nums);
//	cout << "length: " << ans << endl;
//
//	int i = 0;
//	for (i = 0; i < nums.size() - 1; i++)
//		cout << nums[i] << " ";
//	cout << nums[i] << endl;
//}