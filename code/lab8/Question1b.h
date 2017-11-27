#include <vector>
#include <iostream>
using namespace std;
template<typename T>
int Search(vector <T> looks, T items)
{
int counter = 0;
	for(typename vector<T>::iterator vectors = looks.begin(); vectors != looks.end(); vectors++)
	{
		 if(items==*vectors)
		 {
			 return counter;
		 }
		 counter++;
	}
	 return -1;
}
