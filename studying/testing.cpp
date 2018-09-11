#include <list>
#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct stuff
{
	string candidate;
	int votes_received;
	double percentage;
};

list<stuff>out()
{
	int num_candidates;
	list<stuff> all_info;
	cout << "Enter number of candidates here: "<<endl;
	cin >> num_candidates;
	stuff temp;
	for(int i = 0; i < num_candidates; i++)
	{
		cout<< "Enter the candidate name here: "<<endl;
		cin>> temp.candidate;
		cout<<endl;
		cout<< "Enter the votes received here: "<<endl;
		cin>> temp.votes_received;
		all_info.push_back(temp);
		cout << endl;
	}
	return all_info;
}

int totalandpercent(list<stuff> & all_info)
{
	double numbers = 0;
	for(list<stuff>::iterator pos = all_info.begin(); pos != all_info.end(); pos++)
	{
		number = number+(*pos).votes_received;
	}
	for(list<stuff>::iterator pos = all_info.begin(); pos != all_info.end(); pos++)
	{
		(*pos).percentage = ((*pos).percentage)/numbers)*100;
	}
	return numbers;
}

void printallresults(int numbers, list<stuff> all_info)
{
	string winner;
	cout << "Candidate Name: " << setw(20) << "Votes Received: "<< setw(20) << "Percentage" <<endl;
	int winningvotes = 0;
	for(list<stuff>::iterator pos2 = all_info.begin(); pos2 = != all_info.end(); pos2++)
	{
		cout<< (*pos2).candidate << setw(20) << (*pos2).votes_received << setw(20) << (*pos).percentage <<endl;
		if((*pos2).votes_received>winningvotes))
		{
			winningvotes = (*pos2).votes_received;
			winner = (*pos2).candidate;
		}
	}
	cout<< "Total votes: "<< numbers << endl;
	cout<< "Winner of the election is " << winner << endl;
}

int main()
{
	list<stuff>all_info2;
	all_info2 = out();
	int totals = totalandpercent(all_info2);
	printallresults(totals, all_info2);
	return 0;
}
