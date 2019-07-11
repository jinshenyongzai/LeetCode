#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& A) {
		int len = A.size();
		for (int i = 0 , j = 1; i < len; i = i + 2){
			if (A[i] % 2){
				while (A[j] % 2)
					j += 2;
				swap(A[i], A[j]);
			}
		}
		return A;
	}
};

//int main() {
//
//	vector<int> A{ 4,2,5,7 };
//	Solution().sortArrayByParityII(A);
//}