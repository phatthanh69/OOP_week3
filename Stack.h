#pragma once
#include <iostream>
#include <math.h>
#define MAX 1000
using namespace std;
class Stack
{
private:
	int nTop;
public:
	int a[MAX];
	Stack();
	~Stack();
	void push(int x);
	int pop();
	int top();
	bool empty();
};

