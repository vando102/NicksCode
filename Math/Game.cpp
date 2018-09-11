#include "Player.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


void menu()
{
	int choice;
	cout << "What kind of attack you would like to perform? " << endl;
	cout << "(Press 1 for a light attack.)" << endl;
	cout << "(Press 2 for a medium attack.)" << endl;
	cout << "(Press 3 for a heavy attack.)" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "this is a test." << endl;
		break;
	case 2:
		cout << " Y " << endl;
		break;
	case 3:
		cout << " Avcii " << endl;
		break;
	default:
		cout << "This still works. " << endl;
	}
}

int main()
{
	/*char f = 'k';
	int c = f - 9;
	cout << c << endl;*/
	//Just a test of converting char to int, nothing special.
	menu();
	return 0;
}
