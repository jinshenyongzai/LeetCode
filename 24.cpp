#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createlinkedlist(int arr[], int n) {

	if (n == 0)
		return NULL;

	ListNode* head = new ListNode(arr[0]);
	ListNode* curnode = head;

	for (int i = 1; i < n; i++) {
		curnode->next = new ListNode(arr[i]);
		curnode = curnode->next;
	}

	return head;
}

void printlinkedlist(ListNode* head) {

	ListNode* curnode = head;

	while (curnode != NULL) {
		cout << curnode->val << " -> ";
		curnode = curnode->next;
	}

	cout << "null" << endl;
}

void deletelinkedlist(ListNode* head) {

	ListNode* curnode = head;
	while (curnode != NULL) {
		ListNode* delnode = curnode;
		curnode = curnode->next;
		delete delnode;
	}
	return;
}

class Solution {
public:
	ListNode* swapPairs(ListNode* head) {

		ListNode* dummyHead = new ListNode(0);
		dummyHead->next = head;

		ListNode* p = dummyHead;
		while (p->next && p->next->next) {

			ListNode* node1 = p->next;
			ListNode* node2 = node1->next;
			ListNode* next = node2->next;

			node2->next = node1;
			node1->next = next;
			p->next = node2;

			p = node1;
		}
		
		ListNode* retNode = dummyHead->next;
		delete dummyHead;

		return retNode;
	}
};

// int main() {

// 	int arr[] = { 1, 2, 3, 4 };
// 	int n = sizeof(arr) / sizeof(int);

// 	ListNode* head = createlinkedlist(arr, n);

// 	ListNode* head1 = Solution().swapPairs(head);
// 	printlinkedlist(head1);
	
// 	deletelinkedlist(head1);
// 	return 0;
// }
