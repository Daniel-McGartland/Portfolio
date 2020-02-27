/* 	Author:		Daniel McGartland(daniel.mcgartland@my.unt.edu)
	Date:		4/18/2016
	Instructor:	Dr. Thompson
	Description:	Intro to arrays: modify given code to use a for loop to display the numbers in reverse
*/

#include<iostream>
using namespace std;
int main()
{
	int numlist[8], i;

	//read 8 integers from keyboard
	for(i=0; i<8; i++)
	{
		cout << "enter a value # " << i+1 << ":";
		cin  >> numlist[i];
	}

	//for loop to display number in reverse order
	for(i=7; i >= 0;i--)
	{
		cout << "value #" << i+1 << ": " << numlist[i] << endl;
	}
	
	return 0;
}
