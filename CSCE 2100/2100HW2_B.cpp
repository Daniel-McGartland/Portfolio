/*============================================================================================
	Author: 	Daniel McGartland (danielmcgartland@my.unt.edu)
	Instructor:	Islam
	Date:		5/1/2019
	Description:	Find out how many bottles you friend drank if he drank until he couldnt buy anymore bottles
==============================================================================================*/
#include<iostream>

using namespace std;

int main()
{
	//all necesarry variables
	int empty = -1, found = -1, need = 0;
	int total = 0, buy = 0, TotalBuy = 0;

	//gather information
	while(empty < 0 || empty > 1000){
	cout << "\nHow many bottles does he have?\n";
	cin  >> empty;
	}
	while(found < 0 || found > 1000){
	cout << "\nHow many bottles did he find?\n";
	cin  >> found;
	}
	while(need < 1 || need > 2000){
	cout << "\nHow many bottles does it take to buy a soda?\n";
	cin  >> need;
	}

	total = empty + found;
	
	while(total >= need)
	{
		buy = (total / need);
		//cout << "buy " << buy << endl;
		total = (total % need);
		//cout << "total after sell = " << total << endl;
		total = (total + buy); 
		//cout << "total after buy = " << total << endl;
		TotalBuy = (TotalBuy + buy);
		//cout << "total buy = " << TotalBuy << endl;
	}
	
	cout << "\nNumber of bottles purchased: " << TotalBuy << endl;
	return 0;
}
