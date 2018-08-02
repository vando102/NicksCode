#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iterator>
#include <cctype>

using namespace std;

void additionlvl1()
{
	cout << "This is level 1 addition math game. " << endl;
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
			cout << "Your percentage so far is " << percent << " " << "percent" << endl;
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
}

void additionlvl2()
{
	cout << "This is level 2 addition math game. " << endl;
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
		b = (rand() % 150) + 1;
		a = (rand() % 150) + 1; //generates random numbers every time a question is answered

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
			cout << "Your percentage so far is " << percent << " " << "percent" << endl;
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
}

void additionlvl3()
{
	cout << "This is level 3 addition math game. " << endl;
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
		b = (rand() % 500) + 1;
		a = (rand() % 500) + 1; //generates random numbers every time a question is answered

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
			cout << "Your percentage so far is " << percent << " " << "percent" << endl;
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
}

void additionlvl4()
{
	cout << "This is level 4 addition math game. " << endl;
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
		b = (rand() % 1500) + 1;
		a = (rand() % 1500) + 1; //generates random numbers every time a question is answered

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
			cout << "Your percentage so far is " << percent << " " << "percent" << endl;
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
}

void choices()
{
	int answer;
	cout << "Welcome to Addition Masters. In this game, there are four levels with the first being the easiest and " << endl;
	cout << "the fourth being the hardest." << endl;
	cout << "Enter 1 to go to level 1. " << endl;
	cout << "Enter 2 to go to level 2. " << endl;
	cout << "Enter 3 to go to level 3. " << endl;
	cout << "Enter 4 to go to level 4. " << endl;
	cout << "Enter 5 to exit the game. " << endl;
	cout << endl;
	cout << "What would you like to do? " << endl;
	cin >> answer;
	while (cin.fail())
	{
		cout << "What would you like to do? " << endl;
		cin >> answer;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> answer;
	}
	switch (answer)
	{
	case 1:
		additionlvl1();
		break;
	case 2:
		additionlvl2();
		break;
	case 3:
		additionlvl3();
		break;
	case 4:
		additionlvl4();
		break;
	case 5:
		break;
	default:
	{
		cout << "That is an invalid response. " << endl;
	}
	}
}

int main()
{
	choices();
	system("pause");
	return 0;
}
