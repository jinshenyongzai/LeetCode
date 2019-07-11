#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int fib(int N) {
		if (N == 0 || N == 1)
			return N;
		return fib(N - 1) + fib(N - 2);
	}
};

//int main() {
//
//	int n = 2;
//	int ans = Solution().fib(n);
//	cout << ans << endl;
//}