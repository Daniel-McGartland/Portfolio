/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		4/25/16
	Instructor:	Dr.thompson
	Description:	change the input declaration from a c-string to a string
			when opening the input file convert the input file string to a c-string
*/
//this promgram reads some integers from a file and displays:
//the numbers, number^2, and the sum of all tnumbers read up to the point
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<cstring>
//added the cstring library

using namespace std;

int main()
{
	int x, count = 0;
	float sum = 0, avg;
	string input_file;//convert input_file c-string to be a string

	//initialize stream operator
	ifstream in_s;
	
	//get input file name
	cout << "Please enter the input file name";
	cin >> input_file;

	//open and check file
	in_s.open(input_file.c_str());//convert input_file to a c-string
	if(in_s.fail())
	{
		cout << "ERROR: Unable to open input file\n";
		exit(EXIT_FAILURE);
	}
	
	//print out table
	cout <<"\t x \t\t x^2 \t\t Current Sum \n";
	cout <<"\t === \t\t === \t\t =========== \n";

	//calculate and print running sum
	while(in_s >> x)
	{
		sum = sum + x;
		cout <<"\t " << x << "\t\t " << pow(x,2) << "\t\t " << sum << "\n";
		count++;
	}

	//calculate and print avg
	avg = sum/count;
	cout <<"\n \t The average of these " << count << " Numbers is: " << avg << endl;

	in_s.close();	//close file

	return 0;
}
