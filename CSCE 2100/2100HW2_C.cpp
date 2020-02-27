/*=====================================================================================================
	Author: 	Daniel McGartland (danielmcgartland@my.unt.edu)
	Instructor:	Islam
	Date:		5/1/2019
	Description: 	finding the first magic number equal to or greater than a given number
====================================================================================================*/
#include<iostream>

using namespace std;

int main()
{
	//variables for numbers
	int num, tnum;
	int total;
	int count, Tcount;
	
	//gather the users number
	cout << "\nPlease enter the number you wish to check for magic\n";
	cin  >> num;
	
	count = num;

	//loop until you find a magic number
	while(total != 0)
	{	
		total = 0;
		Tcount = count;
		
		//find sum of all digits
		while(Tcount > 0)
		{
			tnum = Tcount %10;
			Tcount /= 10;
			total += tnum;
		}

		//check if count number is magic
		if(count % total == 0){
			total = 0;
		}
		//increment
		count +=1;
	}
	cout << "\nThe first magic number greater than or equal to (" << num << ") is (" << count -1 << ")\n";
}
