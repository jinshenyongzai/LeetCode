#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

		vector<int> res;
		stack<int> s;
		map<int, int> m;

		int len = nums2.size();
		for (int i = len - 1; i >= 0; i--) {
			while (!s.empty() && s.top() <= nums2[i])
				s.pop();
			m[nums2[i]] = s.empty() ? -1 : s.top();
			s.push(nums2[i]);
		}

		for (int i = 0; i < nums1.size(); i++)
			res.push_back(m[nums1[i]]);

		return res;
	}
};

int main() {

	vector<int> nums1 = { 4, 1, 2 };
	vector<int> nums2 = { 1, 3, 4, 2 };
	
	vector<int> res = Solution().nextGreaterElement(nums1, nums2);

	cout << "[ ";
	for (auto& s : res) 
		cout << s << " ";
	cout << "]" << endl;
}