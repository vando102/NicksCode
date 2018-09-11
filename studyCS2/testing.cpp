

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a = "fuck";
	cout << a << endl;
	string *p;
	p = &a;
	*p = "you";
	cout << a << endl;
	cout << *p << endl;
	cout << &a << endl;
	cout << &p << endl;
	int b = 90;
	int *c;
	c = &b;
	*c = 70; //changes value of memory location
	cout << *c << endl;
	cout << b << endl;
	return 0;
}
