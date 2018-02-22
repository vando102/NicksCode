#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
	srand(time(0));

	bool whilevar = true;
	int answer;
	int counter = 0;
	const int MODIFIER = 100; //change this for range of numbers
	int choice, lives;
	string star;
	cout << "Welcome to Add Em Up!" << '\n';
	cout << "Enter 1 to play on baby mode. "<< '\n';
	cout << "Enter 2 to play on easy mode. "<< '\n';
	cout << "Enter 3 to play on medium mode. "<< '\n';
	cout << "Enter 4 to play on hard mode. "<< '\n';
	cout << "Enter 5 to exit program. "<< '\n';
	cout << '\n';
	do {
		cout << "What difficulty would you like to play on? " << '\n';
		cin>>choice;
		switch(choice)
		{
			case 1:
				lives = 7;
				star = "*******";
				break;
			case 2:
				lives = 5;
				star = "*****";
				break;
			case 3:
				lives = 3;
				star = "***";
				break;
			case 4:
				lives = 1;
				star = "*";
				break;
			case 5:
				break;
			default:
				break;

		}
	} while(choice == 5);
	while (whilevar)
	{
		int num1 = rand() % MODIFIER + 1;
		int num2 = rand() % MODIFIER + 1;

		do
		{
			cout << "You have "<< lives << " lives left "<< '\n';
			cout << star << '\n';
			cout << "What is " << num1 << " + " << num2 << "?" << std::endl;
			cin >> answer;
			if(answer != num1 + num2)
			{
			star.erase(star.end()-1);
			lives--;
		}
	} while (lives != 0);

		counter++;

		if (counter == 5) //change this for amount of times before prompt
		{
			char w;
			cout << "Continue? (y/n)" << std::endl;
			cin >> w;
			if (w == 'n')
				whilevar = false;
			else
				counter = 0;
		}
	}

	cout << std::endl;
	cout << " Good job! " << '\n';
	cout << std::endl;
	cout << "Not quite, try again. " << '\n';
	return 0;
}
