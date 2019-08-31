#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {

		int rows = grid.size();
		int cols = grid[0].size();

		vector<vector<int> > sum(rows, vector<int>(cols, grid[0][0]));

		for (int i = 1; i < rows; i++)
			sum[i][0] = sum[i - 1][0] + grid[i][0];
		
		for (int j = 1; j < cols; j++)
			sum[0][j] = sum[0][j - 1] + grid[0][j];

		for (int i = 1; i < rows; i++)
			for (int j = 1; j < cols; j++)
				sum[i][j] = min(sum[i - 1][j], sum[i][j - 1]) + grid[i][j];

		return sum[rows - 1][cols - 1];
	}
};

int main() {


	vector<vector<int>> grid = { {1, 3, 1}, {1, 5, 1}, {4, 2, 1} };
	cout << Solution().minPathSum(grid) << endl;
	return 0;
}