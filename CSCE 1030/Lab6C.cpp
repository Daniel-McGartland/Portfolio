/* 	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		March/7/2016
	Instructor:	Dr.thompson
	Description:	use static casting to correct to code
*/
#include<iostream>
using namespace std;

int main()
{
	int f,c;//given names where unnecessary
	cout << "Enter a temperature in Farenheit\n\n";
	cin  >> f;
	
	//calculating celsius temp
	c = f - 32;
	cout << "The Temperature in Celsius is: " << static_cast<float>(c) * .5555555556 <<endl;
//i did it like this to avoid incorrect answers when using a farenheit temperature that would result in a decimal

	cout << c;
	return 0;
}		
