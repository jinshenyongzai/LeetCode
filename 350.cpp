#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

		map<int, int> record;
		for (int i = 0; i < nums1.size(); i++)
			record[nums1[i]]++;

		vector<int> res;

		for (int i = 0; i < nums2.size(); i++) {
			if (record[nums2[i]] > 0) {
				res.push_back(nums2[i]);
				record[nums2[i]]--;
			}
		}

		return res;
	}
};

//int main() {
//
//	vector<int> nums1{ 1, 2, 2 , 1 };
//	vector<int> nums2{ 2, 2};
//
//	vector<int> ans = Solution().intersect(nums1, nums2);
//	
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << endl;
//}