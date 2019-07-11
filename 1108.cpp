#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Solution {
public:
	string defangIPaddr(string address) {
		return regex_replace(address, regex("[.]"), "[.]");
	}
};

//int main() {
//
//	string address = "1.1.1.1";
//
//	cout << Solution().defangIPaddr(address) << endl;
//}