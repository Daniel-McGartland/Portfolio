/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		4/28/16
	Instructor:	Dr.Thompson
	Description:	modify the program to group the 4 parameters into
			a struct and use the stuct instead of the variables
*/
#include<iostream>
#include<cmath>
using namespace std;

float payment(float amount, float rate, int term);

struct loan
{
	int ID;
	double amount;
	double rate;
	int term;
};

int main()
{
	float monthly_payment;
	
	cout << "Enter the ID of this loan: \n";
	cin  >> loan.ID;

	cout << "Enter the amount of this loan \n";
	cin  >> loan.amount;

	cout << "Enter the annual interest rate of this loan in %: \n";
	cin  >> loan.rate;

	cout << "Enter the term(number of months length of loan): \n";
	cin  >> loan.term;
	

	monthly_payment =payment(amount,rate,term);

	cout << "The Monthly payment for loan " <<loan.ID << "is: " << monthly_payment <<endl;

	return 0;
}

float payment(float loan.amount, float loan.rate, int loan.term)
{
	loan.rate = loan.rate/1200;
	return loan.amount *loan.rate*(pow((loan.rate+1), loan.term) / (pow((loan.rate + 1), loan.term) -1));
}
