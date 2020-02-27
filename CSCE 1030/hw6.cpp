/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		4/18/2016
	Instructor:	Dr. THompson
	Description:	The first part of the 1030 crush game used to print out the board
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

//global struct for running game
struct game{
char row;
int  col;
char match;
int  move;
int  score;
};

typedef char* b_ptr;
void Introduction();
void check(game& play, b_ptr *board);
void print(b_ptr *board);
void fill(b_ptr *board);
const int b_size = 9;

using namespace std;

int main()
{
	//print out for the header
	cout << "+---------------------------------------------------------+\n";
	cout << "|	   Computer Science and Engineering                |\n";
	cout << "|          CSCE 1030 - Computer Science I	           |\n";
	cout << "|  Daniel McGartland djm0265 DanielMcGartland@my.unt.edu  |\n";
	cout << "+---------------------------------------------------------+\n\n\n";

	int i; // for incrementing the array loop
	//dynamic 2-d array of death
	b_ptr *board = new b_ptr[b_size];
	for(i = 0; i < b_size; i++)
	{
		board[i] = new char [b_size];
	}
	//all the above are declarations
	
	//call the intro function
	Introduction();
	
	//create a struc play and initialize
	game play;
	play.score = 0;
	play.move  = 1;	

	// call for the board to be filled and printed
	fill(board);
	
	//while loop to play the game
	while(play.move <= 10)
	{
	cout <<"  Moves: " << play.move << " Score: " << play.score << endl;

	check(play, board);

	//intriment move
	play.move = play.move + 1;
	}

	//print the end statement
	cout << "Your scored "<< play.score << " in" << play.move << " moves\n";
	return 0;
}

/*
	function	check
	parameters	struct to play and pointer to board
	return:		none
	description 	plays the whole game through a GROSS series of nested statments and loops
*/

void check(game& play, b_ptr *board)
{
	string choice;
	string reset = "R0";//used to reset the board
	int x = 0,i=0,j=0;//used for incrementing
	int count = 0;//used for score counting
	do
	{
		cout << "Enter the Coordinate\n";
		cin  >> choice;
		play.row = choice[0]-65;
		play.col = choice[1]-48;
		
		//check if they want to reset
		if(choice == reset)
		{
			fill(board);
			x++;
		}
		else
		{	
			//check if the parameters are met
			if((play.row < 10 && play.row > -1)&&(play.col < 10 && play.col > 0))
			{	
				//make sure they typed an H or V
				do
				{	cout << "is the match vertical (V) or horizontal (H)?\n";
					cin  >> play.match;
				}while(play.match != 'H' && play.match != 'V');	
				
				//switch to check for matches in either direction from the point
				switch(play.match)
				{
					case 'V':
						for(i = play.row; i > 0; i--)
						{
							if(board[i][j] == board[play.row][play.col])
							{
								count++;
							}
						}
		
						for(i - play.row +1; i < b_size; i++)
						{	
							if(board[i][j] == board[play.row][play.col])
							{
								count++;
							}
						}
						break;	
					case 'H':
						for(j = play.col; j > 0; j--)
						{
							if(board[i][j] == board[play.row][play.col])
							{
								count++;
							}
						}

						for(j = play.col +1; j < b_size; j++)
						{
							count ++;
						}
						break;
				}
				if(count >= 3)
				{
					play.score += count;
				}					
				x++;	

			}
			else
			{
				cout << "That is not an accepted coordinate\n";
			}
		}
	}while(x < 1);
}
/*
	function:	fill
	parameters:	pointer to board
	return:		none
	Description:	fills and prints the board
*/

void fill(b_ptr *board)
{
 	//fill the array
        srand(time(NULL));
        for(int i=0; i<9; i++)
        {
                for(int  j=0; j < 9; j++)
                {
                        board[i][j] = (rand()%6)+33;
                }
        }
	print(board);
}
/*
	function:	print
	parameters: 	pointer to board
	return: 	none
	description:	prints the board
*/

void print(b_ptr *board)
{
 	char L_axis = 65;
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
