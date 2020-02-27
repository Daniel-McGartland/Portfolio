/*	Author:		Daniel McGartland(DanielMcGartland@my.unt.edu)
	Date:		Feb/15/16
	Instructor:	Dr. Thompson
	Description:	write an if else statement to complete the given code
*/
#include<iostream>
using namespace std;

int main()
{
	//given variables to determine out output price
	int age;
	double ticket;

	//data aquisition
	cout << "enter your age to determine ticket price: ";
	cin >> age;

	//adding showpoint for accuracy
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// statement to determine price of ticket
	if(age > 8)
	{
		ticket = 12;
	}
	else
	{
		ticket = 6;
	}
	
	//output cost
	cout << "Your ticket costs $" << ticket << endl;
	return 0;
}
