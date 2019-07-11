#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {

		int len = S.size();
		int count = 0;
		
		for (int i = 0; i < len; i++) 
			if (J.find(S[i]) != J.npos)
				count++;

		return count;
	}
};

//int main() {
//
//	string J = "aA";
//	string S = "aAAbbbb";
//
//	int ans = Solution().numJewelsInStones(J, S);
//	cout << ans << endl;
//}