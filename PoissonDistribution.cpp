/*Author: Nicholas Hoang
Resources for equations: Google
Date 2/9/2018
*/
/*Purpose: To demonstrate the standard deviation and the basic
distribution formulas in elementary statistics */
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double Std(double score[], double average, int student);
double poisson(int student, int successes);
double factpoisson(int student, int successes);

int main()
{
	double *score = NULL; //dynamic array initialized
	int student;
	double sum = 0;
	cout << "How many scores are you using? " <<'\n';
	cin >> student;
	score = new double[student];
	cout << '\n';
	for (int i = 0; i < student; i++)
	{
		cout << "Please enter a score" << '\n';
		cin >> score[i];
		sum = sum + score[i];
	}
	int successes;
	cout << "Of those scores, how many of them are you looking for? "<< '\n';
	cin>>successes;
	double average = sum / student;
	double standard = Std(score,average,student);
	double onepoisson = poisson(student, successes);
	double multpoisson = factpoisson(student, successes);
	cout << "The average is "<< average << '\n';
	cout << "The standard deviation is "<< standard <<'\n';
	cout << "The poisson distribution for single value is "<< onepoisson << '\n';
	cout << "The poisson distribution for the range of values is "<< multpoisson << '\n';

	delete[] score;
	return 0;
}

/*Purpose: Calculates standard deviation
Precondition: Function takes in a dynamic array dictated by the number of student. Uses the power
function and an initializer to update the value
Postcondition: Returns the standard deviation. */
double Std(double score[], double average, int student)
{
	double std_var = 0;
	for (int j = 0; j < student; j++)
	{
		std_var = std_var + pow(score[j] - average, 2);
	}
	double deviation = sqrt(std_var / student);
	return deviation;
}

int factorial(int student)
{
	if(student < 1)
	{
		return 1;
	}
	return student * factorial(student-1);
}

double poisson(int student, int successes) //this is for a single variable case.
{
	double e = 2.71828; //this is an approximation of number e since C++ doesn't have
	//the number e. :( .
	double pdistribution = ((pow(e, -successes) * pow(successes, student))/factorial(student));
	return pdistribution;
}

double factpoisson(int student, int successes)
{
	int seen = 0;
	if(seen > student)
	{
		cout<< "This is not possible. "<< '\n';
	}
	seen++;
	return poisson(seen, student);
}
