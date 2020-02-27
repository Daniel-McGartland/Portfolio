/*	Author:		Daniel McGartland(DanielMcGartland@my.unt.edu)
	Date:		Feb/15/16
	Instructor:	Dr.Thimpson
	Description:	change a given code so that it takes the average of 20 numbers instead of 6
*/
#include<iostream>
using namespace std;

int main()
{
	int x;
	int count = 0;  //initialized to 0 to count number of grades
	double sum = 0; // initialized to 0 to make sure it starts at 0
	double average;

	//prompt user
	cout << "Enter the Twenty grades seperated by a single space, then press <Enter>: ";
	
	//while loop to read in twemty grades and compute their sum
	while (count < 20) 
	{
		cin >> x;
		sum = sum + x;
		
		count ++;

	}
	cout << endl;
	
	//calculate and print out average
	average = sum/20;
	cout << "The average is " << average << endl;

	return 0;
}
