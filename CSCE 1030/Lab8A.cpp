/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		March 28 2016
	Instructor:	Dr. Thompson
	Description:	write a program to call a function from a function
*/
#include<iostream>
using namespace std;

void get_a_b_c(double& a, double& b, double& c);
double bb_4ac();

int main()
{
	cout << bb_4ac() << endl;//print the solution
	
	return 0;
}

void get_a_b_c(double& a, double& b, double& c)//function for gathering date
{

	cout << "Please enter the values for a,b, and c\n";
	cin >> a >> b >> c;
	
	return ;
}

double bb_4ac()//function to call other function and preform math
{
	double a,b,c;
	get_a_b_c(a,b,c);

	return b*b-4*a*c;

}
