#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	string reverseVowels(string s) {

		string vowels = "aeiouAEIOU";

		int  left = 0, right = s.length() - 1;
		while (left < right) {

			while (vowels.find(s[left]) == string::npos && left < right)
				left++;
			while (vowels.find(s[right]) == string::npos && left < right)
				right--;

			if (s[left] != s[right])
				swap(s[left], s[right]);

			left++;
			right--;
		}
		return s;
	}
};

//int main() {
//
//	string s = "hello";
//
//	string reverse_s =  Solution().reverseVowels(s);
//
//	cout << reverse_s << endl;
//}