/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	date:		march/7/2016
	Instructor:	Dr. Thompson
	Description:	modify the code to use the predefined function POW to compute a^b
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int p = 1;// removed int i since i wont need to increment
	int a = 2, b = 4;

	//computing 2^4
	p = pow(a, b);
	cout << a << " to the power of " << b << " is = " << p << endl;

	p = 1;
	a = 3, b = 3;

	//computing 3^3
	p = pow(a, b);
	cout << a << " to the power of " << b << " is = " << p << endl;

	p = 1;
	a = 5, b = 4;

	//computing 5^4
	p = pow(a, b);
	cout << a << " to the power of " << b << " is = " << p << endl;

	return 0;
}
