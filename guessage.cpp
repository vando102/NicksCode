#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	char answer;
	int shoe, year, multiply5, add50, mult20, add1015;
	std::cout<< "This program will guess your current age through a series of questions. " <<std::endl;
	do {
		std::cout << "Would you like to begin? "<<std::endl;
		std::cin>>answer;
		if(answer == 'y' || answer == 'Y')
		{
			break;
		}
	} while(answer != 'y' || answer != 'Y');
	std::cout << "I see you finally gave in. Let's begin" << std::endl;
	std::cout << "***Disclaimer: For this to work, you have to honest or this doesn't work.*** "<< std::endl;

	std::cout<< "Enter your shoe size: "<< std::endl;
	std::cin>>shoe;

	multiply5 = shoe * 5;

	add50 = multiply5 + 50;

	mult20 = add50 * 20;

	char dayans;
	std::cout << "Did you already celebrate your birthday this year? "<< std::endl;
	std::cin>> dayans;
	if(dayans == 'y' || dayans == 'Y')
	{
		add1015 = mult20 + 1018;
	}
	else
	{
		add1015 = mult20 + 1017;
	}
	std::cout<< "Enter the year that you were born (Must be no earlier than 1919): "<< std::endl;
	std::cin>>year;

	int holder = add1015 - year;

	std::cout<< "Your age is "<< holder % 100 << std::endl;

	std::cout << "Your shoe size is "<< holder/100 << std::endl;
char fanswer;
std::cout<< "Did I get it? "<< std::endl;
std::cin>>fanswer;
if(fanswer != 'Y' && fanswer != 'y')
{
	std::cout<< "I succeeded in wasting your time. Have a nice day. "<< std::endl;
}

std::cout << "I'm good aren't I? Have a nice day. "<< std::endl;
return 0;




}
