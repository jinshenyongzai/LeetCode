#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void reverseString(vector<char>& s) {

		int len = s.size();
		for (int i = 0; i < len / 2; i++)
			if(s[i] != s[len - 1 - i])
				swap(s[i], s[len - 1 - i]);
	}
};

//int main() {
//
//	vector<char> ch{ 'h','e','l','l','o' };
//
//	Solution().reverseString(ch);
//
//	int len = ch.size();
//	for (int i = 0; i < len - 1; i++)
//		cout << ch[i] << " ";
//	cout << ch[len - 1] << endl;
//}