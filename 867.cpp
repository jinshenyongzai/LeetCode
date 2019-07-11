#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<vector<int>> transpose(vector<vector<int>>& A) {

		int row = A.size();
		int col = A[0].size();

		vector<vector<int>> res(col, vector<int>(row, 0));

		for (int i = 0; i < col; i++) {
			for (int j = 0; j < row; j++) {
				res[i][j] = A[j][i];
			}
		}

		return res;
	}
};

//int main() {
//
//	vector<vector<int>> A{{1,2,3},{4,5,6}};
//	vector<vector<int>> ans = Solution().transpose(A);
//}