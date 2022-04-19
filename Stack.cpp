#include "Stack.h"

Stack::Stack() {
	nTop = -1;
}

void Stack::push(int x)
{
	if (nTop >= (MAX - 1)) {
		cout << "Stack Overflow";
	}
	else {
		a[++nTop] = x;
		cout << x << " pushed into stack\n";
	}
}

int Stack::pop()
{
	if (nTop < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[nTop--];
		return x;
	}
}
Stack::~Stack()
{
	delete[] a;
}
int Stack::top()
{
	if (nTop < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[nTop];
		return x;
	}
}

bool Stack::empty()
{
	return (nTop < 0);
}