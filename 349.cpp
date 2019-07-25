#include <iostream>
#include <vector>
//#include <set>
#include <unordered_set>

using namespace std;

//class Solution {
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//
//		set<int> record(nums1.begin(), nums1.end());
//
//		set<int> res;
//
//		for (int i = 0; i < nums2.size(); i++)
//			if (record.find(nums2[i]) != record.end())
//				res.insert(nums2[i]);
//
//		return vector<int>(res.begin(), res.end());
//	}
//};

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

		set<int> record(nums1.begin(), nums1.end());

		set<int> res;

		for (int i = 0; i < nums2.size(); i++)
			if (record.find(nums2[i]) != record.end())
				res.insert(nums2[i]);

		return vector<int>(res.begin(), res.end());
	}
};

//int main() {
//
//	vector<int> nums1{ 1, 2, 2, 1 };
//	vector<int> nums2{ 2, 2};
//
//	vector<int> ans = Solution().intersection(nums1, nums2);
//	
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << endl;
//}
