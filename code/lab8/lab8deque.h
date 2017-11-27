#include <deque>
#include <iostream>
rerew
using namespace std;

void dequenumber(deque<int> & numbers)
{
	for(int i = 1; i<=6;i++)//goes from 1-6. If divisible by 2, push number to the back. If else, push it to the front.
	{
		if(i%2==0)
		{
			numbers.push_back(i);
		}
		else
		{
			numbers.push_front(i);
		}
	}
}

template <typename D>
void showvalues(deque<D> & numbers)
{//prints out the contents of the deque.
	cout << "Here are the numbers in the deque: " << endl;
	for(typename deque<D>::iterator iteration= numbers.begin(); iteration != numbers.end(); iteration++)
	{
		cout<< *iteration << endl;
	}
}

template <typename D>
void changenumber(deque<D> & numbers, D changenumbers)
{
	if(numbers.empty())//check if the deque is empty/
	{
		cout<< "It is empty. "<<endl;
	}
	else
	{
	typename deque<D>::iterator iteration;/* declare the iterator to be set to the last element here*/
	iteration = numbers.end()-1;
	*iteration = changenumbers;/*The last element will now be equal to the desired number.*/
}
}
