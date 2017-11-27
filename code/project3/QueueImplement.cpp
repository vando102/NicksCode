#include "Queue.h"
#include "Inventory.h"

/*purpose: creates an empty queue

pre-condition: NONE!!!!!!

post-condition: creates an empty queue*/
Queues::Queues()
{
	m_front = 0;
	m_back = 0;
}

/*purpose: check if a queue is empty

pre-condition: NONE

post-condition: returns a boolean*/
bool Queues::empty() const
{
	return(m_front == m_back);
}

/*purpose: to push inventory objects to the back of the queue

pre-condition: takes in an inventory object

post-condition: queue will now hold an inventory object*/
void Queues::enqueue(QueueElement & value)
{
	int update_back = (m_back + 1) % CAPACITY;
	if (update_back != m_front)
	{
		m_Queue[m_back] = value;
		m_back = update_back;
	}
	else
	{
		cout << "The queue is full. " << endl;
	}
}

/*purpose: to access the front element of the queue

pre-condition: NONE

post-condition: returns the inventory object that is located at the front*/
QueueElement Queues::front()
{
	if (!empty())
	{
		return m_Queue[m_front];
	}
	else
	{
		cerr << " The queue is empty. " << endl;
	}
}

/*purpose: to access the back element of the queue

pre-condition: NONE

post-condition: returns the inventory object that is located at the back*/
QueueElement Queues::back()
{
	/*if (!empty())
	{
		return m_Queue[m_back-1];
	}
	else
	{
		QueueElement garbage;
		cerr << "Queue is empty. " << endl;
		return garbage;
	}*/
	QueueElement temp;
	while (m_front != m_back)
	{
		temp = front();
		dequeue();
	}
	return temp;
}

/*purpose: to remove an inventory object (assuming there is one) from the front of the queue

pre-condition: NONE

post-condition: queue will hold one less inventory object (assuming there are any inventory objects inside of it)*/
void Queues::dequeue()
{
	if (!empty())
	{
		m_front = (m_front + 1) % CAPACITY;
	}
	else
	{
		cout << "Queue is empty. " << endl;
	}
}

//overloaded output operatord
ostream & operator  << (ostream & out, Queues & c)
{
	if(c.empty())
	{
		out << "Queue is empty. " << endl;
		return out;
	}
	else
	{
		
		for (int i = 1; !c.empty(); i++)
		{
			QueueElement temp = c.front();
			out << "Inventory " << i << endl;
			out << temp << "\n";
			c.dequeue();
		}
		return out;
	}
	
}
