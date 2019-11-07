#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

	int backTracking(vector<int> res) {

		int sum = 0;
		for (int i = 0; i < 26; i++) {
			if (res[i] == 0)
				continue;
			else {
				res[i] -= 1;
				sum += 1;
				sum += backTracking(res);
				res[i] += 1;
			}
		}
		return sum;
	}

	int numTilePossibilities(string tiles) {

		vector<int> res(26);
		for (auto& tile : tiles)
			res[tile - 'A'] += 1;
		return backTracking(res);
	}
};

// int main() {

// 	string S =  "AAB" ;
// 	int ans = Solution().numTilePossibilities(S);
// 	cout << ans << endl;
// }
