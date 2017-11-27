#include "Question4.h"

#include <iostream>
#include <list>
using namespace std;

int main()
{
	char answer;
	int inputs;
	queue<int> numbers;
	//list<int> numbers;
	cout<< "Enter 5 numbers to be entered to list here: "<<endl;
	for(int i = 0; i<5; i++)
	{
		cin>>inputs;
		numbers.enqueue(inputs);
	}
	do {
	cout<< "Would you like to take out a number? "<<endl;
	cin>> answer;
	if(answer == 'Y' || answer == 'y')
	{
	numbers.dequeue();
}
} while(answer == 'Y' || answer == 'y');
	cout<< "The size of the list is "<< numbers.size() <<endl;
	cout<< "The front of the list is "<< numbers.front() <<endl;
	cout<< "The back of the list is "<< numbers.back() <<endl;
	return 0;
}
