#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	string toLowerCase(string str) {

		int len = str.size();

		for (int i = 0; i < len; i++)
			if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;

		return str;
	}
};

//int main() {
//
//	string str = "Hello";
//
//	string ans = Solution().toLowerCase(str);
//	cout << ans << endl;
//}