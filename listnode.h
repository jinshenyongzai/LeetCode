#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x = 0, ListNode *p = nullptr) : val(x), next(nullptr) {};
};

void print_list(ListNode *head){
	while (head->next != nullptr){
		cout << head->val << "->";
		head = head->next;
	}
	cout << head->val << endl;
}

class List{
public:

	ListNode *head, *tail;
	int pos;

	List(){
		head = tail = nullptr;
	};

	List(const vector<int> &in){
		head = tail = nullptr;
		for (auto it : in)
			this->insert(it);
	};

	~List() {};

	void insert(int x){
		if (head == nullptr){
			head = tail = new ListNode(x);
			head->next = tail->next = nullptr;
		}
		else{
			ListNode *p = new ListNode(x);
			tail->next = p;
			tail = p;
			tail->next = nullptr;
		}
	};

	void print(){
		print_list(head);
	}
};