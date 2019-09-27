#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<string> uncommonFromSentences(string A, string B) {

		unordered_map<string, int> record;
		string AB = A + " " + B;
		
		for (int i = 0; i < AB.size();){
			int j = i;
			while (j < AB.size() && AB[j] != ' ')
				j++;

			record[AB.substr(i, j - i)]++;
			i = j + 1;
		}

		vector<string> res;
		for (auto &it : record)
			if (it.second == 1)
				res.push_back(it.first);

		return res;
	}
};

int main() {
	
	string A = "this apple is sweet";
	string B = "this apple is sour";

	vector<string> ans = Solution().uncommonFromSentences(A, B);

	cout << "[ ";
	for (auto& str : ans)
		cout << str << " ";
	cout << "]" << endl;

	return 0;
}