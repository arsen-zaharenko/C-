#include <iostream>
#include <new>

template <typename type>
struct Node {
	struct Node<type>* next;
	type data;
};

template <typename type>
class Stack {
	struct Node<type>* head;
public:
	Stack() { head = 0; };

	~Stack() {
		if (empty()) {
			delete head;
		}
		else {
			for (Node<type>* p = head; p;) {
				Node<type>* _p = p;
				p = p->next;
				delete _p;
			}
		}
	};

	type top() { 
		if (empty()) {
			throw "Trying to get a top element from an empty stack.";
		}
		return head->data;
	};

	type peek(int n) {
		const int N = n;
		for (Node<type>* p = head; p; p = p->next) {
			if (!--n) {
				return p->data;
			}
		}
		throw "Trying to get a non-existent stack element.";
	};

	bool empty() {
		if (!head) {
			return true;
		}
		return false;
	};

	void push(type e) {
		Node<type>* p;
		try {
			p = new  Node<type>;

			p->data = e;
			p->next = 0;

			if (empty()) {
				head = p;
			}
			else {
				p->next = head;
				head = p;
			}
		}
		catch (std::bad_alloc){
			std::cerr << "Error: Out of memory on allocation.\n" << std::endl;
		}
	};

	void pop() {
		if (empty()) {
			throw "Trying to remove an element from an empty stack.";
		}
		else {
			Node<type>* p = head->next;
			delete head;
			head = p;
		}
	};

	void print() {
		if (empty()) {
			std::cout << "Stack is empty\n";
			return;
		}

		std::cout << "Top of the list -> ";

		for (Node<type>* p = head; p; p = p->next) {
			std::cout << p->data << ' ';
		}

		std::cout << '\n';
	};
};