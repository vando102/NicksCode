/*
Authors: Jesse Raines, Nicholas Hoang, Jonathan Renn
Credits: Nicholas Hoang/Jesse Raines: Typed the skeleton of the implementation file and typed explanations of how each function works.

Jesse Raines: Debugged and helped with troubleshooting the logical errors in the program along with rewording the comments for
readability.

Jonathan Renn: Typed the comments, debugged and helped with troubleshooting the logical errors.

Assignment: Project 3
CS-265-01 SEMO

*/

#ifndef Inventory_H
#define Inventory_H
#include <iostream>
using namespace std;
class Inventory
{
private:
	/*the private member vcariables that we will use to represent 
	the serial number, manufacture date and lot number*/
	int serialNum;
	int manufactDate;
	int lotNum;
public:
	
	void setserial(int serial);
	/*purpose: to set the private member, serialNum
	
	Pre-condition: takes in an integer parameter
	
	Post-condition: the private member serialNum will be given a user input value*/

	void setdate(int date);
	/*purpose: to set the private member, manufactDate

	Pre-condition: takes in an integer parameter

	Post-condition: the private member manufactDate will be given a user input value*/

	void setlot(int lot);
	/*purpose: to set the private member, lotNum

	Pre-condition: takes in an integer parameter

	Post-condition: the private member lotNum will be given a user input value*/

	int getserial();
	/*purpose: to acces the private member serialNum
	
	Pre-condition: serialNum a private member of an inventory object must be initialized
	
	Post-condition: returns an integer: private member serialNum*/

	int getdate();
	/*purpose: to acces the private member manufactDate

	Pre-condition: manufactDate a private member of an inventory object must be initialized

	Post-condition: returns an integer: private member manufactDate*/

	int getlot();
	/*purpose: to acces the private member lotNum

	Pre-condition: lotNum a private member of an inventory object must be initialized

	Post-condition: returns an integer: private member lotNum*/

	//overloaded output operator
	friend ostream & operator<<(ostream & out, Inventory & c);
};
#endif