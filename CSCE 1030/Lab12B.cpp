/*	Author:		DanielMcGartland(danielmcgartland@my.unt.edu)
	Date:		4/28/16
	Instructor:	Dr.Thompson
	Description:	complete the requested changes to the given code
*/
#include<iostream>
using namespace std;

int main()
{
	int *p1;

	//declare a dynamic array p1
	p1 = new int;

	cout << "Enter an integer:";
	cin  >> *p1;
	*p1 = *p1 + 7;
	cout << "your input + 7 =" << *p1 << endl;

	//delete dynamic array for p1
	delete p1;

	return 0;
}
