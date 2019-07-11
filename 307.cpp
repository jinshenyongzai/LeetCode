#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:

	vector<int> sum;
	vector<int> data;

	NumArray(vector<int>& nums) {

		data = nums;
		sum.push_back(0);
		for (int i = 1; i < nums.size() + 1; i++)
			sum.push_back(sum[i - 1] + nums[i - 1]);
	}

	void update(int i, int val) {

		sum.clear();
		sum.push_back(0);
		data[i] = val;
		for (int j = 1; j < data.size() + 1; j++)
			sum.push_back(sum[j - 1] + data[j - 1]);
	}

	int sumRange(int i, int j) {
		return sum[j + 1] - sum[i];
	}
};

//int main() {
//
//	vector<int> nums = { 1, 3, 5 };
//
//	NumArray* obj = new NumArray(nums);
//
//	int param_1 = obj->sumRange(0, 2);
//	cout << param_1 << endl;
//
//	obj->update(1, 2);
//
//	param_1 = obj->sumRange(0, 2);
//	cout << param_1 << endl;
//}