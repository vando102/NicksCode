#include "Hash.h"
#include <string>
#include <iostream>
#include <fstream>

/*Purpose: Calls the functions from class IntegerSet.
Preconditions: Must have a linked list and node class.
Postconditions: Function values are displayed to screen
when called in main. */
int main()
{
	HashTable tables;
	ifstream in;
	string word;
	cout << "Main works" << endl;
	in.open("texts.txt");
	if(in.fail())
	{
		cerr << "File did not open. "<<endl;
		exit(1);
	}
	while(in>>word)
	{
		tables.insert(word);
	}
	tables.showcontents();
	system("pause");
	return 0;
}
