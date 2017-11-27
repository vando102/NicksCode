#include "Queue.h"
#include "Inventory.h"
#include<iostream>
using namespace std;

void ShowCommands();

int main()
{
	int item;                // item to add to the queue
	char command;           // user command (selected from menu)
	Queues q;               // The QUEUE
	Queues temp;
	Inventory holders;
	cout << q << endl;
	ShowCommands();
	do
	{
		cout << "Command? ";
		cin >> command;
		if (isupper(command)) command = tolower(command);

		switch (command)
		{
		case 'a':
			//this case tests the inventory class setter functions
			cout << "Enter the serial number here: " << endl;
			cin >> item;
			holders.setserial(item);

			cout << "Enter the date of manufacture here: " << endl;
			cin >> item;
			holders.setdate(item);

			cout << "Enter the lot number here: " << endl;
			cin >> item;
			holders.setlot(item);

			q.enqueue(holders);
		
			break;
		case 'd':
			//tests both the queue and inventory overloaded output operators
			//the output operators use the inventory getter functions so by proxy this tests those too!
			temp = q;
			cout << "--> Queue contents:\n" << temp << endl;
			break;
		case 'e':
			//tests the queue' empty() function
			cout << "--> Queue " << (q.empty() ? "is" : "is not")
				<< " empty\n";
			break;
		case 'f':
			//tests the queue's front() function
			cout << "--> " << q.front() << " is at the front\n";
		case 'h':
			ShowCommands();
			break;
		case 'r':
			//tests the queue's dequeue() function 
			cout << "Would you like to take a part of inventory? y/n" << endl;
			cin >> command;
			if (command == 'y' || command == 'Y')
			{
				q.dequeue();
				cout << "--> Front element removed\n";
				temp = q;
				cout << "The inventory contents are " << temp << endl;
			}
			else
			{
				cout << "Nothing will be removed. " << endl;
			}
			break;
		case 'b':
			//tests the queue's back() function
			if (!q.empty())
			{
				cout << "--> " << q.back() << " is at the back\n";
			}
			else
			{
				cout << "-->  There is no back\n";
			}
			break;
		case 'q':
			temp = q;
			cout << "Final contents of inventory are " << temp << endl;
			cout << "--> End of test\n";
			break;
		default:
			cout << "*** Illegal command: " << command << endl;
		}
	} while (command != 'q');
}

void ShowCommands()
{
	cout << "Use the following commands to test the Queue class:\n"
		<< "a --- add an element to the queue\n"
		<< "d --- display contents of queue\n"
		<< "e --- test whether a queue is empty\n"
		<< "f --- retrieve the item at the front of the queue\n"
		<< "h --- help -- print this list of commands\n"
		<< "r --- remove item from front of the queue\n"
		<< "b --- retrieve the item at the back of the queue\n"
		<< "q --- quit testing\n";
}
