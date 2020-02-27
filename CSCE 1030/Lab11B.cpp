/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		4/25/16
	Instructor:	Dr.Thompson
	Description:	modify given code so that it finds the best and worst time
*/
//this program will ask a runner for her/his fastest 3 times for 4
//different distances and will display them usin ga 2-d array
#include<iostream>
using namespace std;

int find_distance(int i);	//a function that return a distance based on the choice i

int main()
{
	int i,j;
	int distance[4];
	double min,max;
	double data[4][3];	//this array will keep 12 values in 4 rows and 3 columns
				//4 events and 3 times for each of the events

	//for loops to gather times
	for(i = 0; i < 4; i++)
	{
		distance[i] = find_distance(i);
		cout << "\nEnter your 3 best running times for " << distance[i] << " m\n";
		
		for(j=0;j<3;j++)
		{
			cout << "Enter a time (in seconds): ";
			cin >> data [i][j];
		}
	}

	//for loops to print the best and worst times
	cout << "Here are your best and worst times: ";
	for(i = 0; i<4; i++)
	{
		cout << "\nDistance: " << distance[i] << " m\n";

		for(j=0; j<3;j++)
		{
			min = data[i][0];//established the min and max as the first number in the array
			max = data[i][0];

			if(data[i][j] < min)
			{
				min = data[i][j];//swaps the min value for any lower values
			}
			if(data[i][j] > max)
			{			
				max = data[i][j];//swaps the max value for any higher values
			}
		}
		cout << "Best: " << min << "Worst: " << max;	//prints out the best and worst times
		cout << endl;
	}

	return 0;
}

/*
Function:	find_distance
parameters:	int i
return:	`	the various distances
description:	a switch statement to return the correct distance for the races
*/
int find_distance(int i)
{
	switch(i)
	{
		case 0://100 meters
			return 100;
			break;
		case 1://150 meters
			return 150;
			break;

		case 2://200 meters
			return 200;
			break;
		default://400 meters
			return 400;	
	}
}

