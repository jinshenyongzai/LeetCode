#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int count = 0;
		for (int i = 0; i < 32; i++) {
			if (n & 1)
				count++;
			n = n >> 1;
		}
		return count;
	}
};

int main() {

	uint32_t n = 0000101;
	int ans = Solution().hammingWeight(n);
	cout << ans << endl;
}