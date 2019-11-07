#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	string dayOfTheWeek(int day, int month, int year) {

		vector<string> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

		if (month < 3) {
			month += 12;
			year -= 1;
		}
		int c = year / 100;
		year = year % 100;
		int w = (c / 4 - 2 * c + year + year / 4 + 13 * (month + 1) / 5 + day - 1) % 7;
		return days[(w + 7) % 7];
	}
};

// int main() {

// 	int day = 10;
// 	int month = 9;
// 	int year = 2019;

// 	string ans = Solution().dayOfTheWeek(day, month, year);
	
// 	cout << ans << endl;
// }
