#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createLinkedList(int arr[], int n) {

	if (n == 0)
		return NULL;

	ListNode* head = new ListNode(arr[0]);

	ListNode* curNode = head;
	for (int i = 1; i < n; i++) {
		curNode->next = new ListNode(arr[i]);
		curNode = curNode->next;
	}

	return head;
}

void printLinkedList(ListNode* head) {

	ListNode* curNode = head;

	while (curNode != NULL) {
		cout << curNode->val << " -> ";
		curNode = curNode->next;
	}

	cout << "NULL" << endl;
}

void deleteLinkedList(ListNode* head) {

	ListNode* curNode = head;
	while (curNode != NULL) {
		ListNode* delNode = curNode;
		curNode = curNode->next;
		delete delNode;
	}
	return;
}

class Solution {
public:
	ListNode* partition(ListNode* head, int x) {

		ListNode* dummyHead1 = new ListNode(-1);
		ListNode* dummyHead2 = new ListNode(-1);
		ListNode *subNode1 = dummyHead1, *subNode2 = dummyHead2;

		while (head) {

			if (head->val < x) {
				subNode1->next = head;
				subNode1 = subNode1->next;
			}
			else {
				subNode2->next = head;
				subNode2 = subNode2->next;
			}

			head = head->next;
		}

		subNode2->next = NULL;
		subNode1->next = dummyHead2->next;
		return dummyHead1->next;
	}
};

int main() {

	int arr[] = { 1, 4, 3, 2, 5, 2};
	int n = sizeof(arr) / sizeof(int);

	ListNode* head = createLinkedList(arr, n);
	printLinkedList(head);

	int x = 3;
	ListNode* head2 = Solution().partition(head, x);
	printLinkedList(head2);

	deleteLinkedList(head2);
	return 0;
}