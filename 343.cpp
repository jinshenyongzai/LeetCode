#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//private:
//	vector<int> memo;
//
//	int breakInteger(int n) {
//		if (n == 1)
//			return 1;
//
//		if (memo[n] != -1)
//			return memo[n];
//
//		int res = -1;
//		for (int i = 1; i <= n - 1; i++)
//			res = max(res, max(i * (n - i), i * breakInteger(n - i)));
//		memo[n] = res;
//
//		return res;
//	}
//
//public:
//	int integerBreak(int n) {
//		memo = vector<int>(n + 1, -1);
//		return breakInteger(n);
//	}
//};

class Solution {
public:
	int integerBreak(int n) {
		vector<int> memo = vector<int>(n + 1, -1);

		memo[1] = 1;
		for (int i = 2; i <= n; i++)
			for (int j = 1; j <= i - 1; j++)
				memo[i] = max(memo[i], max(j * (i - j), j * memo[i - j]));

		return memo[n];
	}
};

int main() {

	int n = 2;
	cout << Solution().integerBreak(n) << endl;
	return 0;
}