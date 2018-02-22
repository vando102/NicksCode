#include <iostream>
#include <algorithm>

using namespace std;
/*Purpose: Prints the original 2D array
Precondition: Takes in a 2D array with set columns of size 3 and
user input number of rows.
Result: 2D array printed. */
void beforeprint(int arrays[][3], int rows)
{
	cout<< "The 2D array" << endl;
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
void afterprint(int newarray[], int start, int end)
{
	for(int i =start; i<end; i++)
	{
		cout<< newarray[i] << " ";
	}
	cout<<endl;
}

void merging(int newarray[], int start, int middle, int end, int combo)
{
	int temp[combo];
	int first = start;
	int lastmid = middle;
	int midfirst = middle + 1;
	int midend = end;
	int index = first;
	while((first <= lastmid) && (midfirst <= midend))
	{
		if(newarray[first] <= newarray[midfirst])
		{
			temp[index] = newarray[first];
			first++;
		}
		else
		{
			temp[index] = newarray[midfirst];
			midfirst++;
		}
		index++;
	}
	while(first <= lastmid)
	{
		temp[index] = newarray[first];
		first++;
		index++;
	}
	while(midfirst <= midend)
	{
		temp[index] = newarray[midfirst];
		midfirst++;
		index++;
	}
	for(index = start; index <= end; index++)
	{
		newarray[index] = temp[index];
	}
}

void MergeSort(int newarray[], int start, int end, int combo)
{
	afterprint(newarray, start, end);
	if(start < end)
	{
		int middle = (start + (end-start)/2);
		MergeSort(newarray, start, middle, combo);
		MergeSort(newarray, middle + 1, end, combo);
		merging(newarray, start, middle, end, combo);
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

	beforeprint(arrays, rows);
	cout<<endl;

	//converting 2D array to 1D array
	for(int k = 0; k<rows; k++)
	{
		for(int m = 0; m<3; m++)
		{
			newarray[index] = arrays[k][m];
			index++;
		}
	}
	cout << "Printing the converted 2D array to 1D array: "<< endl;
	afterprint(newarray, 0, combo);

	MergeSort(newarray, 0, combo-1, combo);

	int n = 0;
	for(int a = 0; a<rows; a++)
	{
		for(int b = 0; b<3; b++)
		{
			arrays[a][b] = newarray[n];
			n++;
		}
	}

	cout<< "Sorted array: "<<endl;
	beforeprint(arrays, rows);
	return 0;
}
