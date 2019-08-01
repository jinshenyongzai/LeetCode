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
	ListNode* deleteDuplicates(ListNode* head) {

		ListNode* curNode = head;

		while (curNode != NULL) {
			while (curNode->next != NULL && curNode->val == curNode->next->val)
				curNode->next = curNode->next->next;
			curNode = curNode->next;
		}

		return head;
	}
};

int main() {

	int arr[] = { 1, 1, 2 };
	int n = sizeof(arr) / sizeof(int);

	ListNode* head = createLinkedList(arr, n);
	printLinkedList(head);

	ListNode* head2 = Solution().deleteDuplicates(head);
	printLinkedList(head2);

	deleteLinkedList(head2);
	return 0;
}