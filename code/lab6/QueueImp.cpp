#include "Queue.h"

Queues::Queues(QueueElement & print)
{
	m_array[CAPACITY] = print;
}

Queues::Queues()
{
	m_front = 0;
	m_back = 0;
}

bool Queues::empty()
{
	return(m_back == m_front);
}

QueueElement Queues::front()
{
	if (!empty())
	{
		return m_array[m_front];
	}
	else
	{
		cerr << "Queue is empty by front" << endl;
		QueueElement none = false;
		return none;
	}
}

void Queues::dequeue()
{
	if (!empty())
	{
		m_front = (m_front + 1) % CAPACITY;
	}
	else
	{
		cerr << "Queue is empty by dequeue " << endl;
	}
}

ostream & operator << (ostream & out, const Queues & c)
{
	for (int i = c.m_front; i != c.m_back; i = (i + 1) % CAPACITY)
	{
		out << c.m_array[i] << endl;
	}
	return out;
}

void Queues::enqueue(const QueueElement & letters)
{
	int update_back = (m_back + 1) % CAPACITY;
	if (update_back != m_front)
	{
		m_array[m_back] = letters;
		m_back = update_back;
	}
	else
	{
		cerr << "Cant enqueue " << endl;
	}
}
