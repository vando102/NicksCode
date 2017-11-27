#include <vector>
#include <iostream>

using namespace std;
//searches a user input vlaue in a vector
template <typename vectortype>
int Search(vector<vectortype> look, vectortype item)
{
	for(int i = 0; i<look.size(); i++)//goes from 0 to size-1
	{
		if(item == look[i])//if the specified item is equal to the items index in the vector return the index.
		{
			return i;
		}
	}
	return -1;
}
