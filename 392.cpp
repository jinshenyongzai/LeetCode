#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool isSubsequence(string s, string t) {

		int i = 0, j = 0;
		while(i < s.size() && j < t.size()) {

			if (s[i] == t[j]) {
				i++;
				j++;
			}
			else 
				j++;
		}

		if (i == s.size())
			return true;
		else
			return false;
	}
};

//int main() {
//
//	string s = "abc";
//	string t = "ahbgdc";
//
//	bool ans = Solution().isSubsequence(s, t);
//	cout << ans << endl;
//
//	string s1 = "axc";
//	string t1 = "ahbgdc";
//
//	bool ans1 = Solution().isSubsequence(s1, t1);
//	cout << ans1 << endl;
//
//}