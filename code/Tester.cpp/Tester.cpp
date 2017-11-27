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
	if(u>=0)//>= 0 to include the first letter of the word.. otherwise, you can append it
	//to the cout statement after everything is done. That works too. Whatever floats your boat.
	{
		cout<<l[u];
		writebackward(l, u-1);//start from the top and work your way down until 0, which is your first letter.
		//Cmon, any self-respecting computing major should know this. Yes, even the networking majors.
		//You guys have all the time in the world to learn logic circuits. So fuck off with your
		//bullshit GPA. P.S: Networking majors kick yourself in your own balls.
	}
}
template <typename T>
void displayvector(const vector<T> & A, int first, int last)
{
	if(A[first] != A[last])//if the last letter is equal to the first, you got one value and its done D.. O.. N.. E... done.
	{//if conditions are met, the recursing stops and everyone is happy....
		cout<<A[first];///print out the first letter.
		displayvector(A, first+1, last); //then go to the next one, last is your size, pretty dumb way of doing that but whatever...
		//A is your vector, make sure it has stuff in it.... Ex: A[0].. then goes to A[1]...etc...
	}
}

int vowels(string s, int size)
{
	int length = s.size();//you want the string size here to index through the string...
	if(s[length]>=0)//you wanna see if your string is at least 1 letter.
	{
		int counter = 0;// this probably doesnt serve much of a purpose being equal to 0.. WTF...
		if(s[length-1]== 'a' || s[length-1] == 'e' || s[length-1] == 'i' || s[length-1]== 'o' || s[length-1] == 'u')
		//checks if the letter is a vowel, if this, then it'll count the times it is a vowel and return it.
		//maybe pseudocode writing is my lifelong career.
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
		s.erase(size-1,1);//erases last element in the sequence
		s.erase(0,1);//erases the first element in the sequence
		return palindrome(s); //returns value to start of recursive function
		//to be checked again by the if and elseif and else statement.
	}
	else
	{
		return false;
	}
}

void ReverseString(string s)
{
	int size = s.length()-1; //sets the length of the string to an integer variable
	if(s[size]>0) //??sees if the size of word is greater than 0. Index 0 of string is 1 so -1.
	{
		//prints out the last element first, then goes down.
		cout<<s[size];
		s.erase(size, 1); //erases the last element after each iteration until the thing reaches fucking 0.
		ReverseString(s); //recurses if the index is greater than -1 motherfuckers. Don't do
		//-1 cuz that'll get read even if it's false for a check s[-1] doesnt exist at all, ya foo'.
		//You have to suck pretty bad to
		//be reading my code, yo.
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
