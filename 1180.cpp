#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int countLetters(string S) {

		int i = 0, j = 0, res = 0;

		while (j < S.size()) {
			if (S[i] != S[j])
				i = j;

			res += j - i + 1;
			j++;
		}

		return res;
	}
};

int main() {

	string S = "aaaba";
	int ans = Solution().countLetters(S);
	cout << ans << endl;
}