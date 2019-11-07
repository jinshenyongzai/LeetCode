#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {

		int area = 0;
		int left = 0, right = height.size() - 1;

		while (left < right) {

			area = max(area, (right - left) * min(height[left], height[right]));
			if (height[left] < height[right])
				left++;
			else
				right--;
		}

		return area;
	}
};

// int main() {

// 	vector<int> height1 = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
// 	vector<int> height2 = { 2, 3, 10, 5, 7, 8, 9 };
// 	vector<int> height3 = { 1, 3, 2, 5, 25, 24, 5 };

// 	int ans1 =  Solution().maxArea(height1);
// 	int ans2 = Solution().maxArea(height2);
// 	int ans3 = Solution().maxArea(height3);

// 	cout << ans1 << endl;
// 	cout << ans2 << endl;
// 	cout << ans3 << endl;
// }
