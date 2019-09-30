#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	bool isAlienSorted(vector<string>& words, string order) {

		int mapping[26];

		for (int i = 0; i < order.size(); i++)
			mapping[order[i] - 'a'] = i;

		for (string& w : words)
			for (char& c : w)
				c = mapping[c - 'a'];

		return is_sorted(words.begin(), words.end());
	}
};

int main() {
	
	vector<string> words = { "hello", "leetcode" };
	string order = "hlabcdefgijkmnopqrstuvwxyz";

	bool ans = Solution().isAlienSorted(words, order);

	cout << ans << endl;

	return 0;
}