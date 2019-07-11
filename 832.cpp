#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A){

		int row = A.size();
		int col = A[0].size();

		for (int i = 0; i < row; i++) {
			reverse(A[i].begin(), A[i].end());
			for (int j = 0; j < col; j++)
				A[i][j] = 1 - A[i][j];
		}

		return A;
	}
};

//int main() {
//
//	vector<vector<int>> A{ {1,1,0},{1,0,1}, {0,0,0} };
//	vector<vector<int>> ans = Solution().flipAndInvertImage(A);
//}