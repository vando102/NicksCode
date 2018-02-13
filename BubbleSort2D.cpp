#include <iostream>

void input()
{
	int rows, columns, l,k, mrows, mcolumns;
	int onearray[10][10], temparray[10][10];
	std::cout<< "Enter number of rows here: "<< '\n';
	std::cin>>mrows;
	std::cout<< '\n';
	std::cout<<"Enter number of columns here: "<< '\n';
	std::cin>>mcolumns;
	std::cout<<'\n';
	std::cout<< "Enter contents of array here: "<< '\n';
	for(rows = 0; rows<mrows; rows++)
	{
		for(columns = 0; columns<mcolumns; columns++)
		{
			std::cin>>onearray[rows][columns];
		}
	}

	std::cout<< "Before sorting:  "<< '\n';
	for(rows = 0; rows<mrows; rows++)
	{
		for(columns = 0; columns<mcolumns; columns++)
		{
			std::cout<<onearray[rows][columns] << " ";
		}
		std::cout<< '\n';
	}

	for(rows = 0; rows < mrows; rows++)
	{
		for(columns = 0; columns < mcolumns; columns++)
		{
			for(l = rows; l < mrows; l++)
			{
				if(l==rows)
				{
					for(k=(columns+1);k<mcolumns; k++)
					{
						if(onearray[rows][columns]>onearray[l][k])
						{
						temparray[rows][columns] = onearray[rows][columns];
						onearray[rows][columns] = onearray[l][k];
						onearray[l][k] = temparray[rows][columns];
					}
					}
				}
						if(l > rows)
						{
							for(k = 0; k<mcolumns;k++)
							{
								if(onearray[rows][columns]>onearray[l][k])
								{
									temparray[rows][columns] = onearray[rows][columns];
									onearray[rows][columns] = onearray[l][k];
									onearray[l][k] = temparray[rows][columns];
								}
							}
						}
					}
				}
			}
std::cout<< '\n';
std::cout<< "Printing contents of sorted array "<< '\n';
	for(rows = 0; rows < mrows; rows++)
	{
		for(columns = 0; columns < mcolumns; columns++)
		{
			std::cout<< onearray[rows][columns] << " ";
		}
		std::cout<<'\n';
	}
}

int main()
{
	input();
	return 0;
}
