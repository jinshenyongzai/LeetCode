#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<string> commonChars(vector<string>& A) {

		vector<string> res;
		vector<int> cnt(26, INT_MAX);

		for (auto s : A) {
			vector<int> cnt_comp(26, 0);
			for (auto c : s) 
				cnt_comp[c - 'a']++;
			for (auto i = 0; i < 26; i++) 
				cnt[i] = min(cnt[i], cnt_comp[i]);
		}

		for (auto i = 0; i < 26; i++)
			for (auto j = 0; j < cnt[i]; j++) 
				res.push_back(string(1, i + 'a'));

		return res;
	}
};

int main() {

	vector<string> A{ "bella","label","roller" };
	Solution().commonChars(A);
}
