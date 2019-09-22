#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {

		int left = 0, right = numbers.size() - 1; 
		
		while(left < right) {
			
			if (numbers[left] + numbers[right] == target)
				return { left + 1, right + 1};
			else if (numbers[left] + numbers[right] > target)
				right--;
			else
				left++;
		}

		return { -1, -1 };
	}
};

int main() {

	vector<int> numbers{ 2, 7, 11, 15 };
	int target = 9;

	vector<int> ans = Solution().twoSum(numbers, target);
	cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;
}
