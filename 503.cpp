#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> nextGreaterElements(vector<int>& nums) {

		int n = nums.size();
		vector<int> next(n, -1);
		stack<int> s; 

		for (int i = 0; i < n * 2; i++) {
			int num = nums[i % n];
			while (!s.empty() && nums[s.top()] < num) {
				next[s.top()] = num;
				s.pop();
			}
			if (i < n) 
				s.push(i);
		}
		return next;
	}
};

int main() {

	vector<int> nums = { 1, 2, 4, 7, 2, 1 };
	
	vector<int> res = Solution().nextGreaterElements(nums);

	cout << "[ ";
	for (auto& s : res) 
		cout << s << " ";
	cout << "]" << endl;
}