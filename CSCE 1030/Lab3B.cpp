#include<iostream>
using namespace std;

int main()
{
	double number;//number chosen by user
	int decimals;//number of decimal points dictated by user
	
	//data collection
	cout << "\n\nPlease enter your floating point number\n ";
	cin >> number;

	cout << "\nHow many decimal places would you like? \n";
	cin >> decimals;

	//set number of decimal places
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(decimals);
	
	//print out number in desired format
	cout << "\nYour number is: " << number << "\n\n";

	return 0;
}
