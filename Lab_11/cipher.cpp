#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void encryption(char words[])
{
	char key;
 	cout<< "Enter the XORkey here: "<< endl;
	cin>>key;

	length = strlen(words);

	for(int i = 0; i < length; i++)
	{
		words[i] = words[i] + key;
		cout << words[i];
	}
}
char inputarray()
{
	char * newarray = NULL;
	int number;
	cout << "How many characters will you put into the system? "<<endl;
	cin>>n;
	newarray = new char[number];
	for(int i = 0; i<number; i++)
	{
		cout<< "Enter your phrase here: "<< endl;
		cin>>newarray[i];
	}
	delete [] newarray;
	newarray = NULL;
}
int main()
{
	inputarray();
	encryption
	return 0;
}
