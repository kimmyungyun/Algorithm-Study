#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Node
{

public:
	int value;
	Node *before;
	Node(int v, Node *n)
	{
		value = v;
		before = n;
	}
};
class List
{
	int size;
	Node *top;
public:
	List(int);
	void Push(int x);
	int Pop();
	int Sz();
	int Empty();
	int Top();
};
List::List(int x)
{
	this->top = NULL;
	size = 0;
}
void List::Push(int x)
{
	Node *newNode = new Node(x, top);
	this->top = newNode;
	size++;
}
int List::Pop()
{
	Node *tmp = top;
	if (tmp == NULL)
		return -1;
	int tmp_value = tmp->value;
	top = tmp->before;
	this->size--;
	delete tmp;
	return tmp_value;
}
int List::Top()
{
	if (this->top == NULL)
		return -1;
	else
		return this->top->value;
}
int List::Sz()
{
	return this->size;
}
int List::Empty()
{
	if (this->size == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int N;
	cin >> N;
	string x;
	List list(0);
	while (N--)
	{
		cin >> x;
		if (x.compare("push") == 0)
		{
			int v;
			cin >> v;
			list.Push(v);
		}
		else if (x.compare("top") == 0)
		{
			cout << list.Top() << '\n';
		}
		else if (x.compare("size") == 0)
		{
			cout << list.Sz() << '\n';
		}
		else if (x.compare("empty") == 0)
		{
			cout << list.Empty() << '\n';
		}
		else if (x.compare("pop") == 0)
		{
			cout << list.Pop() << '\n';
		}
	}
}