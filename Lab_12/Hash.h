#ifndef Hash_H
#define Hash_H
#include <algorithm>
#include "LinkedList.h"
using namespace std;

class HashTable
{
private:
	LinkedList<string> hash[11];
public:
	int hashing(const string input)
	{
		int size = input.size();
		int iterations = min(3, size);
		int sum = 0;

		for(int i = 0; i< iterations; i++)
		{
			sum = sum + input[i];
		}
		return sum % 11;
	}
	void insert(string item)
	{
		hash[hashing(item)].Push_front(item);
	}

	void showcontents()
	{
		for(int i = 0; i<11; i++)
		{
			hash[i].print();
		}
	}
};
#endif
