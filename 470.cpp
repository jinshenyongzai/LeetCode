#include <iostream>
#include <time.h>

using namespace std;

class Solution {
public:

	int rand7() {

		srand((unsigned)time(NULL));
		return rand() % 7 + 1;
	}

	int rand10() {

		int rand40 = 40;
		while (rand40 >= 40) {
			rand40 = (rand7() - 1) * 7 + rand7();
		}
		return rand40 % 10;
	}
};

int main() {
	
	int n = 2;

	for (int i = 0; i < n; i++)
		cout << Solution().rand10() << endl;
}