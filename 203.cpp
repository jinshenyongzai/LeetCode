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
	ListNode* removeElements(ListNode* head, int val) {

		ListNode* dummyHead = new ListNode(-1);
		dummyHead->next = head;
		ListNode* curNode = dummyHead;

		while (curNode->next != NULL) {

			if (curNode->next->val == val) {
				ListNode* delNode = curNode->next;
				curNode->next = delNode->next;
				delete delNode;
			}
			else
				curNode = curNode->next;
		}

		ListNode* retNode = dummyHead->next;
		delete dummyHead;

		return retNode;
	}
};

int main() {

	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(int);
	int val = 6;

	ListNode* head = createlinkedlist(arr, n);

	ListNode* head2 = Solution().removeElements(head, val);
	printlinkedlist(head2);

	deletelinkedlist(head2);
	return 0;
}