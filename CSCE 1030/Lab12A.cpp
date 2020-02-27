/*	Author		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date		4/28/16
	Instructor	Dr. Thompson
	Description	complete the requested changes to the given code
*/
#include<iostream>
using namespace std;

int main()
{
	int num;
	char ch;
	float val;

	//declaring pointers that point to nothing
	int *pnum;
	char *pch;
	float *pval;
	
	//pointing the previous pointers to the given variables
	pnum = &num;
	pch  = &ch;
	pval = &val;

	//assigning values to the original variable through their pointers
	*pnum = 10;
	*pch  = 'D';
	*pval = 1.9;

	//printing out the values
	cout << "num is " << num << endl;
	cout << "ch is "  << ch  << endl;
	cout << "val is " << val << endl;

	return 0;
}
