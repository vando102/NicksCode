#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::qsort;

void swap(int *first, int *second)
{
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
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

void print(int arrays[][2], int num_rows)
{
	for(int i = 0; i<num_rows; i++)
	{
		for(int j= 0; j<2;j++)
		{
			cout<<arrays[i][j]<< " ";
		}
		cout<< '\n';
	}
}

void quickSort(int arrays[][2], int low, int high, int num_rows)
{
	int lowpos = low;
	int highpos = high;
	int * pointer = (int*) arrays;
	int pivot = *(pointer + ((lowpos+highpos)/2));
	do {
		while(*(pointer + lowpos) < pivot)
		{
			lowpos++;
		}
		while(*(pointer+ highpos) > pivot)
		{
			highpos--;
		}
		if(lowpos <= highpos)
		{
			swap((pointer + lowpos), pointer + highpos);
			lowpos++;
			highpos--;
		}
	} while(lowpos <= highpos);
	if(low < highpos)
	{
		quickSort(arrays, low, highpos, num_rows);
		print(arrays, num_rows);
		cout<< '\n';
	}
	if (lowpos < high)
	{
		quickSort(arrays, lowpos, high, num_rows);
		print(arrays, num_rows);
		cout<< '\n';
	}
}

int main()
{
	int num_rows;
	cout << "Enter number of rows for sort here: "<< '\n';
	cin>>num_rows;

	int arrays[num_rows][2];
	input(arrays, num_rows);

	cout<< "Before Sort "<< '\n';
	print(arrays, num_rows);
	cout<< '\n';

	quickSort(arrays, 0, (num_rows * 2) -1, num_rows);

	cout<< "After Sort "<< '\n';
	print(arrays, num_rows);
	return 0;
}
