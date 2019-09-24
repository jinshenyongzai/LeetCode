#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
	int minAddToMakeValid(string S) {

		stack<char> parentheses;

		int len = S.size();
		for (int i = 0; i < len; i++) {
			parentheses.push(S[i]);
			while (i + 1 < len && parentheses.size() != 0 && parentheses.top() == '(' && S[i + 1] == ')') {
				parentheses.pop();
				i++;
			}
		}

		return parentheses.size();
	}
};

int main() {

	string S = "((())";
	int ans = Solution().minAddToMakeValid(S);
	cout << ans << endl;
}