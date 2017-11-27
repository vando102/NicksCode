#ifdef Linkedlist_H
#define Linkedlist_H
#include <iostream>
#include <string>
template<typename T>
class Linkedlist_H
{
private:
	class Node //node is a class
	{
	public:
		T info; //this is is the type of information that list will read
		Node *next; //next is the Node pointer that points to values along the list
	};
	typedef Node *nodePtr; //makes nodePtr a type of Node

public:
	LinkedList() //this is the default constructor
	{
		front = NULL; //this sets the Node pointer private variable equal to NULL
	}
	LinkList(const LinkList<T> & orig)
	{
		front = orig.front; //this copy constructor will put the front value in the ListList item orig from the
		//nodePtr type item front.
	}
	bool empty()
	{
		return(front==NULL); //this function will return true if the front points to a NULL value
	}
	T Front()
	{
		return front->info; //the value that the front is pointing to gets returned when the function is called.
	}
	T Back()
	{
		nodePtr locations = front; //nodePtr object is set equal to the front object
		while(locations->next != NULL)
		{
			locations = locations->next; //move to the next location in the linked list
		}
		return locations->info; //return the value that the front is pointing to
	}
	void PrintSecond()
	{
		nodePtr locations = front;
		cout<< locations->next->info << endl; //this prints out the contents of the node
	}
	void Push_front(const T & item)
	{
		nodePtr locations;
		if(front == NULL)// if the node location is equal to the end
		{
			front = new Node; //allocate memory for type node
			front->info = item; //if the value is equal to the item
			front ->next = NULL; //then the next location will be equal to the null pointer.
		}
		else
		{
			locations = new Node; //allocated memory for type node
			locations->info = item; //if the the node location is equal to the item
			locations->next = front; //then the next location will equal to the front
			front = locations;
		}
	}
	void pop_back()
	{
		nodePtr location = front;
	}
	int search(T value)
	{
		nodePtr locations = front; //sets the nodePtr object equal to the advancer
		for(int i = 0; locations != NULL; i++) //starts at index 1 and goes to the end and increments each time
		{
			if(locations->info==value) //if the value of the nodePtr object is equal to the value then return the index its located at
			{
				return i;//returns the index of the location of where the value is at
			}
			locations = locations->next; //this advances each location by one each time.
		}
	}
	void Pop_front() //delete....
	{
		nodePtr locations = front; //this is the first element in linked list
		front = front->next; //this is the second location in link list
		delete locations; //delete that variable....
	}
	void Push_back(T items)
	{

	}
	void Print()
	{
		nodePtr locations = front;
		for(int i = 1; locations != NULL; i++)
		{
			cout<< locations->info << endl; //this prints out the contents of the node
			locations = locations->next; //this advances location of the content of the node
		}
	}
private:
	nodePtr front; //this is the private member object front of type nodePtr
};
#endif
