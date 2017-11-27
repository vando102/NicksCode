#ifndef Queue_H
#define Queue_H
#include <iostream>
using namespace std;
const int CAPACITY = 1500;
typedef char QueueElement;
class Queues
{
public:

	Queues();

	Queues(QueueElement & print);

	bool empty();

	void enqueue(const QueueElement & letters);

	QueueElement front();

	void dequeue();

	friend ostream & operator << (ostream & out, const Queues & c);

private:
	int m_front, m_back;
	QueueElement m_array[CAPACITY];
};
#endif