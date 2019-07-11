#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:
	vector<int> sum;
	NumArray(vector<int>& nums) {
		
		sum.push_back(0);
		for (int i = 1; i < nums.size() + 1; i++)
			sum.push_back(sum[i - 1] + nums[i - 1]);
	}

	int sumRange(int i, int j) {
		return sum[j + 1] - sum[i];
	}
};

//int main() {
//
//	vector<int> nums = { -2, 0, 3, -5, 2, -1 };
//
//	NumArray* obj = new NumArray(nums);
//	int param_1 = obj->sumRange(0, 2);
//	cout << param_1 << endl;
//}