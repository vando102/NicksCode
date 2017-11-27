/*
Authors: Jesse Raines, Nicholas Hoang, Jonathan Renn
Credits: Nicholas Hoang/Jesse Raines: Typed the skeleton of the implementation file and typed explanations of how each function works.

Jesse Raines: Debugged and helped with troubleshooting the logical errors in the program along with rewording the comments for
readability.

Jonathan Renn: Typed the comments, debugged and helped with troubleshooting the logical errors.

Assignment: Project 3
CS-265-01 SEMO

*/


#ifndef Queue_H
#define Queue_H
#include "Inventory.h"
#include <iostream>
using namespace std;
typedef Inventory QueueElement;
const int CAPACITY = 20;
class Queues
{
private:
	//members that allow us to manipulate the queue
	int m_front, m_back;
	QueueElement m_Queue[CAPACITY];
public:
	Queues();
	/*purpose: creates an empty queue 
	
	pre-condition: NONE!!!!!!
	
	post-condition: creates an empty queue*/

	bool empty() const;
	/*purpose: check if a queue is empty
	
	pre-condition: NONE
	
	post-condition: returns a boolean*/


	void enqueue(QueueElement &value);
	/*purpose: to push inventory objects to the back of the queue
	
	pre-condition: takes in an inventory object
	
	post-condition: queue will now hold an inventory object*/

	QueueElement front();
	/*purpose: to access the front element of the queue
	
	pre-condition: NONE
	
	post-condition: returns the inventory object that is located at the front*/

	QueueElement back();
	/*purpose: to access the back element of the queue

	pre-condition: NONE

	post-condition: returns the inventory object that is located at the back*/

	void dequeue();
	/*purpose: to remove an inventory object (assuming there is one) from the front of the queue
	
	pre-condition: NONE
	
	post-condition: queue will hold one less inventory object (assuming there are any inventory objects inside of it)*/

	//overloaded output operator
	friend ostream & operator << (ostream &out, Queues & c);
};
#endif