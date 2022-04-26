#pragma once
#include <iostream>
#define MAX 100
using namespace std;

class Queue
{
private:
	int myQueue[MAX];
	int front, rear;
public:
	Queue();
	bool isEmpty();
	void enQueue(int);
	int deQueue();
	void display();
};

