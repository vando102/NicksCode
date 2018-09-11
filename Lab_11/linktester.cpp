
#include "Linkedlist.h"
#include <iostream>
int main()
{
	Linkedlist<int> tester;
	//Linkedlist<int> tester2;
	//cout << "Test of default constructor" << tester << endl;

	//cout<< "Test of copy constructor " << Linkedlist(tester2) << endl;
	tester.push_back(100);
	tester.push_back(200);
	tester.push_back(300);
	tester.Print()

	cout << "Test of pop function";
	tester.pop_back();
	tester.Print()

	cout << "Test of pop front";
	tester.pop_front();
	tester.Print()

	cout << "Testing print of second element" << endl;
	tester.PrintSecond()

	cout << "The front element is " << tester.Front() << endl;
	cout << "The back element is " << endl;
	tester.Back();

	return 0;
}
