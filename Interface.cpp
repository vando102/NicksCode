/*Author: Nicholas Hoang
Date: 2/8/2018
Purpose: To create an interface where user can enter username and password.
*/
#include <iostream>
#include <string>

using std::string;

/*Precondition: Takes in an char array of size 26 and strings to hold the attempt of the
user to get correct username and password
Postcondition: Struct is created.
*/
struct interfaces
{
	string password;
	string username;
	string email;
};

/*Precondition: Takes in struct object, char array, strings to hold the correct username and password,
a boolean to check if conditions are true, and an int to record number of attempts
Postcondition: User is prompted for username and password input. If they succeed before 3 attempts, the
user will get the goal and loop will end. Otherwise, the loop will continue ask for the information until
the third try is used up.
*/
void input()
{
	interfaces interface;
	string password = "pass2";
	string inputusername = "vando102";
	string inputemail = "nuip3@hotmail.com";
	bool pass = false;
	int attempt = 0;
	do {
		std::cout<< "Username: "<< std::endl;
		getline(std::cin, interface.username);
		std::cout<< '\n';
		std::cout<< "Password: "<< std::endl;
		getline(std::cin, interface.password);

		/*Password will not work correctly even with correct input?? */
		if(interface.username == inputusername && interface.password == password)
		{
			pass = true;
			std::cout<< '\n';
			std::cout << "Welcome to your interface. "<< '\n';
		}

		attempt++;
		std::cout<< '\n';

		if(attempt > 3)
		{
			for(int emailattempt = 0; emailattempt < 3; emailattempt++)
			{
				std::cout<< "Account locked. Enter the account email address to change password. "<< '\n';
				getline(std::cin, interface.email);

				if(interface.email == inputemail)
				{
					/*This is replace the old password with the new password,
					and goes back to the
					username and password do-while loop and does another check. */
					string replacement;
					std::cout << "Enter a new password here: "<< '\n';
					getline(std::cin, replacement);
					password.replace(password.begin(), password.end(), replacement.begin(), replacement.end());
					std::cout << "New password is " << password << '\n';
					attempt = 0;
					break;
				}
				else if(emailattempt >= 2)
				{
					std::cout<< "You are permanently locked out. Contact system administrator. "<< '\n';
					exit(1);
				}
				else
				{
					continue;
				}
			}
		}
	} while(pass == false && attempt <= 3);
}


int main()
{
	input();
	return 0;
}
