#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//	int numSquares(int n) {
//
//		vector<int> dp(n + 1, INT_MAX);
//
//		dp[0] = 0;
//
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j * j <= i; j++)
//				dp[i] = min(dp[i - j * j] + 1, dp[i]);
//
//		return dp[n];
//	}
//};

class Solution {
public:
	int numSquares(int n) {

		while (n % 4 == 0) 
			n /= 4;

		if (n % 8 == 7) 
			return 4;

		for (int a = 0; a * a <= n; a++){
			int b = sqrt(n - a * a);
			if (a * a + b * b == n)
				return !!a + !!b;
		}

		return 3;
	}
};

int main() {

	int n = 12;
	cout << Solution().numSquares(n) << endl;
	return 0;
}