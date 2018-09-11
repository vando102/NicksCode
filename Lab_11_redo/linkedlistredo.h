#include <iostream>
using namespace std;

template <typename T>
class LinkedList
{
private:
	class Node
	{
	public:
		T info; //this is the type of the variable to be used
		Node *next; //this is the node pointer.
	};
	typedef Node *nodePtr;
public:
	LinkedList(); 		//constructor
	~LinkedList();
	LinkedList(const LinkedList<T> & orig); //copy constructor
	bool empty(); 		//determine if the LinkList is empty T Front();
	T front();	// returns item at front of LinkList
	T back();
	bool EraseNth(T  item);		// returns item at back of LinkList
	void printSecond();//print the content of the second node
	void Push_front(const T & item); //add item at the begining of LinkList
	void push_back(const T & item);// push_back function to add an item at the end of the LinkList
	void pop_back();//remove the last item of the LinkList
	void pop_front();// Pop_front function to remove the first item of the LinkList.
	void average(int n);
	int search(const T & item);// Search function to search a given value and return the count of the given value
	void print(); //prints all contents of the linked list
	friend ostream & operator << (ostream & out, const LinkedList<T> & c)
	{
			nodePtr nPtr = c.first; //c is a linked list that access the member first.
			while(nPtr != NULL) //while the list is not empty./
			{
				out << nPtr->info << endl; //print out the data that is in the linkedlist.
				nPtr = nPtr->next; //advance the pointer
			}
			return out; //return the ostream variable
	} //overloades the << operator to print
private:
	nodePtr first; // node pointer which points to the front(first node)
};

template<typename T>
LinkedList<T>::~LinkedList()
{
	nodePtr i = front;
	while(i != 0)
	{
		front = i->next; //while the front is not i's next
		delete i; //delete the element
		i = front; //set i equal to the 1st
	}
	if(i == 0) //if the list is empty, then the list is destroyed.
	{
		cout << " List destroyed "<<endl;
	}
	else
	{
		cout << "Success "<< endl;
	}
}

template<typename T>
void LinkedList<T>::average(int n)
{
 	double *doubleptr = new double[n]; //allocated new memory to the new double array
	double sum = 0.0; //initialize the sum value
	for(int i = 0; i<n;i++)
	{
		cin>>doubleptr[i]; //input the values
		cout<< &doubleptr[i]; //print the memory address of the values
		sum = sum + doubleptr[i]; //update the value of the sums
	}

	double avg = sum/n; //take the average by taking the sum divided by number of elements
	cout << avg; //print out the average of the double array
	delete[] doubleptr; //free the memory spaces so that other memory spots can use it.
}

template <typename T>
LinkedList<T>:: LinkedList()
{
	first = 0; //default constructor by default points the pointer to NULL
}
template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> & orig)
{

	nodePtr i = new Node;
	front =
}
template <typename T>
int LinkedList<T>:: search( const T & item) //returns an integer and taken in a constant T item that is pass-by-reference.
{
	nodePtr cursor = first; //set the pointer equal to the first node
	int count = 1; //se the count equal to one
	while (cursor != 0) //while the list is not empty
	{
		if (cursor -> info == item) //if the list item is equal to the item that you are searching for.
		{
			return count; //return the count
		}
		else
		{
			cursor = cursor -> next; //traverse through the list
			count++; //add the count...
		}
	}
	return -1; //otherwise return a negative value.
}
template <typename T>
T LinkedList<T>:: front()
{
	return first -> info; //to return the front item, just do the first->info
}
template <typename T>
T LinkedList<T>:: back()
{
	nodePtr cursor = first; //set the cursor equal to the first node.
	while (cursor -> next != 0) //while the next item is not null
	{
		cursor = cursor -> next; //traverse through the list.
	}
	return cursor -> info; //return the value.
}
template <typename T>
void LinkedList<T>:: printSecond() //prints the second value.
{
	cout << first -> next -> info << endl; //print the second value.
}
template <typename T>
void LinkedList<T>:: pop_front() //set the cursor equal to the first node.
{
	nodePtr cursor = first;
	first = first -> next; //traverse through the list.
	delete cursor; //delete the cursor.
}
template <typename T>
void LinkedList<T>:: push_back( const T & item)
{
	nodePtr newNode = new Node; //allocate memory to newNode
	newNode -> info = item; //set the item equal to the item that you are looking for
	newNode -> next = 0; //set the nex equal to empty
	if (first == 0) //if this is empty
	{
		first = newNode; //point the first to newNode... where the next value is empty
	}
	else
	{
		nodePtr cursor = first;  //cursor is set equal to the first node.
		while (cursor -> next != 0) //while the next next value is not null
		{
			cursor = cursor -> next; //traverse through the list
		}
		cursor -> next = newNode; //otherwise, the next value will be newNode
	}
}

template <typename T>
bool LinkedList<T>::empty()
{
	return(first==NULL);
}

template <typename T>
void LinkedList<T>::print()
{
	nodePtr location = first; //set the node pointer equal to the first node
	for(int i = 1; location != NULL; i++) //set it into a loop
	{
		cout<< location->info << endl; //print out the contents of the loop here
		location = location->next; //advances each location until the list is empty
	}
}
