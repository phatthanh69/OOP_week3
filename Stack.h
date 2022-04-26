#pragma once
#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;
class Stack
{
private:
	int nTop;
	int a[MAX];
public:
	Stack();
	void push(int x);
	int pop();
	int top();
	bool empty();
};

