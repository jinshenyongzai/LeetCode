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
	ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {

		ListNode* dummyHead = new ListNode(-1);
		ListNode* curNode = dummyHead;

		ListNode* curNode1 = head1;
		ListNode* curNode2 = head2;

		int flag = 0;
		while (curNode1 || curNode2 || flag) {

			int x = curNode1 ? curNode1->val : 0;
			int y = curNode2 ? curNode2->val : 0;

			ListNode* node = new ListNode((x + y + flag) % 10);
			curNode->next = node;
			curNode = node;

			flag = (x + y + flag) / 10;

			if (curNode1) curNode1 = curNode1->next;
			if (curNode2) curNode2 = curNode2->next;
		}
		
		return dummyHead->next;
	}
};

int main() {

	int arr1[] = { 1 };
	int n1 = sizeof(arr1) / sizeof(int);

	int arr2[] = { 9, 9 };
	int n2 = sizeof(arr2) / sizeof(int);

	ListNode* head1 = createLinkedList(arr1, n1);
	ListNode* head2 = createLinkedList(arr2, n2);

	ListNode* AddHead = Solution().addTwoNumbers(head1, head2);
	printLinkedList(AddHead);

	deleteLinkedList(head1);
	deleteLinkedList(head2);
	deleteLinkedList(AddHead);
	return 0;
}