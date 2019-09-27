#include <iostream>
#include <string>

using namespace std;

class Solution {
public:

	// Encodes a URL to a shortened URL.
	string encode(string longUrl) {
		return longUrl;
	}

	// Decodes a shortened URL to its original URL.
	string decode(string shortUrl) {
		return shortUrl;
	}
};

int main() {
	
	string url = "https://leetcode.com/problems/design-tinyurl";

	string ans = Solution().decode(Solution().encode(url));
	cout << ans << endl;

	return 0;
}