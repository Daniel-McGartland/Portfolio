/* =========================================================================================================
Author: 	Daniel McGartland(danielmcgartland@my.unt.edu)
Date: 		3/10/2019
Instructor:	Islam
Description:	create a program to instruct someone on how to get a specific ammount of water using 2 jugs
===========================================================================================================*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//print out for completed small to big cycles
void print1(int count)
{
	while(count > 0)
	{
		cout << "fill small jug\n";
		cout << "pour small jug into large jug\n";
		cout << "if large jug is full empty it and pour the small one into it again\n\n";
		count--;
	}
}
//print for completed big to small cycles
void print2(int count)
{
	while(count > 0)
	{
		cout << "fill large jug\n";
		cout << "Pour large jug into small jug\n";
		cout << "empty small jug\n";
		cout << "pour large jug into small jug\n\n";
		count--;
	}
}
int main()
{
 	int temps, tempb, big, small, need;

        //get the information in
        cout << "\nPlease enter the size of your first Jug\n";
        cin  >> temps;
	//check if non-zero possitive int
	if(temps < 1)
	{
		cout << "that is not an accepted jug size\n";
		exit(0); 
	}
        cout << "Please enter the size of your second jug\n";
        cin  >> tempb;
	//check if non-zero possitive int
	if(tempb < 1)
	{
		cout << "that is not an accepted jug size\n";
		exit(0);
	}
        cout << "What ammount of water do you need?\n";
        cin  >> need;
	//check if non zero positive int
	if(need < 1)
	{
		cout << "that is not an accepted water quantity\n";
		exit(0);
	}
        //check if the total is too large
        if(need > (temps + tempb))
        {
                cout << "Sorry that amount is too large\n";
        }
	
	//assign values to more easily used variable
        if(temps >= tempb)
        {
                big = temps;
                small = tempb;
        }
        else
        {
                big = tempb;
                small = temps;
        }
	temps = 0;
	tempb = 0;

	int count = 0;
	int space = 0;

	//begin process small to large
	while (count != 10)
	{
		//fill small jug
		temps = small;
		if((temps + tempb)== need)
		{
			print1(count);
			cout << "Fill small jug\n";
			cout << "target reached\n";
			exit(0);
		}
		
		//dump small into large
		if((tempb + temps) <= big)
		{
			tempb = (tempb + temps);
			temps = 0;
		}
		else
		{
			space = big - tempb;
			tempb = big;
			temps = (temps - space);
			if(temps < 0)
			{
				temps = 0;
			}
		}
		if((temps + tempb)== need)
                {
			print1(count);
                        cout << "Fill small jug\n";
			cout << "Pour small jug into Large jug\n";
                        cout << "target reached\n";
                        exit(0);
                }
		
		//empty large jug
		if(tempb == big)
		{
			tempb = 0;

			if((temps + tempb)== need)
                	{
				print1(count);
                        	cout << "Fill small jug\n";
				cout << "pour small jug into Large jug\n";
				cout << "empty large jug\n";
                        	cout << "target reached\n";
                        	exit(0);
                	}
			
			//pour small into large
			if((tempb + temps)<= big)
			{
				tempb = (tempb + temps);
				temps = 0;
			}
			else
			{
				space = big - tempb;
				tempb = big;
				temps = (temps - space);
				if(temps < 0)
				{
					temps = 0;
				}
			}
			if((temps + tempb)== need)
                	{
				print1(count);
                        	cout << "Fill small jug\n";
				cout << "Pour small jug into Large jug\n";
				cout << "empty large jug\n";
				cout << "Pour small jug into Large jug\n";
                        	cout << "target reached\n";
                        	exit(0);
                	}
		}
		count++;
	}
	
	//reset to try large into small
	count = 0;
	temps = 0;
	tempb = 0;

	//begin big into small process
	while(count != 8)
	{
	
		//fill big jug
		tempb = big;
		if((temps + tempb)== need)
                {
			print2(count);
                        cout << "Fill large jug\n";
                        cout << "target reached\n";
                        exit(0);
                }

		//pour large into small
		temps = small;
		tempb = (tempb - small);
		if(tempb < 0)
		{
			tempb =0;
		}
		if((temps + tempb)== need)
                {
			print2(count);
                        cout << "Fill large jug\n";
			cout << "Pour Large jug into small jug\n";
                        cout << "target reached\n";
                        exit(0);
                }

		//empty small jug
		temps = 0;
		if((temps + tempb)== need)
                {
			print2(count);
                        cout << "Fill large jug\n";
			cout << "pour large jug into small jug\n";
			cout << "empty small jug\n";
                        cout << "target reached\n";
                        exit(0);
                }
		
		//pour large into small
		if(tempb <= small)
		{
			temps = tempb;
			tempb = (tempb - temps);
			if(tempb < 0)
			{
				tempb =0;
			}
		}
		else
		{
			temps = small;
			tempb = (tempb - small);
			if(tempb < 0)
			{
				tempb =0;
			}
		}
		if((temps + tempb)== need)
                {
			print2(count);
                        cout << "Fill large jug\n";
			cout << "pour large jug into small\n";
			cout << "empty small jug\n";
			cout << "pour large jug into small\n";
                        cout << "target reached\n";
                        exit(0);
                }
		count ++;
	}

	cout << "Sorry that quantity is not achievable\n";
	return 0;
}
