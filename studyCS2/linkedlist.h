#ifndef Linkedlist_H
#define Linkedlist_H

#include <iostream>
using namespace std;

template<typename T>
class Linkedlist
{
private:
	class Node
	{
	public:
		T info;
		Node* next;
	};
	typedef Node* nodePtr;
	nodePtr first;
public:
	Linkedlist()
	{
		first = NULL;
	}
	~Linkedlist()
	{
		nodePtr cursor = first; // the initialize node pointer is equal to the first node
		while(first != 0) //while the first goes through each iteration
		{
			cursor = first; //the cursor points to the first
			first = first->next; //traverses through the list
			delete cursor; //deletes the list
			cursor = first; //set the cursor equal to the first element again.
		}
		if(first == 0)
		{
			cout << "Destructor works "<<endl;
		}
		else
		{
			cout << " Error "<< endl;
		}
	}
	bool isEmpty()
	{
		return(first==0);
	}
	void insert(const T & item)
	{
		if(first==0) //if the list is empty
		{
			first = new Node; //allocate memory
			first->info = item; //the first value of the list is equal to the item
			first->next = NULL; //the next item in the list will be empty since that will be the only value in it.
		}
		else if(item < first->info) //if the item is less than the first value in the list //insert from the back
		{
			nodePtr newnode = new Node; //allocate memory
			newnode->info = item; //the first value will be initialized to the item
			newnode->next = first; //the next item of the new node will be the first node
			first = newnode; // the first will point to the newnode
		}
		else
		{
			nodePtr cursor = first;
			nodePtr newnode = new node;
			newnode->info = item; //the newnode will be set equal to the item
			newnode->next = 0;  //the next value be null
			while(cursor->next != 0) //this will insert in the middle
			{
				if(cursor->info < item && cursor->next->info < item) //if the first and second item of cursor is less than the item
				{
					cursor = cursor->next; //go through the list
				}
				else
				{
					break;
				}
				newnode->next = cursor->next; //set the newnode equal to the cursor first
				cursor->next = newnode; //set the second value equal to the newnode
			}
		}
	}

	void traverse()
	{
		nodePtr cursoring = first; //set the node pointer equal to the first node
		while(cursoring != NULL) //while this does not point to NULL
		{
			cout << cursoring->info << endl; //print out the information
			cursoring = cursoring->next; //then traverse through the list
		}
	}

	void erase(const T & item)
	{
		if(first == 0) //if the list is empty
		{
			cout << "List is empty. "<< endl;
		}
		else if( item == first->info) //if the item is equal to a value in the list
		{
			nodePtr cursor = first; //set the cursor equal to the first node
			first = first->next; //increment the first until the end.
			delete cursor; //delete the cursor
		}
		else
		{
			nodePtr cursors = first; //set the first item equal to the first
			nodePtr Precur; //initialize a second node pointer
			while(cursors->info != item) //while the cursors item is not equal to the item that you are looking for
			{
				Precur = cursors; //set the first value equal to the Precur
				cursor = cursors->next; //go through the list from cursor
			}
			if(cursors != 0) //if the cursor points to null
			{
				Precur->next = cursors->next; //set the next value equal to each other.
				delete cursors; //then delete the cursors
			}
			else{
				cout << "Item is not found. "<< endl;
			}
		}
	}

LinkList(const LinkList<T> & original)
{
	if(original.front == 0) //empty list
	{
		front = 0;
		return;
	}

	nodePtr origPtr = orignal.front;

	nodePtr lastPtr = new node;
	if(lastPtr == 0) //checks if empty
	{
		cout << "No memory"<<endl;
		exit(1);
	}
	lastPtr->data = origPtr->data;
	front = lastPtr; //first value becomes the lastPtr

	while(origPtr->next != 0)
	{
		origPtr = origPtr->next;
		nodePtr temp = new Node;
		if(temp == 0)
		{
			cout << "No memory" << endl;
		}
	}
}

}
