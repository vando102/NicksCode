#include <iostream>
using namespace std;

class stuff
{
public:
	void stuff1() //this is inline function.
	{
		cout << "This is a test of the parent class. "<<endl;
	}
};


class out : public stuff
{
public:
	void stuff1()
	{
		cout << "Fuck you bitches, 5 min a day will get me far. "<<endl;
	}
};

int main()
{
	out a;
	a.stuff1();
	return 0;
}
