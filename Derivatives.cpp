#include <cmath>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::endl;
/*The plan is that this program will
take the derivative of basic trigonometric functions.*/

string derivative(string functions)
{
		string function1, function2, function3, function4, holderfunction;
		cout << "Enter the trigonometric function you wanted derived here (Up to 4 functions and each one must be separated by a space): "<< endl;
		cout<< "(NOTE:This program is case-sensitive.)" << endl;

		getline(cin, holderfunction);

		istringstream istr(holderfunction);
		string space = " ";
		istr >> function1 >> function2 >> function3 >> function4;
		ostringstream ostr;
		cout << holderfunction << endl;
		/*cout << holderfunction << endl;
		Seeing if the istringstream holds each function */

		/*  */
		vector<string> vec1;
		vec1.push_back(function1);
		vec1.push_back(function2);
		vec1.push_back(function3);
		vec1.push_back(function4);

		for(vector<string>::iterator it = vec1.begin(); it != vec1.end(); it++) //use the iterator, not the entire function or it will return
		{
			if(*it == "sin(x)")
			{
				ostr << "cos(x)"<< " ";
			}
			else if(*it == "cos(x)")
			{
				ostr<< "-sin(x)"<< " ";
			}
			else if(*it == "tan(x)")
			{
				ostr<< "sec^2(x)"<< " ";
			}
			else if(*it ==  "cot(x)")
			{
				ostr<< "-csc^2(x)"<< " ";
			}
			else if(*it == "sec(x)")
			{
				ostr<< "sec(x)tan(x)"<< " ";
			}
			else if(*it ==  "csc(x)")
			{
				ostr<< "-csc(x)cot(x)"<< " ";
			}
			else
			{
				cout << "Not a value. Try again." << endl;
			}
		}

		functions = ostr.str();

		return functions;
	}
int main()
{
	string start;
	string end;
	end = derivative(start);
	cout<< "Derived functions "<< end << endl;
	cout << endl;
	return 0;
}
