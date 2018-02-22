#include <iostream>
#include <algorithm>
#include <string>

void selectionSort(int a[][3], int num_rows);
void print(int a[][3], int num_rows);
void input(int a[][3], int num_rows);

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	int num_rows;
	cout<< "Enter the number of rows to be read here: "<< endl;
	cin>>num_rows;

	int a[num_rows][3];

	input(a, num_rows);
	cout<< "Before sorting: "<< endl;
	print(a, num_rows);
	cout<< "-------------------------------"<<endl;
	cout<<endl;
	selectionSort(a,num_rows);
	cout<< "After sorting: "<< endl;
	print(a, num_rows);
	return 0;
}

/*Purpose: Prints the original 2D array
Precondition: Takes in a 2D array with set columns of size 2 and
user input number of rows.
Result: 2D array printed. */

void print(int a[][3], int num_rows)
{
	for(int i=0; i<num_rows;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

/*Purpose: Inputs values into the original 2D array.
Precondition: Takes in a 2D array with set columns of size 2 and
user input number of rows.
Result: 2D array has user input values */

void input(int a[][3], int num_rows)
{
	for(int i=0; i<num_rows;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<< " Enter a number here: "<<endl;
			cin>>a[i][j];
		}
	}
}

/*Purpose: Sorts all digits in 2D array in ascending order
by switching the smallest value with the largest value in array
Precondition: Takes in 2D array with a user defined row size
and constant column size of 3.
Result: All values are sorted in ascending order */
void selectionSort(int a[][3], int num_rows)
{
	int rowmax, colmax;
	for(int i = 0; i<num_rows; i++)
	{
		for(int j = 0; j<3;j++)
		{
			rowmax = i;
			colmax = j;
			int value = a[rowmax][colmax];
			for(int k = (j+1); k < 3; k++)
			{
				if(a[i][k] < value)
				{
					rowmax = i;
					colmax = k;
					value = a[i][k];
				}
				print(a, num_rows);
				cout<<endl;
			}
			for(int l = (i+1); l < num_rows; l++)
			{
				for(int newcols = 0; newcols < 3; newcols++)
				{
					if(a[l][newcols] < value)
					{
						rowmax = l;
						colmax = newcols;
						value = a[l][newcols];
					}
					print(a, num_rows);
					cout<<endl;
				}
			}
			a[rowmax][colmax] = a[i][j]; //
			a[i][j] = value;
		}
	}
}

/* https://stackoverflow.com/questions/44526234/sorting-2d-array-using-selection-sort*/
