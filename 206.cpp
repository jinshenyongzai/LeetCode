#include <iostream>

using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {

	}
};

//int main() {
//
//	ListNode* listNode;
//	int value = 6;
//
//	int arr[] = { 1, 2, 6, 3 ,4, 5 ,6 };
//
//	for (int i = 0; i < size(arr); i++) {
//		listNode = *listNode.next;
//		listNode.val = arr[i];
//	}
//
//	while (listNode.next != NULL) {
//		cout << listNode.val << "<" << listNode.next << endl;
//		listNode = *listNode.next;
//	}
//}