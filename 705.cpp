#include <iostream>
#include <map>

using namespace std;

class MyHashSet {
public:

	map<int, int> hashSet;

	/** Initialize your data structure here. */
	MyHashSet() {
		
	}

	void add(int key) {
		hashSet[key] = 1;
	}

	void remove(int key) {
		hashSet[key] = 0;
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		return hashSet[key];
	}
};

int main() {
	
	MyHashSet* obj = new MyHashSet();

	obj->add(1);
	obj->add(2);

	bool param_1 = obj->contains(1);
	cout << param_1 << endl;

	bool param_2 = obj->contains(3);
	cout << param_2 << endl;

	obj->add(2);

	bool param_3 = obj->contains(2);
	cout << param_3 << endl;

	obj->remove(2);

	bool param_4 = obj->contains(2);
	cout << param_4 << endl;

	return 0;
}