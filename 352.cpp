#include <iostream>
#include <vector>
#include <map>

using namespace std;

class SummaryRanges {
public:

	map<int, int> record;

	/** Initialize your data structure here. */
	SummaryRanges() {
		record.clear();
	}

	void addNum(int val) {
		if (record.count(val))
			return;
		record[val] = val;

		int mn = val, mx = val;
		if (record.count(val - 1)) 
			mn = record[val - 1];
		if (record.count(val + 1)) 
			mx = record[val + 1];

		record[mn] = mx;
		record[mx] = mn;
	}

	vector<vector<int>> getIntervals() {
		vector<vector<int> > res;
		auto it = record.begin();
		while (it != record.end()) {
			res.push_back({ it->first, it->second });
			it = record.upper_bound(it->second);
		}
		return res;
	}
};

int main() {

	SummaryRanges* obj = new SummaryRanges();

	obj->addNum(1);
	obj->addNum(3);
	obj->addNum(7);
	obj->addNum(2);
	cout << obj->record.size() << endl;
	//obj->addNum(6);

	vector<vector<int>> ans = obj->getIntervals();
	for (auto& s1 : ans) {
		cout << "[";
		for (auto& s2 : s1)
			cout << " " << s2 << " ";
		cout << "]" << endl;
	}

	return 0;
}