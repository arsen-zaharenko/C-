#include "List.h"
#include <iostream>
#include <ctime>

using namespace std;

void problem(List*, List*);

int main() {
	srand(time(0));
	List* list1 = new List;
	List* list2 = new List;
	Node* p1 = list1->getHead();
	Node* p2 = list2->getHead();

	for (int i = 0; i < 50; i++) {
		p1 = list1->add(p1, rand() % 2);
	}
	
	for (int i = 0; i < 5; i++) {
		p2 = list2->add(p2, rand() % 2);
	}
	cout << "First list:\n";
	list1->print();
	cout << "Second list:\n";
	list2->print();

	problem(list1, list2);

	delete list1;
	delete list2;

	return 0;
}

void problem(List* list1, List* list2) {
	Node* p1 = list1->getHead();
	Node* p2 = list2->getHead();
	int length = 0, startLength;

	if (list2->isEmpty()) {
		cout << "Second list is empty";
		return;
	}

	do {
		length++;
		p2 = p2->next;
	} while (p2);

	startLength = length;

	for (p2 = list2->getHead(); p1 && length; p1 = p1->next) {
		if (p1->data == p2->data) {
			length--;
			p2 = p2->next;
		}
		else {
			length = startLength;
			p2 = list2->getHead();
		}
	}

	if (!length) cout << "First list contains Second list\n";
	else cout << "First list does not contain Second list\n";
}