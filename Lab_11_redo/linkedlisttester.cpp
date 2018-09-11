#include "linkedlistredo.h"
using namespace std;

int main()
{
	LinkedList<double> intList3;
	LinkedList<int> intList;
	LinkedList<int> intList2;
	int index;
	cout << "Enter an index here: (0-2)"<<endl;
	cin>>index;
	intList.EraseNth(index);
	//cout<< "Default constructor " << intList <<endl;
	//cout<< "Copy constructor "<< intList2(intList) << endl;
	intList2.print();
	intList3.average(5);
	intList.push_back(100);
	intList.push_back(200);
	intList.push_back(300);
	cout << "Current List contents" <<endl;
	intList.print();
	cout << "Position of the item that is being searched:\t" << intList.search(200) << endl;
	cout << "Front:\t " << intList.front() << endl;
	cout << "Back:\t" << intList.back() << endl;
	cout << "Second item before pop_front:\t";
	intList.printSecond();
	intList.pop_front();
	cout << "Second item after pop_front:\t";
	intList.printSecond();

	if(intList.empty())
	{
		cout<< "The list is empty. "<<endl;
	}
	else
	{
		cout<< "The list is not empty. "<<endl;
	}
	cout << "Printing contents "<<endl;
	intList.print();
		return 0;
}
