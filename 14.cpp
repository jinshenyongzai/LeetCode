#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {

		int len = strs.size();
		if (len == 0)
			return "";

		for (int i = 0; strs[0][i] != NULL; i++) {
			for (int j = 1; j < len; j++)
				if (strs[0][i] != strs[j][i])
					return strs[0].substr(0, i);
		}

		return strs[0];
	}
};

//int main() {
//
//	vector<string> nums = { "flower","flow","flight" };
//	string res = Solution().longestCommonPrefix(nums);
//	cout << res << endl;
//
//	vector<string> nums1 = { "flower","flower","flower" };
//	string res1 = Solution().longestCommonPrefix(nums1);
//	cout << res1 << endl;
//
//	vector<string> nums2 = { "dog","racecar","car" };
//	string res2 = Solution().longestCommonPrefix(nums2);
//	cout << res2 << endl;
//
//	string str = "dog";
//	cout << str.substr(0, 2) << endl;
//}