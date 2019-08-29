#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle) {

		int len = triangle.size();

		if (len == 0)
			return 0;

		if (len == 1)
			return triangle[0][0];

		for (int i = len - 2, j = 0; i >= 0; i--) {
			while (j <= i)
				triangle[i][j++] = min(triangle[i][j] + triangle[i + 1][j],
					triangle[i][j] + triangle[i + 1][j + 1]);
			j = 0;
		}

		return triangle[0][0];
	}
};

int main() {


	vector<vector<int>> triangle = { {2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3} };
	cout << Solution().minimumTotal(triangle) << endl;
	return 0;
}