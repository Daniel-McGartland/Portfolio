/* 	Author:		Daniel McGartltnad(DanielMcGartland@my.unt.edu)
	Date:		feb/15/16
	Instructor:	Dr. Thompson
	description:	Edit a given code to be a do-while loop instead of a while loop
*/

#include<iostream>
using namespace std;

int main()
{
	int x;
	int count = 0; // to count number of values
	int N;	       //number of values to compute average
	double sum = 0;//initialize to 0
	double average;

	//prompt user
	cout << "Enter number of values to be read in <Enter>: ";
	cin  >>  N;
	
	//do while loop to read in variable number of integers
	do
	{
		cout << " Enter a grade <Enter>: ";
		cin >> x;
		sum = sum + x;
		count ++; //update count

	}while(count < N);

	//if then statement to computer average
	if (N == 0)
	{
		cout << "N cannot be 0 no average will be computer.\n";
	}
	else
	{
		average = sum/N;
		cout << "Average of " << N << " grades is " << average << endl;
	}

	return 0;
}
