#ifndef Integerset_H
#define Integerset_H
/*Authors: Nicholas Hoang, Jonathan Renn, Jesse Raines
Credits: Nicholas Hoang- general implementation
		 Jesse Raines- Numerous revisions on logic and defined the comment structure
		 Jonathan Renn- Comments, documentation/troubleshooting, and formatting the spacing of code

Date: 12/7/2017
Class and Project: CS265 Project 5 */
#include <iostream>
using namespace std;
/*Purpose: Hold the node pointer and return the functions in the class
Preconditions: Must have a integer size to hold the size of the linked list and
an integer item to see if the number is in the linked list and 2 linked lists
for comparision.
Postconditions: Class is created and can be called. */
class IntegerSet
{
private:
	class Node
	{
	public:
		int info;
		Node* next;
	};
	typedef Node* nodePtr;
public:
	bool isEmpty();
	int size();
	IntegerSet();
	IntegerSet(int size);
	bool isMember(int item);
	bool add(int item);
	bool remove(int item);
	bool isSubset(IntegerSet set2);
	IntegerSet intersection(IntegerSet set2);
	IntegerSet unions(IntegerSet set2);
	IntegerSet difference(IntegerSet set2);
	void display();
private:
	nodePtr first;
	int cardinality;
};
#endif

/*Purpose: Empty constructor to give values to node pointer and size if none
is given by user.
Preconditions: Must have node pointer and size variable.
Postconditions: Node pointer points to NULL and size is equal to 0 */
IntegerSet::IntegerSet()
{
	first = NULL;
	cardinality = 0;
}

/*Purpose: Allows user input of values in linked list.
Preconditions: Must have a variable to hold size and default constructor so
when list is empty a value is given.
Postconditions: User input values are in the linked list. */
IntegerSet::IntegerSet(int size)
{
	int input;
	first = NULL;
	cardinality = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter your: " << i + 1 << " value." << endl;
		cin >> input;
		this->add(input);//adds the values to the linked list
	}
}

/*Purpose: Checks if linked list is empty.
Preconditions: Must have 2 linked lists for comparision.
Postconditions: Return true is empty and false if not empty. */
bool IntegerSet::isEmpty()
{
	return(cardinality == 0);
}

/*Purpose: To check the size of the linked list.
Preconditions: Must have a :linked list and size variable to hold size.
Postconditions: Size of linked list is returned.  */
int IntegerSet::size()
{
	return cardinality;
}

/*Purpose: Checks if a value is in the original linked list by comparing the values of
2 linked lists individually to the end of the linked lists.
Preconditions: Must have 2 linked lists and a number for comparison
Postconditions: Returns true if the number is part of the linked list. Otherwise, false. */
bool IntegerSet::isMember(int item)
{
	//cout << "In isMember" << endl;

	nodePtr members = first;
	while (members != NULL)
	{
		//cout << "Not registering as Null" << endl;
		if (members->info == item)
		{
			return true;
		}
		members = members->next;
	}
	//cout << "Returning false" << endl;
	return false;
}

/*Purpose: To display the value in the linked list.
Preconditions: Must have a linked list with values in it.
Postconditions: The values of linked list are displayed to screen */
void IntegerSet::display()
{
	nodePtr out = first; //node pointer to point to the first node
	while (out != NULL) //if out is not equal to Null, print the numbers of out and increment each time.
	{
		cout << out->info << endl;
		out = out->next;
	}
}

/*Purpose: Adds an item to the linked list only it is not already a print already
a part of the linked list.
Preconditions: Must have a linked list, a number to be inserted in it, and a size
to increment so that size will be counted.
Postconditions: The number is added to linked list if true. Otherwise, the number
will not be added. */
bool IntegerSet::add(int item)
{
	//cout << "In add" << endl;
	if (isMember(item))
	{
		//cout << "It's already a member" << endl;
		return false;
	}

	else
	{
		//cout << "Is member called fine" << endl;
		nodePtr nonmember = new Node; //allocate memory to make a new node...
		nonmember->info = item; //set the nonmember value to the value of the item
		nonmember->next = NULL; //makes the next value null so that is only value.
		if (first == NULL)
		{
			//cout << "Adding first number" << endl;
			first = nonmember;
			cardinality++;
		}
		else
		{
			//cout << "Pushing to front" << endl;
			nodePtr temp = first;
			first = nonmember;
			nonmember->next = temp;
			cardinality++;
		}
		return true;
	}
}

/*Purpose: Removes the  values in a linked list.
Preconditions: Must have a linked list and an item to be removed only if the
item is already a part of the linked list. 2 Node pointers set equal to the first node so
that we can delete one without losing the location of the first node while traversing the
linked lists.
Postconditions: If the list is empty, nothing happens. If there are only two values, the
back item will be deleted. Otherwise, the item is not found in the list. */
bool IntegerSet::remove(int item)
{
	if (isMember(item))
	{
		if (first == 0)
		{
			cout << "This is an empty list. " << endl;
		}
		if (first->next == 0)
		{
			if (first->info == item)
			{
				delete first;
			}
			else
			{
				cout << "The item is not found. " << endl;
			}
		}

		nodePtr cursor = first;
		nodePtr preCur = first;
		while (cursor->next != 0 && cursor->info != item)
		{
			preCur = cursor;
			cursor = cursor->next;
		}
		if (cursor->info == item)
		{
			if (cursor == first)
			{
				first = cursor->next;
				delete cursor;
			}
			else {
				preCur->next = cursor->next;
				delete cursor;
			}
		}
		else {
			cout << "The item is not found. " << endl;
		}
		return false;
	}
}

/*Purpose: Checks if all the numbers of one linked list are already a part of another linked list.
Preconditions: Must have 2 linked lists and a node pointer to traverse through the list.
Postconditions: Returns true if all numbers in one list are a part of another linked list. Otherwise, return false. */
bool IntegerSet::isSubset(IntegerSet set2)
{
	nodePtr cursor = first;

	while (cursor != NULL)
	{
		if (!set2.isMember(cursor->info))
		{
			return false;
		}
		cursor = cursor->next;
	}

	return true;
}

/*Purpose: Compares the values of 2 linked lists and returns the value
that they both have in common.
Preconditions: Takes in an empty linked list, 2 linked lists with
values assigned to it, and a node pointer to traverse through the list.
Postconditions: Returns a linked list that has the common values between
the two linked lists.*/
IntegerSet IntegerSet::intersection(IntegerSet set2)
{
	IntegerSet current; //initialize empty IntegerSet
	nodePtr cursor = first;
	while (cursor != NULL)
	{
		if (set2.isMember(cursor->info))// compare if numbers are equal
		{
			current.add(cursor->info); //put it into the empty IntegerSet
		}
		cursor = cursor->next;
	}
	return current; //return the IntegerSet
}

/*Purpose: Concatenates the two linked lists together without any
repetition of values.
Preconditions: Must have 2 linked lists, an empty linked list, and a Node pointer.
Postconditions: Returns a linked list using the values from the 2 linked lists
to combine them. */
IntegerSet IntegerSet::unions(IntegerSet set2)
{
	IntegerSet current;
	Node* cursor = first;
	while (cursor != NULL)
	{
		if ((isMember(cursor->info)))
		{
			current.add(cursor->info);
		}

		cursor = cursor->next;
	}

	while (first->next != NULL)
	{
		if (!isMember(set2.first->info))
		{
			current.add(set2.first->info);
			first = first->next;
		}
		//cursor = cursor->next;
	}

	return current;
}

/*Purpose: Takes the difference of each value in 2 linked lists and puts
the values into an empty linked list.
Preconditions: Must have 2 linked lists with values, an empty linked list, and a Node pointer.
Postconditions: Returns a new linked list with the difference from each value in both linked
lists when the Node pointer traverses through each linked list.*/
IntegerSet IntegerSet::difference(IntegerSet set2)
{
	IntegerSet current;
	Node* cursor = first;
	while (cursor != NULL)
	{
		current = isMember(cursor->info) - set2.first->info;
		cursor = cursor->next;
	}
	return current;
}
