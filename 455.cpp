#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {

		sort(g.begin(), g.end());
		sort(s.begin(), s.end());

		int g_size = g.size();
		int s_size = s.size();

		int count = 0;
		for (int i = g_size - 1, j = s_size - 1; i >= 0 && j >= 0;) {

			if (s[j] >= g[i]) {
				count++;
				i--;
				j--;
			}
			else 
				i--;
		}

		return count;
	}
};

//int main() {
//
//	vector<int> g{ 1, 2 };
//	vector<int> s{ 1, 2, 3 };
//
//	int ans = Solution().findContentChildren(g, s);
//	cout << ans << endl;
//
//}