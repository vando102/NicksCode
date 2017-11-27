#include <vector>
#include <iostream>
#include "Question1a.h"
using namespace std;

int main()
{
	int rescue;
	int inputnumber;
	vector<int> numbers;
	cout<< "Enter 6 numbers to be inputted here: "<<endl;
	for(int i =0; i<6; i++)
	{
		cin>>inputnumber;
		numbers.push_back(inputnumber);
	}
	cout<< "Enter the number in vector to be searched here: "<<endl;
	cin>> rescue;
	int print = Search(numbers, rescue);
	cout<< rescue << "is in the position "<<  print << endl;

	char findletter;
	char inputletters;
	vector<char> letters;
	cout<< "Enter 6 letters to be inputted here: "<<endl;
	for(int j=0; j<6;j++)
	{
		cin>>inputletters;
		letters.push_back(inputletters);
	}
	cout<< "Enter the letter to be searched here: "<<endl;
	cin>> findletter;
	int print2 = Search(letters, findletter);
	cout<< findletter << "is in the position "<< print2 << endl;

	return 0;
}
