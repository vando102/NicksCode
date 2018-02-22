#include <iostream>
#include <algorithm>

using namespace std;


/*Purpose: Prints the original 2D array
Precondition: Takes in a 2D array with set columns of size 3 and
user input number of rows.
Result: 2D array printed. */
void oldprint(int arrays[][3], int rows)
{
	cout<< "Original 2D array" << endl;
	for(int i = 0; i<rows; i++)
	{
		for(int j = 0; j<3; j++)
		{
			cout<<arrays[i][j]<< " ";
		}
		cout<<endl;
	}
}

/*Purpose: Prints the converted 1D array 
Precondition: Takes in a 1D array with size from converted 2D array.
Result: 1D array printed. */
void newprint(int newarray[], int size)
{
	for(int i =0; i<size; i++)
	{
		cout<< newarray[i] << " ";
	}
	cout<<endl;
}

/*Purpose: Sorts all digits in 1D array in ascending order
by moving a value of the array using positional index comparisons.
Precondition: Takes in 1D array with size of the
product of 2D columns and rows.
Result: All values are sorted in ascending order */
void InsertionSort(int newarray[], int combo)
{
	int temp, holdstart;
	for(int i = 1; i<combo; i++)
	{
		temp = newarray[i]; //temp array to hold the 2nd value of 1D array
		holdstart = i-1;
		while(holdstart >= 0 && newarray[holdstart]>temp)
		//while the previous value is greater than the next value and
		//the index is greater than 0, continue.
		{
			newarray[holdstart+1] = newarray[holdstart]; //shift
			//newarray[holdstart] to the right
			holdstart--; //keep this lower than the temp index.
			newprint(newarray, combo);
			cout<<endl;
		}
		newarray[holdstart+1] = temp; //otherwise, temp is unchanged.
		newprint(newarray, combo);
		cout<<endl;
	}
}

int main()
{
	int rows;
	int index = 0;

	cout<< "Enter number of rows for array: "<<endl;
	cin>>rows;

	int combo = rows * 3;
	int arrays[rows][3];
	int newarray[combo];

	cout<< "Enter elements here: "<<endl;
	for(int i = 0; i<rows; i++)
	{
		for(int j = 0; j<3; j++)
		{
			cin>>arrays[i][j];
		}
	}

	oldprint(arrays, rows);
	cout<<endl;

	for(int k = 0; k<rows; k++)
	{
		for(int m = 0; m<3; m++)
		{
			newarray[index] = arrays[k][m];
			index++;
		}
	}
	newprint(newarray, combo);

	InsertionSort(newarray, combo);

	int n = 0;
	for(int a = 0; a<rows; a++)
	{
		for(int b = 0; b<3; b++)
		{
			arrays[a][b] = newarray[n];
			n++;
		}
	}

	oldprint(arrays, rows);
	return 0;
}


	/* http://www.cprogramto.com/c-program-to-sort-2d-array/
	https://learning.semo.edu/mod/folder/view.php?id=1590791*/
