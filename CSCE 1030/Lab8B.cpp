/* 	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		March/28/2016
	Instructor:	Dr. Thompson
	Description:	use gdb to make the requested changes
*/
#include <iostream>
using namespace std;

int main()
{
	int i, num, j = 1;
	cout << "Enter the number: ";
	cin  >> num;

	for (i = 1; i <= num; i++)
	{
		j = j * i;
	}

	cout << "Factorial of " << num <<
			" is " << j << "." << endl;

	return 0;
}
