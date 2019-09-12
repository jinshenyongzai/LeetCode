#include <iostream>

using namespace std;

class Solution {
public:
	bool checkPerfectNumber(int num) {

		if (num == 0 || num == 1)
			return false;

		int sum = 0;
		for (int i = 2; i <= sqrt(num); i++)
			if (num % i == 0) 
				sum += i + num / i;

		return (sum + 1) == num;
	}
};

int main() {

	int num = 28;
	bool ans = Solution().checkPerfectNumber(num);
	
	cout << ans << endl;
}