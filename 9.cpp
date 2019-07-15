#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	/*bool isPalindrome(int x) {

		if (x < 0 || (x % 10 == 0 && x!= 0))
			return false;

		int revertNum = 0;
		while (x > revertNum) {
			revertNum = revertNum * 10 + x % 10;
			x /= 10;
		}
		return x == revertNum || x == revertNum / 10;
	}*/
	bool isPalindrome(int x) {

		string str_x = to_string(x);
		string str = str_x;
		reverse(str_x.begin(), str_x.end());
		return str == str_x;
	}
};

//int main() {
//
//	int x = 121;
//	bool res = Solution().isPalindrome(x);
//	cout << res << endl;
//
//	int x1 = -121;
//	bool res1 = Solution().isPalindrome(x1);
//	cout << res1 << endl;
//}
