#include <iostream>
#include <string>
#include <vector>
using namespace std;

void writeLine(char input, int size)
{
	if(size>0)
	{
		cout<<input;
		writeLine(input, size-1);
	}
}

void writeBlock(char input, int size, int height)
{
	if( height>0)
	{
		writeLine(input, size);
		cout<<endl;
		writeBlock(input, size, height-1);
	}
}

void writeBackward(string word, int length)
{
	if(length>-1)
	{
		cout<<word[length];
		writeBackward(word, length-1);
	}
}

template<typename T>
void displayVector(const vector<T> & A, int first, int last)
{
	if(first<last)
	{
		cout<< A[first]<<endl;
		displayVector(A, first+1, last);
	}
}

int vowels(string s, int size)
{
	cout<<s<<endl;//print out the string, just for testing purposese you know... how the fuck do you not know this....
	// you liked impressing girls in high school instead of focusing on your future career. Solution:: too easy::
	//"Lets go out sometime, I really like you... too easy..man."
	int counter;//well this is one way to do this... personally, i wanted to try int counter = 0 then increment...
	//just another way of doing things.... hint hint Ms. McMurry's speech.
	if(size>0)
	{
		if(s[size-1] == 'a' || s[size-1] == 'e' || s[size-1]== 'i' || s[size-1]=='o' || s[size-1] == 'u')
		{
			return vowels(s, size-1);//size -1 is just the size minus 1 for the indexing starts at 0 man.
		}
		else
		{
			s.erase(size-1, 1);//otherwise, consonants get erased from the word.
			return vowels(s, size-1); //return the size of the word
		}
	}
	else
	{
		counter = s.size(); //then return the size of whole thing, when it is done.
		return counter;//return the number...
	}
}
void ReverseString(string s)
{
	int length = s.size()-1;
	if(s[length]>0)
	{
		cout<<s[length];
		s.erase(s.end()-1);
		ReverseString(s);
	}
}
bool Palindrome(string s)
{
	int begin = 0;
	int size = s.length();
	if(size<2)
	{
		return true;
	}
	else if(s[begin]==s[size-1])
	{
		s.erase(size-1,1);//erases the last element
		s.erase(0,1);//erases the first element
		return Palindrome(s); //goes back up to the beginning function
	}
	else
	{
		return false;
	}
}

int main()
{
	string vowelcounter = "bcefe";
	cout<< "Number of vowels is";
	cout<< vowels(vowelcounter, 5);
	cout<< endl;

	char tester;
	cout<< "Enter a character to be tested here: "<<endl;
	cin>>tester;
	cout<<endl;
	writeLine(tester, 5);
	cout<<endl <<endl;

	char tester2 = 'i';
	writeBlock(tester2, 5,3);
	cout<<endl;

	string strings;
	cout<< "Enter a word here to be reversed: "<<endl;
	cin>>strings;
	int size = strings.size();
	writeBackward(strings, size+1);
	cout<<endl;

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	int start = numbers.front()-1;
	int rear = numbers.back();
	displayVector(numbers, start, rear);

	string tester3 = "abcde";
	cout<<"Original word:"<<tester3<<endl;
	cout<< "Reversed word:";
	ReverseString(tester3);
	cout<<endl;

	string word = "race car";
	cout << Palindrome(word);

	return 0;

}
