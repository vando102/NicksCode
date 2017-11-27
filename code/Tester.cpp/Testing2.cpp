#include <iostream>

using namespace std;

void displayOctal(int n)
{
	if(n>0)
	{
		if((n/8)>0)
			displayOctal(n/8);
		cout<< n % 8;
	}
}

int main()
{
	displayOctal(100);
	return 0;
}
