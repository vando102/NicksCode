#include <iostream>
#include <vector>
#include <deque>
#include <list>

using namespace std;
template<typename C>
void ascendingorder(vector<C>&numbers);

template<typename C>
void descendingorder(vector<C>&numbers);

template<typename C>
void printorders(vector<C>&numbers);


template<typename C>
void input(vector<C>&numbers);
int main()
{
	vector<int> out;
	input(out);
	ascendingorder(out);
	printorders(out);
	descendingorder(out);
	printorders(out);

	vector<string> out2;
	input(out2);
	ascendingorder(out2);
	printorders(out2);
	descendingorder(out2);
	printorders(out2);

	vector<char> out3;
	input(out3);
	ascendingorder(out3);
	printorders(out3);
	descendingorder(out3);
	printorders(out3);

	return 0;
}
template<typename C>
void input(vector<C>&numbers)
{
	C red;
	int amount;
	cout<< "Enter amount of numbers for comparison here: "<<endl;
	cin>>amount;
	for(int i =0; i<amount; i++)
	{
		cin>>red;
		numbers.push_back(red);
	}
}

template<typename C>
void descendingorder(vector<C>&numbers)
{
	C temp;
	int numberlength = numbers.size();
	for(int i = 0; i<numberlength; i++)
	{
		for(int j=0; j<(numberlength-1); j++)
		{
			if(numbers[j]<numbers[j+1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1]= temp;
			}
		}
	}
}

template<typename C>
void ascendingorder(vector<C>&numbers)
{
	C temp;
	int numberlength = numbers.size();
	for(int i = 0; i<numberlength; i++)
	{
		for(int j = 1; j<(numberlength); j++)
		{
			if(numbers[j]<numbers[j-1])
			{
			temp = numbers[j];
			numbers[j]= numbers[j-1];
			numbers[j-1]= temp;
		}
		}
	}
}

template<typename C>
void printorders(vector<C>&numbers)
{
	for(int i=0; i<numbers.size(); i++)
	{
		cout<< numbers[i] << " ";
	}
	cout<<endl;
}
