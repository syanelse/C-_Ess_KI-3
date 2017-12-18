// Lab_5_3_13(1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Node
{
	public:
		Node(int val);
		int value;
		Node* next;
};

Node::Node(int val) : value(val), next(nullptr) {}

class List
{
	public:
		List();
		void push_front(int value);
		bool pop_front(int& value);

	private:
		Node* head;
};

List::List() : head(nullptr) {}

void List::push_front(int value)
{
	Node* new_head = new Node(value);
	new_head->next = head;
	head = new_head;
}

bool List::pop_front(int& value)
{
	if (head == nullptr)
		return false;

	Node* new_head = head->next;
	value = head->value;
	delete head;
	head = new_head;

	return true;
}

int main()
{
	List list;
	int value = 0;

	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	list.push_front(4);

	while (list.pop_front(value))
		cout << value << endl;

	return 0;
}