#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
	bool isValid(string s) {

		stack<char> stack;
		for (char c:s) {
			if (c == '(' || c == '{' || c == '[')
				stack.push(c);
			else {
				if (stack.empty())
					return false;

				char topChar = stack.top();
				stack.pop();

				if (c == ')' && topChar != '(')
					return false;
				if (c == ']' && topChar != '[')
					return false;
				if (c == '}' && topChar != '{')
					return false;
			}
		}
		return stack.empty();
	}
};

//int main() {
//
//	string str = "()[";
//
//	bool ans = Solution().isValid(str);
//	cout << ans << endl;
//}