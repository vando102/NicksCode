#include <iostream>
#include <algorithm>
#include <cstdlib>

using std::cout;
using std::cin;
using std::qsort;

void print(int arrays[][2], int num_rows)
{
	cout<< "Printing the 2D array " << '\n';
	for(int i = 0; i<num_rows; i++)
	{
		for(int j= 0; j<2;j++)
		{
			cout<<arrays[i][j]<< " ";
		}
		cout<< '\n';
	}
}

void print(int holderarray[], int size)
{
	cout<< "Printing converted 1D array. "<< '\n';
	for(int j = 0; j<size; j++)
	{
		cout<< holderarray[j] << " ";
	}
}

void input(int arrays[][2], int num_rows)
{
	cout<< "Enter contents of array here: "<< '\n';
	for(int i = 0; i<num_rows; i++)
	{
		for(int j= 0; j<2;j++)
		{
			cin>>arrays[i][j];
		}
	}
}

int returnmax(int holderarray[], int size)
{
	cout<< "Performing Radix Sort "<< '\n';
	int max = holderarray[0];
	for(int i = 1; i < size; i++)
	{
		if(holderarray[i] > max)
		{
			max = holderarray[i];
		}
	}
	return max;
}

void digitSort(int holderarray[], int size, int sigfig)
{
	int outputarray[size];
	int temp[10] = {0};
	int i;
	for(i = 0; i<size; i++)
	{
		temp[(holderarray[i]/sigfig) % 10]++;
	}
	for(i = 1; i < size; i++)
	{
		temp[i] = temp[i] + temp[i -1];
	}
	for(i = size - 1; i >= 0; i--)
	{
		outputarray[temp[(holderarray[i]/sigfig) % 10] - 1]= holderarray[i];
		temp[ (holderarray[i]/sigfig) % 10]--;
	}

	for(i = 0; i<size; i++)
	{
		holderarray[i] = outputarray[i];
	}
}

void RadixSort(int holderarray[], int size)
{
	int number = returnmax(holderarray, size);

	for(int sigfig = 1; number/sigfig > 0; sigfig = sigfig * 10)
	{
		digitSort(holderarray, size , sigfig);
	}
}
int main()
{
	int num_rows;
	cout << "Enter number of rows for sort here: "<< '\n';
	cin>>num_rows;
	int arrays[num_rows][2];
	int size = num_rows * 2;
	int holderarray[size];

	input(arrays, num_rows);

	cout<< "Before Sort "<< '\n';
	print(arrays, num_rows);

	cout<< "Converting 2D array to 1D array: "<<'\n';
	for(int i = 0; i<num_rows; i++)
	{
		for(int j = 0; j<2; j++)
		{
			holderarray[size] = arrays[i][j];
		}
	}
	cout<< "Contents of new 1D array" << '\n';
	print(holderarray, size);

	RadixSort(holderarray, size);

	cout<< "After Sort "<< '\n';
	print(arrays, num_rows);
	return 0;
}

/*https://www.geeksforgeeks.org/radix-sort/ */
