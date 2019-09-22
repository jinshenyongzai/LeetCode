#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int nthUglyNumber(int n) {

		if (n <= 0)
			return false;

		if (n == 1)
			return true;

		int t2 = 0, t3 = 0, t5 = 0;
		vector<int> k(n);

		k[0] = 1;
		for (int i = 1; i < n; i++) {
			k[i] = min(k[t2] * 2, min(k[t3] * 3, k[t5] * 5));
			if (k[i] == k[t2] * 2) 
				t2++;
			if (k[i] == k[t3] * 3) 
				t3++;
			if (k[i] == k[t5] * 5) 
				t5++;
		}

		return k[n - 1];
	}
};

//class Solution {
//public:
//	bool isUgly(int num) {
//
//		for (int i = 2; i < 6 && num; i++)
//			if (i != 4)
//				while (num % i == 0)
//					num /= i;
//		return num == 1;
//	}
//
//	int nthUglyNumber(int n) {
//
//		vector<int> res;
//		int count = 0;
//		for (int i = 1; count != n; i++) {
//			if (isUgly(i)) {
//				res.push_back(i);
//				count++;
//			}
//		}
//
//		return res[count - 1];
//	}
//};

int main() {

	int n = 11;

	int ans = Solution().nthUglyNumber(n);
	cout << ans << endl;
}