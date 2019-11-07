#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
	string removeDuplicates(string S) {

		stack<char> s;
		int len = S.size();
		for (int i = len - 1; i >= 0; i--) {
			s.push(S[i]);
			while (i - 1 >= 0 && s.size()) {
				if (s.top() == S[i - 1]) {
					s.pop();
					i--;
				}
				else
					break;
			}
		}

		string str;
		while (s.size()) {
			str += s.top();
			s.pop();
		}

		return str;
	}
};

// int main() {

// 	string S = "abbaca";
// 	string ans = Solution().removeDuplicates(S);
// 	cout << ans << endl;
// }
