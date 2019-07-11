#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {

		auto len = static_cast<int>(A.size());
		int left = 0, right = len - 1;

		while (left <= right) {

			if (A[left] % 2 == 0) {
				left++;
				continue;
			}

			if (A[right] % 2 != 0) {
				right--;
				continue;
			}

			swap(A[left++], A[right--]);
		}
		return A;
	}
};

//int main() {
//
//	vector<int> A{ 3,1,2,4 };
//	Solution().sortArrayByParity(A);
//}