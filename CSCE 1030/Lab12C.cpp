/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		4/28/16
	Instructor:	Dr. Thompson
	Description:	modify the program to create the array dynamically
			and acess the array using pointer notation
*/

#include<iostream>
using namespace std;

int main()
{
	//array created dynamically
	int x;
	int *numlist;
	numlist = new int [x];

	//prompt for and read in array size	
	cout << "How many numbers yould you like in the array?";
	cin  >> x;

	//read 8 integers from the keyboard
	for(int i = 0; i < x; i++)
	{
		cout << "Enter value # " << i + 1 << ": ";
		cin  >> *(numlist + i);
	}
	
	//display the numbers in reverse order
	for (int i = x; i > 0; i--)
	{
		cout << "Value # " << i << ": ";
		cout << *(numlist + i-1) << endl;
	}
	
	//delete the numlist dynamic array
	delete numlist;
	return 0;
}
