#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {

		int len = A.size();

		for (int i = 0; i < len; i++)
			A[i] = A[i]^2;

		sort(A.begin(), A.end());
		return A;
	}
};

//int main() {
//
//	vector<int> A{ -4,-1,0,3,10 };
//	Solution().sortedSquares(A);
//}