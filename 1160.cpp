#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
	int countCharacters(vector<string>& words, string chars) {

		map<char, int> record;
		int count = 0;

		for (char& c : chars)
			record[c]++;

		for (string& str : words) {
			map<char, int> record_t(record);
			int cnt = 0;
			for (char& c : str) {
				if (record_t[c]) {
					cnt++;
					record_t[c]--;
					if (cnt == str.size())
						count += str.size();
				}
				else
					break;
			}
		}

		return count;
	}
};

int main() {

	/*vector<string> words = { "cat", "bt", "hat", "tree" };
	string chars = "atach";*/
	vector<string> words = { "hello", "world", "leetcode" };
	string chars = "welldonehoneyr";

	int ans = Solution().countCharacters(words, chars);
	cout << ans << endl;
}