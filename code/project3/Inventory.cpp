#include "Inventory.h"


/*purpose: to set the private member, serialNum

Pre-condition: takes in an integer parameter

Post-condition: the private member serialNum will be given a user input value*/
void Inventory::setserial(int serial)
{
	serialNum = serial;
}

/*purpose: to set the private member, manufactDate

Pre-condition: takes in an integer parameter

Post-condition: the private member manufactDate will be given a user input value*/
void Inventory::setdate(int date)
{
	manufactDate = date;
}

/*purpose: to set the private member, lotNum

Pre-condition: takes in an integer parameter

Post-condition: the private member lotNum will be given a user input value*/
void Inventory::setlot(int lot)
{
	lotNum = lot;
}

/*purpose: to acces the private member serialNum

Pre-condition: serialNum a private member of an inventory object must be initialized

Post-condition: returns an integer: private member serialNum*/
int Inventory::getserial()
{
	return serialNum;
}

/*purpose: to acces the private member manufactDate

Pre-condition: manufactDate a private member of an inventory object must be initialized

Post-condition: returns an integer: private member manufactDate*/
int Inventory::getdate()
{
	return manufactDate;
}

/*purpose: to acces the private member lotNum

Pre-condition: lotNum a private member of an inventory object must be initialized

Post-condition: returns an integer: private member lotNum*/
int Inventory::getlot()
{
	return lotNum;
}

//overloaded output operator
ostream & operator<<(ostream & out, Inventory & c)
{
	out << "The serial number is " << c.getserial() << endl;
	out << " The manufacture date is " << c.getdate() << endl;
	out << "The lot number is " << c.getlot() << endl;
	return out;
}
