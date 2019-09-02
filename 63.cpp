#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();

		vector<vector<long>> dp(m + 1, vector<long>(n + 1, 0));

		/*for (int i = 1; i <= m; i++)
		      dp[i][1] = 1;

		  for (int j = 1; j <= n; j++)
			  dp[1][j] = 1;*/

		dp[0][1] = 1;

		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++)
				if (!obstacleGrid[i - 1][j - 1])
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		
		return dp[m][n];
	}
};

int main() {

	vector<vector<int>> obstacleGrid = { {0, 0, 0},{0, 1, 0},{0, 0, 0} };
	cout << Solution().uniquePathsWithObstacles(obstacleGrid) << endl;

	return 0;
}