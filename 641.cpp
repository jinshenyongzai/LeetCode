#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class MyCircularDeque {
public:

	vector<int> vec;

	int front;
	int rear;

	int capacity;
	int size;

	/** Initialize your data structure here. Set the size of the deque to be k. */
	MyCircularDeque(int k) {
		assert(k > 0);
		vec.resize(k);
		front = k - 1;
		rear = 0;
		capacity = k;
		size = 0;
	}

	/** Adds an item at the front of Deque. Return true if the operation is successful. */
	bool insertFront(int value) {
		if (size == capacity)
			return false;

		vec[front] = value;
		front = (front - 1 + capacity) % capacity;
		size++;

		return true;
	}

	/** Adds an item at the rear of Deque. Return true if the operation is successful. */
	bool insertLast(int value) {
		if (size == capacity)
			return false;

		vec[rear] = value;
		rear = (rear + 1) % capacity;
		size++;

		return true;
	}

	/** Deletes an item from the front of Deque. Return true if the operation is successful. */
	bool deleteFront() {
		if (size == 0)
			return false;

		front = (front + 1) % capacity;
		size--;

		return true;
	}

	/** Deletes an item from the rear of Deque. Return true if the operation is successful. */
	bool deleteLast() {
		if (size == 0)
			return false;

		rear = (rear - 1 + capacity) % capacity;
		size--;

		return true;
	}

	/** Get the front item from the deque. */
	int getFront() {

		if (size == 0)
			return -1;

		return vec[(front + 1) % capacity];
	}

	/** Get the last item from the deque. */
	int getRear() {

		if (size == 0)
			return -1;

		return vec[(rear - 1 + capacity) % capacity];
	}

	/** Checks whether the circular deque is empty or not. */
	bool isEmpty() {
		return size == 0;
	}

	/** Checks whether the circular deque is full or not. */
	bool isFull() {
		return size == capacity;
	}
};

int main() {
	
	int k = 3;
	MyCircularDeque* obj = new MyCircularDeque(k);

	bool param_1 = obj->insertLast(1);
	cout << param_1 << endl;

	bool param_2 = obj->insertLast(2);
	cout << param_2 << endl;

	bool param_3 = obj->insertFront(3);
	cout << param_3 << endl;

	bool param_4 = obj->insertFront(4);
	cout << param_4 << endl;

	int param_5 = obj->getRear();
	cout << param_5 << endl;

	int param_6 = obj->isFull();
	cout << param_6 << endl;

	bool param_7 = obj->deleteLast();
	cout << param_7 << endl;

	bool param_8 = obj->insertFront(4);
	cout << param_8 << endl;

	bool param_9 = obj->getFront();
	cout << param_9 << endl;

	return 0;
}