#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int heightChecker(vector<int>& heights) {

		int count = 0;
		int len = heights.size();

		vector<int> heights_copy(heights);
		sort(heights_copy.begin(), heights_copy.end());

		for (int i = 0; i < len; i++)
			if (heights_copy[i] != heights[i])
				count++;

		return count;

	}
};

int main() {

	vector<int> heights{ 1,1,4,2,1,3 };

	int ans = Solution().heightChecker(heights);
	cout << ans << endl;
}
