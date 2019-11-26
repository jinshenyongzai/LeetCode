#include <iostream>
#include <stack>

using namespace std;

class MinStack {
public:
	MinStack() {}
	void push(int x) {
		s1.push(x);
		if (s2.empty() || x <= s2.top()) 
			s2.push(x);
	}
	void pop() {
		if (s1.top() == s2.top()) 
			s2.pop();
		s1.pop();
	}
	int top() {
		return s1.top();
	}
	int getMin() {
		return s2.top();
	}

private:
	stack<int> s1, s2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// int main() {

// 	MinStack* obj = new MinStack();

// 	obj->push(-2);
// 	obj->push(0);
// 	obj->push(-3);
// 	cout << obj->getMin() << endl;
	
// 	obj->pop();
// 	cout << obj->top() << endl;
// 	cout << obj->getMin() << endl;
// }
