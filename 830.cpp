#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> largeGroupPositions(string S) {

		vector<vector<int>> res;

		for (int i = 0, j = 0; i < S.size(); i = j){
			while (j < S.size() && S[j] == S[i])
				j++;
			if (j - i >= 3)
				res.push_back({ i, j - 1 });
		}

		return res;
	}
};

int main() {

	string S = "abbxxxxzzy";

	vector<vector<int>> ans = Solution().largeGroupPositions(S);

	for (auto &s1 : ans) {
		for (auto &s2 : s1)
			cout << s2 << " ";
		cout << endl;
	}

	return 0;
}