#include "listcontainersredo.h"
#include <vector>
using namespace std;

int main()
{
	int one, two;
	list<int> numbers;
	readingvalues(numbers);

	vector<int> inputs;
	int ranger;
	cout<< "Enter 6 numbers for vector here: "<<endl;
	for(int i=0; i<6; i++)
	{
		cin>>ranger;
		inputs.push_back(ranger);
	}
	input(inputs);
	printvalues2(inputs);

	printvalues(numbers);
	cout<< "Function below will replace the numbers with new ones "<<endl;
	cout<< "Enter two number here to replace given values "<<endl;
	cin>> one >> two;
	changevalues(numbers, one, two);
	printvalues(numbers);
	return 0;
}
