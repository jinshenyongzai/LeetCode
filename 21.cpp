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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

		ListNode* dummyHead = new ListNode(0);
		ListNode* curNode = dummyHead;

		while (l1 && l2) {
			if (l1->val <= l2->val) {
				curNode->next = new ListNode(l1->val);
				l1 = l1->next;
			}
			else {
				curNode->next = new ListNode(l2->val);
				l2 = l2->next;
			}

			curNode = curNode->next;
		}		

		while (l1) {
			curNode->next = new ListNode(l1->val);
			l1 = l1->next;
			curNode = curNode->next;
		}

		while (l2) {
			curNode->next = new ListNode(l2->val);
			l2 = l2->next;
			curNode = curNode->next;
		}

		return dummyHead->next;
	}
};

int main() {

	int arr1[] = { -9, 3 };
	int n1 = sizeof(arr1) / sizeof(int);

	int arr2[] = { 5, 7 };
	int n2 = sizeof(arr2) / sizeof(int);

	ListNode* head1 = createlinkedlist(arr1, n1);
	ListNode* head2 = createlinkedlist(arr2, n2);

	ListNode* head = Solution().mergeTwoLists(head1, head2);
	printlinkedlist(head);
	
	deletelinkedlist(head1);
	deletelinkedlist(head2);
	deletelinkedlist(head);
	return 0;
}