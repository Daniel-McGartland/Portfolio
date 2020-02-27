/*	Author:		Daniel McGartland(DanielMcGartland@my.unt.edu)
	Date:		Feb/22/16
	Instructor:	Dr. Thompson
	Description:	Change the Given code to use an ENUM 
*/
#include<iostream>
using namespace std;
//enumeration type
enum DIRECTION {UP = 'i', DOWN = 'k', LEFT = 'j', RIGHT = 'l'};

int  main()
{
	//data aquisition
	char dir;
	cout << "Enter the direction you would like to move (i,j,k, or l)\n";
	cin  >> dir;
	
	//if else statements to inform player what direction they moved
	if(dir == UP)
	{
		cout << "You moved up!\n\n";
	}
	else if(dir == DOWN)
	{
		cout << "You moved down!\n\n";
	}
	else if(dir == LEFT)
	{
		cout << "You moved left!\n\n";
	}
	else if(dir == RIGHT)
	{
		cout << "You moved right!\n\n";
	}
	else
	{
		cout << "Error: Not an accepted response";
	}

	return 0;
}
