#include <iostream>
#include <string>
#include <vector>
using namespace std;

void writeline(char letters, int n)
{
	if(n>0)
	{
		cout<< letters;
		writeline(letters, n-1);
	}
}

void writeBlock(char letters, int n, int height)
{
	if(height>0)
	{
		writeline(letters, n);
		cout<<endl;
		writeBlock(letters, n, height-1);
	}
}

void writebackward(string l, int u)
{
	if(u>=0)
	{
		cout<<l[u];
		writebackward(l, u-1);
	}
}
template <typename T>
void displayvector(const vector<T> & A, int first, int last)
{
	if(A[first] != A[last])
		cout<<A[first];
		displayvector(A, first+1, last); 
	}
}

int vowels(string s, int size)
{
	int length = s.size();
	if(s[length]>=0)
	{
		int counter = 0;
		if(s[length-1]== 'a' || s[length-1] == 'e' || s[length-1] == 'i' || s[length-1]== 'o' || s[length-1] == 'u')
	
		{
			counter++;
			return counter;
		}
	}
	else
	{

	}
}

bool palindrome(string s)
{
	int size = s.length();
	if(size<2)
	{
		return true;
	}
	else if(s[0]==s[size-1])
	{
		s.erase(size-1,1);
		s.erase(0,1);
		return palindrome(s); 
	}
	else
	{
		return false;
	}
}

void ReverseString(string s)
{
	int size = s.length()-1; 
	if(s[size]>0) 
	{
		cout<<s[size];
		s.erase(size, 1); 
		ReverseString(s); 
	}
}
int main()
{
	char letters1 = 'k';
	int number = 5;
	int heights = 3;
	writeline(letters1, number);
	cout<<endl <<endl;
	writeBlock(letters1, number, heights);
	cout<<endl;
	string word = "abcde";
	int ranger = 5;
	writebackward(word, ranger);
	cout<<endl;
	vector<int> B;
	B.push_back(4);
	B.push_back(8);
	B.push_back(3);
	displayvector(B, 0, 3);
	cout<<endl;
	string words = "racecar";
	if(palindrome(words)==1)
	{
		cout<< "This word is a palindrome. "<<endl;
	}
	else
	{
		cout<< "This is not a palindrome. "<<endl;
	}
	cout<<endl;
	string words1 = "fuckSatans_Ass";
	ReverseString(words1);

	return 0;

}
