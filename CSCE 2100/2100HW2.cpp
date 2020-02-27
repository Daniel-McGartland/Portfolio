/*================================================================================================
	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Instructor:	Islam
	Date:		5/1/2019
	Description:	Find the smalles and Largest numbers you could make with a specific ammount of sticks
===============================================================================================*/

#include<iostream>
#include<vector>

using namespace std;

//to store the number of sticks required for each possible number
vector<int> StickPerNum;

//function for finding smallest number
long long SmallestSticks(int Tsticks)
{	//variables
	int MinSticks = 2;
	int MaxSticks = 7;
	int SticksLeft = Tsticks;
	int num = 1 + Tsticks / MaxSticks;
	long long smallest = 0;

	for(int Tnum = 0; Tnum < num; ++Tnum)
	{	//more variable for simplicity
		int TMinStick = max(MinSticks, SticksLeft - MaxSticks *(num -1 - Tnum));
		int TMaxStick = min(MaxSticks, SticksLeft - MinSticks *(num - 1 - Tnum));
		//excluded 0 from most significant digit 
		for(int nums = Tnum > 0 ? 0 : 1 ; nums <= 9; ++nums)
		{	//make sure there are enough sticks to make another digit
			if(StickPerNum[nums] >= TMinStick && StickPerNum[nums] <= TMaxStick)
			{
				smallest = smallest * 10 + nums;
				SticksLeft -= StickPerNum[nums];
				break;
			}
		}
	} 
	return smallest;
}


int main()
{
	int check;
	int sticks = 0, Tsticks = 0;

	//prompt to begin sticks problem
	while(sticks < 2 || sticks > 100)
	{
		cout << "Please enter the number of sticks between 2 and 100\n";
		cin  >> sticks;
	}
			
	//smallest
	//pushback values for number of sticks per digit
	Tsticks = sticks;
	StickPerNum.push_back(6);
	StickPerNum.push_back(2);
	StickPerNum.push_back(5);
	StickPerNum.push_back(5);
	StickPerNum.push_back(4);
	StickPerNum.push_back(5);
	StickPerNum.push_back(6);
	StickPerNum.push_back(3);
	StickPerNum.push_back(7);
	StickPerNum.push_back(6);

	cout << "Smallest = " << SmallestSticks(Tsticks) << endl;

	//largest
	Tsticks = sticks;
	//check to see if sticks is odd
	check = sticks % 2;
	cout << "Largest = ";
	if(check != 0)
	{
		cout << "7";
		Tsticks -= 3;
	}
	//print 1's until all sticks used
	while(Tsticks > 0)
	{
		cout << "1";
		Tsticks -=2;
	}
	cout << "\n\n";

	return 0;
}
