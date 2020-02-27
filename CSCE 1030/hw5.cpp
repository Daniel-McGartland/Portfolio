/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		4/18/2016
	Instructor:	Dr. THompson
	Description:	The first part of the 1030 crush game used to print out the board
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

void Introduction();


using namespace std;
int main()
{

	//print out for the header
	cout << "+---------------------------------------------------------+\n";
	cout << "|	   Computer Science and Engineering                |\n";
	cout << "|          CSCE 1030 - Computer Science I	           |\n";
	cout << "|  Daniel McGartland djm0265 DanielMcGartland@my.unt.edu  |\n";
	cout << "+---------------------------------------------------------+\n\n\n";

	//function call for the intro message
	Introduction();

	
	/*enum board1{};
	const int SIZE = 9;
	board1 board[SIZE][SIZE];
 	*/

	//create the array the above was my attemp at enum
	char  board[9][9];
	char L_axis = 65;//for the letter on the left axis of the board
	//fill the array
	srand(time(NULL));
	for(int i=0; i<9; i++)
	{
		for(int  j=0; j < 9; j++)
		{
			board[i][j] = (rand()%6)+33;	
		}
	}

	//board top elements
	cout << "  1 2 3 4 5 6 7 8 9\n";
	cout << "  ------------------\n";	

	//printing the array
	for(int i=0; i<9; i++)
	{
		cout << L_axis << "|";
		L_axis++;

		for(int j=0; j<9; j++)
		{	
			
			cout << board[i][j] << " ";
		}
		//right side boarder
		cout <<"|" << endl;
	}
	//board bottom elements
	cout <<"  ------------------\n";
	cout <<"  Moves: 0  Score: 0";//this is a place holder for the second half of the assignment
	
	return 0;
}

/*
	function:	introduction
	parameters:	none
	return:		none
	description:	we need to have the intro message in a function
*/
void Introduction()
{
        //print out for the introductory message
        cout << "-----------------------------------------------------------\n";
        cout << "                 WELCOME TO 1030 CRUSH                     \n";
        cout << "                                                           \n";
        cout << " This program will randomly initialize your game board     \n";
        cout << " usinga set of 6 characters (!,\",#,$,%,&) that a player   \n";
        cout << " will then attempt to match a combination of 3 or more     \n";
        cout << " characters to gain points in a finite set of moves or time\n";
        cout << "-----------------------------------------------------------\n\n";
        cout << "1030 Crush Initializing.....\n";
	return;
}
