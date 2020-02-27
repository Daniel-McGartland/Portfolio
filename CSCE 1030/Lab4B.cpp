/*	Author:		Daniel McGartland(DanielMcGartland@my.unt.edu)
	Date:		feb/15/16
	instructor:	Dr.Thompson
	description:	design an if else statement to satisfy the given criteria
*/

#include<iostream>
using namespace std;

int main()
{
	//int for given number
	int given;

	//date aquisition and statement of input
	cout << "Please enter an integer\n\n";
	cin  >> given;
	cout << "You entered " << given << " as yout integer\n\n";

	//if else statement do assign the correct math 
	if(given >= 0)
	{
		given = ((given - 6)%14);
	}
	else
	{
		given = (given + 7) * (given + 7);
	}

	// print out final value
	cout << "your new number is " << given << endl;

	return 0;
}
