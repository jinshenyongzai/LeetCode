#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {

		unordered_map<char, int> cnt;

		for (char& ch : s)
			cnt[ch]++;

		for (char& ch : t)
			cnt[ch]--;

		for (auto it = cnt.begin(); it != cnt.end(); it++)
			if ((*it).second != 0)
				return false;
		return true;
	}
};

//int main() {
//
//	string s = "anagram";
//	string t = "nagaram";
//
//	bool ans = Solution().isAnagram(s, t);
//	cout << ans << endl;
//}