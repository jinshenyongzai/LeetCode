#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int nextGreaterElement(int n) {

		auto s = to_string(n);
		next_permutation(s.begin(), s.end());
		auto re = stoll(s);

		return (re > INT_MAX || re <= n) ? -1 : re;
	}
};

int main() {
	
	int n = 12443322;
	int ans = Solution().nextGreaterElement(n);
	cout << ans << endl;
}