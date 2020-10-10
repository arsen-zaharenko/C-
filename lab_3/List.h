struct Node {
	struct Node* next;
	int data;
};

class List {
	struct Node* head;
public:
	List();
	~List();
	bool isEmpty();
	int getValue(Node*);
	Node* getHead();
	Node* getNextNode(Node*);
	Node* add(Node*, int);
	void print();
};