#include <iostream>
#include <sstream>

using namespace std;

struct node {
	int data;
	node* prev, * next;

	static node* getNode(int data) {
		node* new_node = new node();
		new_node->data = data;
		new_node->prev = new_node->next = NULL;
		return new_node; //새로운 노드 추가 시 새로운 노드의 전과 다음은 null
	}
};

class deque {
	node* front;
	node* rear;
	int size;

public:
	deque() {
		front = rear = NULL;
		size = 0;
	}

	void insertFront(int data);
	void insertRear(int data);
	void delFront();
	void delRear();
	int getFront();
	int getRear();
	int getSize();
	void empty();
};

void deque::empty() {
	if (front == NULL) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	cout << endl;
}

int deque::getSize() {
	return size;
}

void deque::insertFront(int data) {
	node* new_node = node::getNode(data);

	if (front == NULL) {
		rear = front = new_node;
	}
	else {
		new_node->next = front;
		front->prev = new_node;
		front = new_node;
	}

	size++;
}

void deque::insertRear(int data) {
	node* new_node = node::getNode(data);

	if (rear == NULL) {
		front = rear = new_node;
	}
	else {
		new_node->prev = rear;
		rear->next = new_node;
		rear = new_node;
	}
	size++;
}

void deque::delFront() {
	if (front == NULL) {
		cout << -1;
	}
	else {
		cout << front->data;
		node* temp = front;
		front = front->next;

		if (front == NULL) {
			rear = NULL;
		}
		else {
			front->prev = NULL;
		}
		free(temp);
		size--;
	}
	cout << endl;
}

void deque::delRear() {
	if (front == NULL) {
		cout << -1;
	}
	else {
		cout << rear->data;

		node* temp = rear;
		rear = rear->prev;

		if (rear == NULL) {
			front = NULL;
		}
		else {
			rear->next = NULL;
		}
		free(temp);
		size--;
	}
	cout << endl;
}

int deque::getFront() {
	if (front == NULL) {
		return -1;
	}
	else {
		return front->data;
	}
}

int deque::getRear() {
	if (front == NULL) {
		return -1;
	}
	else {
		return rear->data;
	}
}

int main() {
	deque dq;
	int N;

	cin >> N;

	while (N > -1) {
		string str;
		string data;
		stringstream cast;

		getline(cin, str);

		if (str.find("push_front") == 0) {
			cast << str;
			cast >> data;
			cast >> data;
			str = "push_front";
		}

		if (str.find("push_back") == 0) {
			cast << str;
			cast >> data;
			cast >> data;
			str = "push_back";
		}

		if (!str.compare("pop_front")) {
			dq.delFront();
		}
		else if (!str.compare("pop_back")) {
			dq.delRear();
		}
		else if (!str.compare("size")) {
			cout << dq.getSize() << endl;
		}
		else if (!str.compare("empty")) {
			dq.empty();
		}
		else if (!str.compare("front")) {
			cout << dq.getFront() << endl;
		}
		else if (!str.compare("back")) {
			cout << dq.getRear() << endl;
		}
		else if (!str.compare("push_front")) {
			dq.insertFront(stoi(data));
		}
		else if (!str.compare("push_back")) {
			dq.insertRear(stoi(data));
		}

		N--;
	}

	return 0;
}