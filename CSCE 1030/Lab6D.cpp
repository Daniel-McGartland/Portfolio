/* 	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		March/&/2016
	Author:		Dr. Thompson
	Description:	write a program that computes the factorial of a positive integer that is the product of al			   l positive integers from 1 to n
*/
#include<iostream>
using namespace std;

//funtion declaration
int Factorial(int n);

int main()
{
	int num;
	
	//data aquisition
	cout << "Enter the number you would like the factorial of\n";
	cin  >> num;
	
	//funtion call
	cout << Factorial(num) << endl;

	return 0;
}

//function defenition
int Factorial(int n)
{
	int total = 1;
	
	for(int i = n; i > 0; i--)
	{
	total = total * i;
	}
	
	return total;
}
