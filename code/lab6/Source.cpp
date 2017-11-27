#include "Header.h"
#include "Queue.h"
#include <vector>
#include <cctype>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
string palindrome(string paramstr);

/* Purpose: To check if the sentence or word is a palindrome.
Preconditions: string function with string parameter for the size of stack, 2 empty strings to hold the reversed word and the original word,
StackVector object and explicit value constructor to hold the strings created in the input file.
Postconditions: The letters from the word in the original stack are being taken out into another stack starting with top letter first and being
compared to see if they are equal. Return true if they are equal.
*/

int main()
{
	/*Purpose: To open the text file and check if they are palindromes by calling the functions in implementation file and above function string palindrome(string paramstr)
	Preconditions: <fstream> to open and close the input and output files. 1 input file with the sentences and 1 output file to print the ones that are palindromes. Local variable word1 to
	take the place of the parameter for string palindrome(string paramstr)
	Postconditions: The output file prints all sentences that are palindromes and none if they are not palindromes.*/
	string word1;
	ifstream fin;
	fin.open("Text1.txt");
	if (fin.fail())
	{
		cout << " This file failed to open" << endl;
	}
	ofstream fout;
	fout.open("Text2.txt");
	if (fout.fail())
	{
		cout << " Output file failed to open " << endl;
	}
	while (getline(fin, word1))
	{
		fout << palindrome(word1) << endl;
	}
	fin.close();
	fout.close();
	system("pause");
	return 0;
}

string palindrome(string paramstr)
{
	string backwards = "";//empty strings to hold the original and the reversed word.
	string revereStr = "";
	string Queueone = "";
	string Queuetwo = "";

	QueueElement words2; //this is the class object.
	Queues letter(words2);//explicit value constructor to hold the characters of the original word.
	StackVector words3;
	Stack characters(words3);
	int number = paramstr.size();
	for (int i = 0; i < number; i++)
	{
		if (isalpha(paramstr[i]))//checks if the stack and queue is a letter
		{
			char apenedchar = tolower(paramstr[i]);
			revereStr = revereStr + apenedchar;
			//sets all of the letters to a lowercase letter 
			letter.enqueue(apenedchar);
			//cout << "Queue is this output " << revereStr << endl;//pushes all of the characters to the original stack of letters.
			Queueone = Queueone + apenedchar;//sets all of the letters to a lowercase letter 
			characters.push(apenedchar);//pushes all of the characters to the original stack of letters.
			cout << "Queue is this output " << letter.front() << endl;
			cout << endl;
			cout << "Stack is this " << characters.Top() << endl;
		}
	}

	while (!letter.empty() && (!characters.empty()))//checks if the stack and queue is empty.
	{
		backwards = backwards + letter.front();//while the queue is not empty then the topmost letter of the original stack will be appended to the empty string.
		letter.dequeue();//the letters will be taken out of the letters stack 
		Queuetwo = Queuetwo + characters.Top();//while the stack is not empty then the topmost letter of the original stack will be appended to the empty string.
		characters.pop();//the letters will be taken out of the letters stack 
	}

	if (Queueone == backwards)
	{
		return Queueone;
	}
	else
	{
		return "Not a palindrome";
	}
}
