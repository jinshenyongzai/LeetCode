#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {

		unordered_map<string, vector<string>> mp;
		
		for (string s : strs) {
			string t = s;
			sort(t.begin(), t.end());
			mp[t].push_back(s);
		}

		vector<vector<string>> anagrams;
		for (auto p : mp) {
			anagrams.push_back(p.second);
		}
		return anagrams;
	}
};

//int main() {
//
//	vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
//
//	vector<vector<string>> ans = Solution().groupAnagrams(strs);
//
//	int i, j;
//	for (i = 0; i < ans.size(); i++) {
//		cout << "[";
//		for (j = 0; j < ans[i].size() - 1; j++)
//			cout << ans[i][j] << ",";
//
//		if (ans[i].size() != 0)
//			cout << ans[i][j] << "]" << endl;
//		else
//			cout << "]" << endl;
//	}
//}