/*	Author:		Daniel McGartland(daniel.mcgartland@my.unt.edu)
	Date:		4/18/2016
	Instructor:	Dr. Thompson
	Description:	modify the given code to use different cctype modifiers
*/

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char c;

	cout << "Enter a digit or white-space \n";
	cin.get(c);//swapped for cin in order to read white space

	if(isdigit(c))
	{//check to see if it is a digit
		cout << "You have entered the digit: " << c << endl;
	}
	
	else if(isspace(c))
	{//check to see if it is white space
		cout << "you have entered a white space character ";
	}

	else
	{//in case the dont enter a correct calue
		cout << "what you entered was neither a digit nor white-space";
	}

	return 0;
}
