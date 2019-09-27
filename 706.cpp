#include <iostream>
#include <map>

using namespace std;

class MyHashMap {
public:

	map<int, int> myHashMap;

	/** Initialize your data structure here. */
	MyHashMap() {

	}

	/** value will always be non-negative. */
	void put(int key, int value) {
		myHashMap[key] = value;
	}

	/** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
	int get(int key) {

		if (myHashMap.find(key) == myHashMap.end())
			return -1;
		return myHashMap[key];
	}

	/** Removes the mapping of the specified value key if this map contains a mapping for the key */
	void remove(int key) {
		if (myHashMap.find(key) != myHashMap.end())
			myHashMap.erase(key);
	}
};

int main() {
	
	MyHashMap* obj = new MyHashMap();

	obj->put(1, 1);
	obj->put(2, 2);

	int param_1 = obj->get(1);
	cout << param_1 << endl;

	int param_2 = obj->get(3);
	cout << param_2 << endl;

	obj->put(2, 1);

	int param_3 = obj->get(2);
	cout << param_3 << endl;

	obj->remove(2);

	int param_4 = obj->get(2);
	cout << param_4 << endl;

	return 0;
}