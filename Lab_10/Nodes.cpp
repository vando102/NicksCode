#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream in;
	in.open("text.txt"); //opens the file
	char c; //character to be read
	int *p1; // sets int, double, and string pointers
	double *p2;
	string *p3;
	int sum1 = 0; //sets them equal to 0 to be updated each time for summation
	double sum2 = 0;
	string s3 = "";
	 //reads from the text file

	while(c!= 'q')
	{
		in >> c;
		if(c=='i')
		{
			p1 = new int; //allocate memory
			in >> *p1; //reads from the input file
			cout << *p1 << " " << p1 <<endl; //prints to the screen
			sum1= sum1 + *p1; //sums the summation plus the pointer.
			delete(p1);
		}
		else if(c=='d')
		{
			p2 = new double;
			in>> *p2;
			cout << *p2 << " "<< p2 <<endl;
			sum2 = sum2+*p2;
			delete(p2);
		}
		else if(c=='s')
		{
			p3 = new string;
			in>> *p3;
			cout << *p3 << " "<< p3 <<endl;
			s3 = s3+*p3;
			delete(p3);
		}
		else if(c=='q')
		{
			cout<< "End of file. "<<endl;
		}
		else
		{
			cout<< "Not valid "<<endl;
		}
	}
		in.close(); //closes the file
		cout << "-------Sum--------Address"<<endl;
		cout<< sum1 << " "<< &sum1 << endl;
		cout<< sum2 << " "<< &sum2 << endl; //prints the total sum and its memory location.
		cout<< s3 << " "<< &s3 <<endl;
		return 0;
	}
