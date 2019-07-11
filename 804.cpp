#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {

		vector<string> codes = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

		set<string> res;
		for (auto word : words) {
			string code = "";
			for (auto ch : word)
				code += codes[ch - 'a'];
			res.insert(code);
		}

		return res.size();
	}
};

//int main() {
//
//	vector<string> words{ "gin", "zen", "gig", "msg" };
//
//	int ans = Solution().uniqueMorseRepresentations(words);
//	cout << ans << endl;
//}