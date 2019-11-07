#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int maxNumberOfBalloons(string text) {

		unordered_map<char, int> cnt;
		for (auto& ch : text)
			cnt[ch]++;

		return min({cnt['b'], cnt['a'], cnt['l'] / 2, cnt['o'] / 2, cnt['n']});
	}
};

// int main() {

// 	string text = "nlaebolko";
// 	int ans = Solution().maxNumberOfBalloons(text);
	
// 	cout << ans << endl;
// }
