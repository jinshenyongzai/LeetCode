#include <iostream>
#include <vector>

using namespace std;

class MyCircularQueue {
public:

	vector<int> res;
	int front;
	int rear;
	int capacity;

	/** Initialize your data structure here. Set the size of the queue to be k. */
	MyCircularQueue(int k) {
		res.resize(k + 1);
		front = 0;
		rear = 0;
		capacity = k;
	}

	/** Insert an element into the circular queue. Return true if the operation is successful. */
	bool enQueue(int value) {
		if (isFull())
			return false;

		rear = (rear + 1) % (capacity + 1);
		res[rear] = value;

		return true;
	}

	/** Delete an element from the circular queue. Return true if the operation is successful. */
	bool deQueue() {
		if (isEmpty())
			return false;

		front = (front + 1) % (capacity + 1);
		
		return true;
	}

	/** Get the front item from the queue. */
	int Front() {
		if (isEmpty())
			return -1;

		return res[(front + 1) % (capacity + 1)];
	}

	/** Get the last item from the queue. */
	int Rear() {
		if (isEmpty())
			return -1;

		return res[rear];
	}

	/** Checks whether the circular queue is empty or not. */
	bool isEmpty() {
		return front == rear;
	}

	/** Checks whether the circular queue is full or not. */
	bool isFull() {
		return (rear + 1) % (capacity + 1) == front;
	}
};

int main() {
	
	int k = 3;
	MyCircularQueue* obj = new MyCircularQueue(k);

	bool param_1 = obj->enQueue(2);
	cout << param_1 << endl;

	int param_2 = obj->Rear();
	cout << param_2 << endl;

	int param_3 = obj->Front();
	cout << param_3 << endl;

	bool param_4 = obj->deQueue();
	cout << param_4 << endl;

	int param_5 = obj->Front();
	cout << param_5 << endl;

	bool param_6 = obj->deQueue();
	cout << param_6 << endl;

	int param_7 = obj->Front();
	cout << param_7<< endl;

	bool param_8 = obj->enQueue(4);
	cout << param_8 << endl;

	bool param_9 = obj->enQueue(2);
	cout << param_1 << endl;

	bool param_10 = obj->enQueue(2);
	cout << param_10 << endl;

	bool param_11 = obj->enQueue(3);
	cout << param_11 << endl;

	

	/*bool param_1 = obj->enQueue(1);
	cout << param_1 << endl;

	bool param_2 = obj->enQueue(2);
	cout << param_2 << endl;

	bool param_3 = obj->enQueue(3);
	cout << param_3 << endl;

	bool param_4 = obj->enQueue(4);
	cout << param_4 << endl;

	int param_5 = obj->Rear();
	cout << param_5 << endl;

	bool param_6 = obj->isFull();
	cout << param_6 << endl;

	bool param_7 = obj->deQueue();
	cout << param_7 << endl;

	bool param_8 = obj->enQueue(4);
	cout << param_8 << endl;

	int param_9 = obj->Rear();
	cout << param_9 << endl;*/

	return 0;
}