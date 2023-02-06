#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Node {

private:
	int data;
	Node* prev;

public:
	Node() : data(0), prev(nullptr) { }

	void setData(const int& data)
	{
		this->data = data;
	}
	void setPrev(Node* prev)
	{
		this->prev = prev;
	}
	int getData()
	{
		return data;
	}
	Node* getPrev()
	{
		return prev;
	}
};

class Queue {

private:
	Node* frontPtr;
	Node* backPtr;
	int len;

public:
	Queue() : frontPtr(nullptr), backPtr(nullptr), len(0) { }

	void push(const int& data)
	{
		if (len == 0)
		{
			frontPtr = backPtr = new Node;
			frontPtr->setData(data);
			len++;
		}
		else
		{
			Node* tempPtr = new Node;
			backPtr->setPrev(tempPtr);
			backPtr = backPtr->getPrev();
			backPtr->setData(data);
			len++;
		}
	}
	int pop()
	{
		if (len == 0)
			return -1;
		else
		{
			int tempData = frontPtr->getData();
			Node* tempPtr = frontPtr;
			frontPtr = frontPtr->getPrev();
			delete tempPtr;
			len--;
			return tempData;
		}
	}
	int size() const
	{
		return len;
	}
	int empty() const
	{
		if (len == 0)
			return 1;
		else
			return 0;
	}
	int front() const
	{
		if (len == 0)
			return -1;
		else
			return frontPtr->getData();
	}
	int back() const
	{
		if (len == 0)
			return -1;
		else
			return backPtr->getData();
	}
};

int main(void) {

	int N;
	char tempOrder[6];
	int tempData;
	vector<int> result;
	Queue queue;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		scanf("%s", tempOrder);

		if (strcmp(tempOrder, "push") == 0)
		{
			scanf("%d", &tempData);
			queue.push(tempData);
		}
		else if (strcmp(tempOrder, "pop") == 0)
			result.push_back(queue.pop());
		else if (strcmp(tempOrder, "size") == 0)
			result.push_back(queue.size());
		else if (strcmp(tempOrder, "empty") == 0)
			result.push_back(queue.empty());
		else if (strcmp(tempOrder, "front") == 0)
			result.push_back(queue.front());
		else if (strcmp(tempOrder, "back") == 0)
			result.push_back(queue.back());
	}

	for (int i = 0; i < result.size(); i++)
		printf("%d\n", result[i]);

	return 0;
}