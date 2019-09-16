#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//	vector<int> countBits(int num) {
//
//		vector<int> res;
//		res.push_back(0);
//
//		for (int i = 1; i <= num; i++) {
//			int count = 0;
//			int j = i;
//			while (j) {
//				if (j % 2)
//					count++;
//				j /= 2;
//			}
//			res.push_back(count);
//		}
//
//		return res;
//	}
//};

class Solution {
public:
	vector<int> countBits(int num) {

		vector<int> res(num + 1, 0);

		for (int i = 1; i <= num; i++)
			res[i] = res[i & (i - 1)] + 1;

		return res;
	}
};

int main() {

	int num = 5;
	vector<int> ans = Solution().countBits(num);

	cout << "[ ";
	for (auto& s : ans) 
		cout << s << " ";
	cout << "]";
}