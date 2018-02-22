#include <iostream>
#include <algorithm>
#include <cstdlib>

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

/*Purpose: Sorts all digits in 2D array in ascending order
by switching the first index value with the one next to it.
Precondition: Takes in 2D array with a user defined row size
and constant column size of 2.
Result: All values are sorted in ascending order */
void BubbleSort(int arrays[][2], int num_rows)
{
	int number = 1;
	bool flag = false;
	while(!flag) //while true, keep going
	{
		flag = true;
		for(int i = 0; i<num_rows-1; i++)
		{
			for(int j=1; j<2; j++)
			{
				if(arrays[i][j-1]>arrays[i][j])
				{
					cout<< "Step number "<< number << '\n';

					/*Sorts the rows by switching values
					column by column */
					int temp = arrays[i][j-1]; /
					arrays[i][j-1]= arrays[i][j];
					arrays[i][j] = temp;

					print(arrays, num_rows);
					number++;
					flag = false;
				}
				if(arrays[i][j]>arrays[i+1][0])
				{
					cout<< "Step number "<< number << '\n';

					/*Sorts the columns by switching the last
					value of the first row with first value
					of the next row*/
					int temp = arrays[i][j];
					arrays[i][j]= arrays[i+1][0];
					arrays[i+1][0] = temp;

					print(arrays, num_rows);
					number++;

					flag = false;
				}
			}
		}
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

	BubbleSort(arrays, num_rows);

	cout<< "After Sort "<< '\n';
	print(arrays, num_rows);
	return 0;
}

/*https://stackoverflow.com/questions/26681781/c-programming-sorting-rows-in-a-2d-array*/
