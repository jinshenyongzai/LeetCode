#include <iostream>
#include <queue>

using namespace std;

class RecentCounter {
public:

	queue<int>q;

	RecentCounter() {

	}

	int ping(int t) {
		q.push(t);
		while (t - 3000 > q.front())   
			q.pop();
		return q.size();
	}
};

int main() {
	
	RecentCounter* obj = new RecentCounter();

	int param_1;

	param_1 = obj->ping(1);
	cout << param_1 << endl;

	param_1 = obj->ping(100);
	cout << param_1 << endl;

	param_1 = obj->ping(3001);
	cout << param_1 << endl;

	param_1 = obj->ping(3002);
	cout << param_1 << endl;

	return 0;
}