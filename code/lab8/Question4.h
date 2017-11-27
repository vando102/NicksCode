#ifndef Question4_H
#define Question4_H
#include <list>
#include <iostream>

using namespace std;
const int CAPACITY = 6;
template<typename C>

class queue
{
public:
	bool empty() const
	{
		return (accessors.empty());
	}
	int size()
	{
		return accessors.size();
	}
	void dequeue()
	{
		if (!accessors.empty())
		{
			accessors.pop_front();
		}
		else
		{
			cerr << "Queue is empty. " << endl;
		}
	}

	C front()
	{
		return accessors.front();
	}

	C back()
	{
		return accessors.back();
	}

	void enqueue(C inputs)
	{

		if (accessors.size()<=CAPACITY)
		{
			accessors.push_back(inputs);
		}
		else
		{
			cerr << "Queue is full. " << endl;
		}
	}
	friend ostream & operator << (ostream & out, const queue & c)
	{
		out << "The value for this function is  " << endl;
		return out;
	}
private:
	list <C> accessors;
};
#endif
