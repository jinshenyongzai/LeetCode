#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {

		int len = s.length();
		for (int i = 0; i < len; i++)
			if (s.find(s[i]) == s.rfind(s[i]))
				return i;
		return -1;
	}
};

//int main() {
//
//	string str = "leetcode";
//	/*string str = "e";
//	string str = "leeltcode";*/
//
//	int ans = Solution().firstUniqChar(str);
//	cout << ans << endl;
//}