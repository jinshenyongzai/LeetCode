#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> findAnagrams(string s, string p) {

		vector<int>res;
		unordered_map<char, int>m;

		for (auto c : p) 
			m[c]++;

		int i = 0, j = 0, count = p.size();
		while (j < s.size()) {

			if (m[s[j++]]-- > 0) 
				count--;

			while (count == 0) {
				if (j - i == p.size()) 
					res.push_back(i);
				if (m[s[i++]]++ == 0) 
					count++;
			}
		}
		return res;
	}
};

//int main() {
//
//	string s = "cbaebabacd";
//	string p = "abc";
//
//	vector<int> res =  Solution().findAnagrams(s, p);
//
//	vector<int>::iterator it = res.begin();
//	for (; it != res.end(); it++)
//		cout << *it << endl;
//}