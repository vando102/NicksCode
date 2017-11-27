#include <iostream>

using namespace std;

void writeline(char input, int n)
{
	if(n>0)
	{
		cout<<input;
		writeline(input, n-1); //gotta decrement or this will go on forever
	}
}


void writeblock(char input, int n, int w)
{
	if(w>0)
	{
		writeline(input, n);
		cout<<endl;
		writeblock(input, n, w-1);
	}

}
int main()
{
	char out = '*';
	writeline(out, 5);
	cout<<endl;

	char inputs = 'i';
	writeblock(inputs, 5, 3);
	cout<<endl;
	return 0;
}
