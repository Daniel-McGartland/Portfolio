/*	Author:		Daniel McGartland(DanielMcGartland@my.unt.edu)
	Date:		feb/22/16
	Instructor:	Dr. Thompson
	Description:	finish the given code to print out all prime numbers between 2-100
*/
#include<iostream>
using namespace std;

int main()
{
	int num = 2;// initialized to 2 because one cant be prime
	
	//while loop to ensure all 99 numbers are checked
	while(num<= 100)
	{
		//if statement to check if num is currently a prime
		if ((num == 2)||(num == 3)||(num == 5)||(num == 7))
		{
			cout << num << endl;
		}
		
		else if((num %2 !=0) && (num %3 !=0) && (num %5 !=0) && (num %7 !=0))
		{
			cout << num << endl;
		}
		//increment
		num +=1;
	}

	return 0;
}
