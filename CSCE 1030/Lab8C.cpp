/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		March 28 1016
	Instructor:	Dr. Thompson
	Description:	write 100 randomly generated numbers to a file
*/
#include<iostream>
#include<fstream>//for file use
#include<cstdlib>//for rand function
#include<ctime>//for time

using namespace std;

int main()
{

	int count, num;// variables for random number loop

	ofstream fout;
	fout.open("random.txt");//open random.txt

	if(fout.fail())//fail check
	{
		cout << "Error opening random.txt\n";
		exit(1);
	}

	srand(time(NULL));//initiaize time

	for(count = 1; count < 100; count++)//for loop to generate numbers into the file
	{
		num = (rand() % 29) + 20;
		fout << num << endl;
	}
	
	fout.close();//close file

	return 0;
}
