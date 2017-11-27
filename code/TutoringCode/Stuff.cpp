#include <iostream>

using namespace std;

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}

	factorial(n);
}

int main()
{
	int j = 4;
	int a = factorial(j);

	cout << a << endl;

	return 0;
}
