/*Authors: Nicholas Hoang, Jonathan Renn, Jesse Raines
Credits: Nicholas Hoang- general implementation (specifically with the winner of the election)
		 Jesse Raines- Numerous revisions on logic and defined the comment structure
		 Jonathan Renn- Comments, documentation/troubleshooting, and formatting the spacing of code

Date: 10/28/2017
Class and Project: CS265 Project 4 */
#include <list>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*Purpose: Hold the names, number of votes, and percentage of votes in a struct
Preconditions: Must have a string to hold the name, int to hold the number of
votes, and a double to hold the percentage of votes.
Postconditions: Struct is created. */
struct election
{
	string candidate_name;
	int votes_received;
	double vote_percent;
};

/*Purpose: To make a list of candidates with their respective votes,
Pre-condition: Define election
Post-condition: returns a list of elections that hold the pair values of candidates and their votes */
list<election> getinfo()
{
	int number_candidates;
	list<election> all_info;// list that can access the variables in struct election.
	cout << "Enter number of candidates here: " << endl;
	cin >> number_candidates;
	election temp;
	for(int i = 0; i < number_candidates; i++)
	{
		cout << "Enter the candidate name here: " << endl;
		cin >> temp.candidate_name;
		cout << endl;
		cout << "Enter number of votes for candidate here: " << endl;
		cin >> temp.votes_received;
		all_info.push_back(temp);
		cout << endl;
	}
	return all_info;
}

/*Purpose: Figures out the total amount of votes in the election then assigns a percentage to each of the candidates
based on their amount of votes
Preconditions: Needs a list of elections as a parameter
Postconditions: Returns an integer that represents the total number of votes */
int totalandpercent(list<election>& all_info)
{
	double numbers = 0;
	for(list<election>::iterator iterations = all_info.begin(); iterations != all_info.end(); iterations++)
	{
		numbers = numbers+(*iterations).votes_received;
	}
	for(list<election>::iterator iterations = all_info.begin(); iterations != all_info.end(); iterations++)
	{
		(*iterations).vote_percent = (((*iterations).votes_received)/numbers)*100;
	}
	return numbers;
}

/*Purpose: Prints a summary of the results of the election
Preconditions: Needs 2 parameters: an int representing the number of votes and the second being a list of elections.
Postconditions: A summary of the results will be printed to the screen */
void printallresults(int numbers, list<election> all_info)
{
	string winner;
	cout << "Candidate name" << setw(20) << "Votes Received" << setw(20) << " Percentage of total votes" << endl;
	int winningvotes = 0;
	for(list<election>::iterator values = all_info.begin(); values != all_info.end(); values++)
	{
		cout << (*values).candidate_name << setw(20) << (*values).votes_received << setw(20) << (*values).vote_percent << endl;
		if((*values).votes_received>winningvotes)
		{
			winner = (*values).candidate_name;
			winningvotes = (*values).votes_received;
		}
	}
	cout << "Total votes: " << numbers << endl;
	cout << "The Winner of this election is " << winner << endl;
}

int main()
{
	list<election> all_info2;
	all_info2 = getinfo();
	int total = totalandpercent(all_info2);
	printallresults(total,all_info2);
	return 0;
}
