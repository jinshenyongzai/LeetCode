#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {

		int len = prices.size();
		int res = 0;

		if (len == 0)
			return 0;

		for (int i = 0; i < prices.size() - 1; i++) 
			if (prices[i + 1] - prices[i] > 0)
				res += prices[i + 1] - prices[i];

		return res;
	}
};

int main() {

	vector<int> prices = {7, 1, 5, 3, 6, 4};
	int ans = Solution().maxProfit(prices);
	cout << ans << endl;
}