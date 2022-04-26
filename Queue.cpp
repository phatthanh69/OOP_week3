#include "Queue.h"

Queue::Queue()
{
	front = rear = -1;
}

bool Queue::isEmpty()
{
	if (front = -1) return true;
	return false;
}

void Queue::enQueue(int value)
{
	if (front == 0 && rear == MAX - 1)
		cout << "queue is full";
	else {
		if (front == -1) {
			front = 0;
			rear++;
			myQueue[rear] = value;
		}
	}
}

int Queue::deQueue()
{
	int value;
	if (isEmpty()) {
		cout << "queue is empty";
		return -1;
	}
	else {
		value = myQueue[front];
		if (front >= rear) {
			front = -1;
			rear = -1;
		}
		else {
			front++;
		}
		return value;
	}
}

void Queue::display()
{
	for (int i = front; i <= rear; i++)
		cout << myQueue[i] << " ";
}
