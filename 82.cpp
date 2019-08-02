#include <iostream>
#include <unordered_map>

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
	ListNode* deleteDuplicates(ListNode* head) {

		if (head == NULL ||head->next == NULL)
			return head;

		ListNode* dummyHead = new ListNode(0);
		dummyHead->next = head;

		ListNode* pre = dummyHead;
		ListNode* cur = head;

		while (cur != NULL) {
			while (cur->next != NULL && cur->val == cur->next->val) {
				cur = cur->next;
			}
			if (pre->next == cur) {
				pre = pre->next;
			}
			else {
				pre->next = cur->next;
			}
			cur = cur->next;
		}
		return dummyHead->next;
	}
};

int main() {

	int arr[] = { 1, 2, 3, 3, 3, 4, 4, 5 };
	int n = sizeof(arr) / sizeof(int);

	ListNode* head = createlinkedlist(arr, n);

	ListNode* head2 = Solution().deleteDuplicates(head);
	printlinkedlist(head2);

	deletelinkedlist(head2);
	return 0;
}