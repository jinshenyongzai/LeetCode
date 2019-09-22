#include <iostream>

using namespace std;

class Solution {
public:
	bool isUgly(int num) {

		for (int i = 2; i < 6 && num; i++)
			if (i != 4)
				while (num % i == 0)
					num /= i;
		return num == 1;
	}
};

int main() {

	int num = 2;

	bool ans = Solution().isUgly(num);
	cout << ans << endl;
}
