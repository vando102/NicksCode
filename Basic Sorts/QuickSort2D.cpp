#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::qsort;


/*Purpose: Inputs values into the original 2D array
Precondition: Takes in a 2D array with set columns of size 2 and
user input number of rows.
Result: 2D array has user input values */
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

/*Purpose: Prints the original 2D array
Precondition: Takes in a 2D array with set columns of size 2 and
user input number of rows.
Result: 2D array printed. */
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

/*Purpose: Prints the 1D array
Precondition: Takes in a 1D array with set columns of size from
product of 2D rows and columns
Result: 1D array printed. */

void print(int newarray[], int size)
{
	for(int i = 0; i<size; i++)
	{
		cout<< newarray[i] << " ";
	}
	cout<< '\n';
}
/*Purpose: Sorts all digits in 2D array in ascending order
by switching the first index value with the one next to it.

Precondition: Takes in 2D array with a user defined row size
and constant column size of 2, an integer to hold the first
index, an integer to hold the last index, and user defined
number of rows and pointer to traverse through 2D array.

Result: All values are sorted in ascending order */
void quickSort(int newarray[], int low, int high)
{
	int lowpos = low;
	int highpos = high;
	int pivot = newarray[((low+high)/2)]; // value for the median.
	while(lowpos <= highpos)
	{
		while(newarray[lowpos] < pivot) //move starting with first value
		//to the middle
		{
			lowpos++;
		}
		while( newarray[highpos] > pivot) //moves starting the end value to the first value
		//after middle
		{
			highpos--;
		}
		if(lowpos <= highpos) // if the first value is less than the end value
		//switch, then increment first index,
		{
			std::swap(newarray[lowpos], newarray[highpos]);
			print(newarray, high);
			lowpos++;
			highpos--;
		}
	}
	if(low < highpos) //if the first index is less than the value holding end index,
	//recursively perform the sort.
	{
		quickSort(newarray, low, highpos);
		print(newarray, high);
		cout<< '\n';
	}
	if (lowpos < high)//if the value holding first index is less than the end index,
	//recursively perform the sort.
	{
		quickSort(newarray, lowpos, high);
		print(newarray, high);
		cout<< '\n';
	}
}

int main()
{
	int num_rows;
	cout << "Enter number of rows for sort here: "<< '\n';
	cin>>num_rows;

	int arrays[num_rows][2];
	int size = num_rows * 2;
	int newarray[size];

	input(arrays, num_rows);

	cout<< "Before Sort "<< '\n';
	print(arrays, num_rows);
	cout<< '\n';

	int index = 0;
	cout<< "Converting 2D array to 1D array" << '\n';
	for(int i = 0; i<num_rows; i++)
	{
		for(int j = 0; j<2; j++)
		{
			newarray[index] = arrays[i][j];
			index++;
		}
	}
	print(newarray, size);
	cout<< '\n';
	quickSort(newarray, 0, size);

	int index2 = 0;
	cout<< "Converting 1D array to 2D array "<< '\n';
	for(int k = 0; k<num_rows; k++)
	{
		for(int l = 0; l<2; l++)
		{
			arrays[k][l] = newarray[index2];
			index2++;
		}
	}
	cout<< "After Sort "<< '\n';
	print(arrays, num_rows);
	return 0;
}
