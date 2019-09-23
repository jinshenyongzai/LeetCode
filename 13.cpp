#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int romanToInt(string s) {

		unordered_map<char, int> record = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
		
		if (s.length() == 0)
			return 0;

		int sum = record[s.back()];
		for (int i = s.length() - 2; i >= 0; i--) {
			if (record[s[i]] < record[s[i + 1]])
				sum -= record[s[i]];
			else
				sum += record[s[i]];
		}

		return sum;
	}
};

int main() {

	string s = "LVIII";

	int ans = Solution().romanToInt(s);
	cout << ans << endl;
}