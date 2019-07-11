#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		
		int len = nums.size();
		vector<int> num1(nums), nums2(nums),nums3(nums), res;
		vector<vector<int>> ress;



		return ress;
	}
};

//int main() {
//
//	vector<int> nums{ -1, 0, 1, 2, -1, -4 };
//	vector<int> temp;
//
//	vector<vector<int>> ans = Solution().threeSum(nums);
//
//	for (vector<vector<int>>::iterator it = ans.begin(); it != ans.end(); it++){
//		temp = *it;
//		for (vector<int>::iterator itee = temp.begin(); itee != temp.end(); itee++)
//			cout << *itee;
//		cout << endl;
//	}
//}