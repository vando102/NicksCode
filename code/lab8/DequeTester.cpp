#include "lab8deque.h"
#include <iostream>
#include <deque>
using namespace std;
int main()
{
	deque<int>numbers;
	
	dequenumber(numbers);
	cout<< "Here the alternated numbers with preset values 0-6: "<<endl;
	cout<< endl;

	showvalues(numbers);
	cout<<endl;

	cout<< "Here are the alternated numbers with 200 in the back: "<<endl;
	changenumber(numbers, 200);
	showvalues(numbers);
	cout<< endl;
	return 0;
}
