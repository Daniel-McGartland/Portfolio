/*	Author:		Daniel McGartland(DanielMcGartland@my.unt.edu)
	Date:		feb/22/16
	Instructor:	Dr.Thompson
	Description:	Make a switch statement to tell the season based on the entered month
*/
#include<iostream>
using namespace std;

int main()
{
	int month;//to read in what month it is
	
	//data aquisition
	cout << "Please enter the number value of the month (1-12)\n";
	cin  >> month;
	
	//switch statement to tell user their season
	switch(month)
	{
		case 1:
		case 2:
		case 12:
			cout << "It's winter!\n\n";
			break;
		case 3:
		case 4:
		case 5:
			cout << "It's spring!\n\n";
			break;
		case 6:
		case 7:
		case 8:
			cout << "It's summer!\n\n";
			break;
		case 9:
		case 10:
		case 11:
			cout << "It's fall!\n\n";
			break;
		default:
			cout << "That is not the value of a month\n\n";
	}

	return 0;
}
