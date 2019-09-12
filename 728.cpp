#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {

		vector<int> res;
		int n = 1;

		for (int i = left; i <= right; i++) {
			for (n = i; n > 0; n /= 10)
				if (!(n % 10) || i % (n % 10))
					break;
			if (!n) 
				res.push_back(i);
		}

		return res;
	}
};

//int main() {
//
//	int left = 1, right = 22;
//	vector<int> ans = Solution().selfDividingNumbers(left, right);
//	
//	for (auto &s : ans)
//		cout << s << " ";
//	cout << endl;
//}