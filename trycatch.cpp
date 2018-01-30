#include <iostream>
#include <string>
#include <fstream>

int main()
{
	try
	{
	int number1, number2;
	std::cout << "Enter two numbers here: "<< std::endl;
	std::cin>> number1 >> number2;
	if(number2 == 0)
	{
		throw 1;
	}
	std::cout << "The division is "<< number1/number2 << std::endl;

	int a;
	std::cout << "Enter a number here: "<< std::endl;
	std::cin>>a;
	if(std::cin.fail())
	{
		throw 2;
	}
	std::cout << "The number is " << a << std::endl;

	int b;
	std::cout << "Enter a value here: "<<std::endl;
	std::cin >> b;
	while(b != 4)
	{
		if(b != 4)
		{
			throw 3;
		}
	}
	std::cout << "Your number is "<< b << std::endl;

	int indexing;
	char answer;
	int* f= NULL;
	int n;
	std::cout<< "How many numbers you want? "<<std::endl;
	std::cin>>n;
	f = new int[n];
	for (int i = 0; i<n; i++)
	{
		std::cout<< "Enter the values here: "<< std::endl;
		std::cin>>f[i];
	}
	do {
		std::cout << "Would you like to search? (y/n)"<< std::endl;
		std::cin >> answer;
		if(answer == 'y' || answer == 'Y')
		{
			std::cout << "What index would you like to search? "<< std::endl;
			std::cin >> indexing;
				if(indexing >= n)
					{
						throw 4;
					}
		}
		std::cout<< "The number is "<< f[indexing] << std::endl;
	}while(answer == 'y' || answer == 'Y');
	delete [] f;
	f = NULL;

		std::string line;
		std::ifstream inside;
		inside.open("reddit.txt");
		if(inside.fail())
		{
			throw 5;
		}
		else
		{
			while(getline(inside, line))
			{
				std::cout << line << std::endl;
			}
			inside.close();
		}
}
	catch(int e)
	{
		std::cout<< "Exception number is " << e << std::endl;
	}
	return 0;
}
