#include "List.h"
#include <iostream>

using namespace std;

List::List() { head = 0; }

List::~List() {
	Node* p1 = head;
	Node* p2;
	if (!p1) return;
	do {
		p2 = p1;
		p1 = p1->next;
		delete p2;
	} while (p1);
}

bool List::isEmpty() {
	if (!head) return true;
	return false;
}

int List::getValue(Node* node) { return node->data; }

Node* List::getHead() { return head; }

Node* List::getNextNode(Node* node) { return node->next; }

Node* List::add(Node* node, int number) {
	Node* p = new Node;
	p->data = number;
	if (!node)
	{
		if (head == 0) {
			p->next = 0;
			head = p;
		}
		else {
			p->next = head;
			head = p;
		}
		return p;
	}
	p->next = node->next;
	node->next = p;
	return p;
}

void List::print() {
	if (isEmpty()) cout << "List is empty\n";
	else {
		Node* p = head;
		do {
			cout << p->data << ' ';
			p = p->next;
		} while (p);
		cout << endl;
	}
}