#include "Integerset.h"
#include <iostream>
using namespace std;

int main()
{
	IntegerSet c;
	cout << "Testing default constructor " << endl;
	c.display();


	IntegerSet a(5);

	cout << "The size is " << a.size() << endl;

	cout << "The list is  " << endl;
	a.display();

	cout << endl;

	IntegerSet b(4);

	cout << "The size is " << b.size() << endl;

	cout << "The list is " << endl;
	b.display();

	cout << endl;

	IntegerSet intersections2 = a.intersection(b);
	intersections2.display();

	cout << endl;

	cout << "Testing union " << endl;
	IntegerSet uniontest2 = a.unions(b);
	uniontest2.display();

	cout << endl;

	cout << "Adding values 5 and 9 in first linked list (Note: 5 should not be added if it is already in your list)  " << endl;
	a.add(5);
	a.add(9);

	cout << endl;

	cout << "Adding elements in two " << endl;
	b.add(8);
	b.add(5);

	cout << endl;

	cout << "New set with intersections " << endl;
	IntegerSet intersections = a.intersection(b);
	intersections.display();

	cout << endl;

	cout << "Testing union " << endl;
	IntegerSet uniontest = a.unions(b);
	uniontest.display();

	cout << endl;

	cout << "New values in first set are " << endl;
	a.display();

	cout << endl;

	cout << "New values in second set are " << endl;
	b.display();

	cout << endl;

	cout << "Deleting values 3 and 1 from the first linklist " << endl;
	a.remove(3);
	a.remove(1);

	cout << endl;

	cout << "New values in first set are " << endl;
	a.display();

	cout << endl;

	cout << "Deleting values 8 and 5 from second linklist " << endl;
	b.remove(8);
	b.remove(5);

	cout << endl;

	cout << "New values in second set are: " << endl;
	b.display();

	cout << endl;

	cout << "Checking if subset is true: " << endl;
	if (a.isSubset(b))
	{
		cout << "They are subset";
	}
	else
	{
		cout << "They are not subset " << endl;
	}

	cout << endl;

	cout << "Checking if they are empty " << endl;
	if (a.isEmpty())
	{
		cout << "First list is empty. " << endl;
	}
	else
	{
		cout << "First list is not empty. " << endl;
	}
	cout << endl;

	if (b.isEmpty())
	{
		cout << "Second list is empty. " << endl;
	}
	else
	{
		cout << "Second list is not empty. " << endl;
	}

	cout << "The difference of set is " << endl;
	IntegerSet testing = a.difference(b);
	testing.display();
	return 0;
}
