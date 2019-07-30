#include <iostream>
#include <vector>

using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

 void print_list(ListNode *head) {
	 while (head->next != nullptr) {
		 cout << head->val << "->";
		 head = head->next;
	 }
	 cout << head->val << endl;
 }

 class List {
 public:

	 ListNode *head, *tail;
	 int position;

 public:
	 List() {head = tail = nullptr;};

	 List(const vector<int> &in) {
		 head = tail = nullptr;
		 for (auto it : in)
			 this->insert(it);
	 };

	 ~List() { delete head, tail; };

	 void insert(int x) {
		 if (head == nullptr) {
			 head = tail = new ListNode(x);
			 head->next = tail->next = nullptr;
		 }
		 else {
			 ListNode *p = new ListNode(x);
			 tail->next = p;
			 tail = p;
			 tail->next = nullptr;
		 }
	 };

	 void print() {
		 while (head->next != nullptr) {
			 cout << head->val << "->";
			 head = head->next;
		 }
		 cout << head->val << endl;
	 }
 };

 class Solution {
 public:
	 ListNode* reverseList(ListNode* head) {

		 ListNode* pre = NULL;
		 ListNode* cur = head;
		 while (cur != NULL) {
			 ListNode* next = cur->next;

			 cur->next = pre;
			 pre = cur;
			 cur = next;
		 }
		 return pre;
	 }
 };

int main() {

	vector<int> nums = { 1, 2, 3, 4, 5 };
	List list = List(nums);

	print_list(list.head);
	ListNode* head = Solution().reverseList(list.head);
	print_list(head);
}