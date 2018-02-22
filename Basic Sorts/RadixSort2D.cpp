#include <iostream>
#include <algorithm>
#include <cstdlib>

using std::cout;
using std::cin;
using std::qsort;

/*Purpose: Prints the original 2D array
Precondition: Takes in a 2D array with set columns of size 2 and
user input number of rows.
Result: 2D array printed. */

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

/*Purpose: Prints the converted 1D array
Precondition: Takes in a 1D array with size from converted 2D array.
Result: 1D array printed. */
void print(int holderarray[], int size)
{
	for(int j = 0; j<size; j++)
	{
		cout<< holderarray[j] << " ";
	}
	cout<< '\n';
}

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

/*Purpose: Finds max value of 1D array
Precondition: Takes in a 1D array with size from 2D array
by product of rows and columns.
Result: Max returned */
int returnmax(int holderarray[], int size)
{
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

/*Purpose: Traversal of all digits for sorting
Precondition: TTakes in 1D array with size of the
product of 2D columns and rows, and an integer
to traverse through the digits
Result: Each sig fig is traversed in all values */
void digitSort(int holderarray[], int size, int sigfig)
{
	int outputarray[size];
	int temp[10] = {0};
	int i;
	for(i = 0; i<size; i++)
	{
		temp[(holderarray[i]/sigfig) % 10]++;
	}
	for(i = 1; i < 10; i++)
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

/*Purpose: Sorts all digits in 1D array in ascending order
Precondition: Takes in 1D array with size of the
product of 2D columns and rows along with the function
to traverse through all digits.
Result: All values are sorted in ascending order */
void RadixSort(int holderarray[], int size)
{
	int number = returnmax(holderarray, size);
	cout<< "Max is "<< number << '\n';
	cout<< "Sorting digits "<< '\n';
	for(int sigfig = 1; number/sigfig > 0; sigfig = sigfig * 10) //does sort
	//for every digit by incrementing by 10 until all digits are done.
	{
		digitSort(holderarray, size , sigfig);
		cout<< '\n';
		print(holderarray, size);
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
	int index = 0;

	input(arrays, num_rows);

	cout<< "Before Sort "<< '\n';
	print(arrays, num_rows);

	cout<< "Converting 2D array to 1D array: "<<'\n';
	for(int i = 0; i<num_rows; i++)
	{
		for(int j = 0; j<2; j++)
		{
			holderarray[index] = arrays[i][j];
			index++;
		}
	}

	cout<< "Contents of new 1D array" << '\n';
	cout<< '\n';
	print(holderarray, size);

	RadixSort(holderarray, size);

	int finalindex = 0;
	for(int k = 0; k<num_rows; k++)
	{
		for(int l = 0; l<2;l++)
		{
			arrays[k][l] = holderarray[finalindex];
			finalindex++;
		}
	}

	cout<< "After Sort "<< '\n';
	print(arrays, num_rows);
	return 0;
}

/*https://www.geeksforgeeks.org/radix-sort/ */
