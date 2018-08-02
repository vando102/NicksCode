#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iterator>
#include <cctype>

using namespace std;

int main()
{
	cout << "This is a math game. " << endl;
	float a, b;
	int ans;
	float numc = 0;
	float numi = 0;
	int total = 0;
	int i = 0;
	char response = 'd';
	srand(time(NULL)); //generates new numbers after each question.
	while (response != 'n' && response != 'N')
	{
		b = (rand() % 50) + 1;
		a = (rand() % 50) + 1; //generates random numbers every time a question is answered

		cout << "What is " << a << " " << "+" << " " << b << " " << "?" << endl;
		cin >> ans;
		while (cin.fail())
		/* If a user does not enter an input that is an integer, then the user will be prompted
		to input a proper answer until they enter an integer. This prevents the program from crashing.
		*/
		{
			cout << "You did not enter a proper number. Enter a proper answer. " << endl;
			cout << "What is " << a << " " << "+" << " " << b << " " << "?" << endl;
			cin >> ans;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> ans;
		}
		if (ans == a + b)
		{
			cout << "Correct! " << endl;
			total++;
			numc++;
		}
		else
		{
			cout << "Sorry, that is not correct. " << endl;
			total++;
			numi++;
		}
		
		if (total % 5 == 0)
		{
			float percent = (numc / total) * 100;
			cout << "The total number of correct responses is " << numc << endl;
			cout << "Total number of incorrect responses is " << numi << endl;
			cout << "Your percentage so far is " << percent << " "<< "percent" << endl;
			if (percent < 60)
			{
				cout << "You are not passing at the moment. Don't get discouraged! Keep trying! " << endl;
			}
			else
			{
				cout << "You are currently passing. Keep up the good work! " << endl;
			}
			cout << "Would you like to continue? y/n ?" << endl;
			cin >> response;
			while (response != 'y' && response != 'Y' && response != 'n' && response != 'N')
			{
				cout << "Would you like to continue? y/n ?" << endl;
				cin >> response;
			}
		}
	}
	
	return 0;
}