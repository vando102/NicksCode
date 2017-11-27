#include "Question1b.h"

int main()
{
	int number;
	vector<int> digits;
	cout<< "Enter 6 numbers here: "<<endl;
	for(int i = 0; i<6;i++)
	{
		cin>>number;
		digits.push_back(number);
	}
	int output = Search(digits, 2);
	cout << 2 << "is at position"<< output << endl;

	char alphabet;
	vector<char> a;
	cout<< "Enter 6 letter here: "<<endl;
	for(int j = 0; j<6;j++)
	{
		cin>>alphabet;
		a.push_back(alphabet);
	}
	int output2 = Search(a, 'a');
	cout<< 'a' << "is a position "<< output2 <<endl;
	return 0;
}
