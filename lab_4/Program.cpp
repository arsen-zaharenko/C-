#include "Stack.h"
#include <iostream> 
#include <new>

int main() {
	try {
		Stack<char>* S;
		try {
			S = new Stack<char>;

			S->push('o');
			S->push('l');
			S->push('l');
			S->push('e');
			S->push('h');
			S->print();
			S->pop();
			S->pop();
			S->pop();
			S->push('z');
			S->print();
			std::cout << S->top() << S->top() << S->top() << '\n';
			std::cout << S->peek(2) << S->peek(3) << S->peek(2) << '\n';

			delete S;
		}
		catch (std::bad_alloc){
			std::cerr << "Error: Out of memory on allocation.\n" << std::endl;
		}	
	}
	catch (const char* exception) {
		std::cerr << "Error: " << exception << '\n';
	}

	return 0;
}