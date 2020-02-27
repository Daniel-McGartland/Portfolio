/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		4/25/16
	Instructor:	Dr. Thompson
	Description:	complete the missing code using the necessarry c-string functions and operations
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[11] ,str2[12];
	int length1, length2;

	//initialize st1 to Progeamming
	strcpy(str1, "Programming");

	cout << "Enter the word \"Programming\" at the prompt: ";
	cin  >> str2;

	//find the length of each c-string and assign the results to lengths
	length1 = strlen(str1);
	length2 = strlen(str2);

	//compare the length of each C-string and if they are the same, prints out message
	if(length1 == length2)
	{
		cout << "They have the same length, but are they the same?" << endl;
	}

	//compare the the strings and see if they are actually the same
	if(strcmp(str1, str2)== 0)
	{
		cout << "The two C-strings are the same." << endl;
	}
	else
	{
		cout << "The two C-Strings are NOT the same." << endl;
	}

	return 0;
}
