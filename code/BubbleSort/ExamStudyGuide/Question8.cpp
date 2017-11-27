#include <iostream>

using namespace std;

int location(double a[], int first, int last)
{
	double item = 0;
	if(a[first] != a[last])
	{
		cout << item <<endl;
		cout<< "Before sum: "<< item << endl;
		item = item + a[first];
		cout<< "After sum: "<< item << endl;
		return location(a, first, last-1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	double arrays[] = {1.0,2.0,3.0,4.0,5.0};
	cout << location(arrays, 0, 5);
	return 0;
}
