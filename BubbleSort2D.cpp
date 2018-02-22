#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;

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

void BubbleSort(int arrays[][2], int num_rows)
{
	int number = 1;
	bool flag = false;
	while(!flag)
	{
		flag = true;
		for(int i = 0; i<num_rows-1; i++)
		{
			for(int j=1; j<2; j++)
			{
				if(arrays[i][j-1]>arrays[i][j])
				{
					cout<< "Step number "<< number << '\n';
					int temp = arrays[i][j-1];
					arrays[i][j-1]= arrays[i][j];
					arrays[i][j] = temp;
					print(arrays, num_rows);
					number++;
					flag = false;
				}
				if(arrays[i][j]>arrays[i+1][0])
				{
					cout<< "Step number "<< number << '\n';
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
