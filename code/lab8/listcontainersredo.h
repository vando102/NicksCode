#include <list>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
template<typename listtype>
/*Reads values to a list and reads
value from input to a list*/
void readingvalues(list<listtype> &reading)
{//reads n values from user to be inserted into a list
	listtype value;
	listtype amount;
	cout<< "How many numbers would you like to enter? "<<endl;
	cin>>amount;
	for(int i =0; i< amount; i++)
	{
		cin>>value;//value is pushed into list reading.
		reading.push_back(value);
	}
}

template<typename listtype>
list<listtype> input(vector<listtype>&inputvector)
{
	/*Fills list with vector and vector is put into a list */
	list<listtype> readlist;
	for(int i=0; i< inputvector.size(); i++)
	{
		readlist.push_back(inputvector[i]);
	}
	return readlist;
}

template<typename listtype>
void changevalues(list<listtype>&readlist, listtype first, listtype second)
{
	typename list<listtype>::iterator iteration = readlist.begin();//iterator is set to the beginning of the list
	iteration=find(iteration, readlist.end(), first);//finds the value input by user from beginning to end of the list
	readlist.insert(iteration, second);//insert the new value where the value input by user is at.
	readlist.erase(iteration);//delete the value that got pushed up.
}


//both functions print out values of the list via iterator.
template<typename listtype>
void printvalues(list<listtype>&readlist)
{
	for(typename list<listtype>::iterator iteration = readlist.begin(); iteration != readlist.end(); iteration++)
	{
		cout<< *iteration << " ";
	}
	cout<<endl;
}

template<typename listtype>
void printvalues2(vector<listtype>&readlist)
{
	for(typename vector<listtype>::iterator iteration = readlist.begin(); iteration != readlist.end(); iteration++)
	{
		cout<< *iteration << " ";
	}
	cout<<endl;
}
