/*	Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
	Date:		4/25/16
	Instructor:	Dr. mThompson
	Description:	change given code to sort integers into decsending order
*/
//sorta an array of integers using Bubble sort
#include <iostream>
using namespace std;

const int SIZE = 10;

void bubblesort(int arr[], int length);

int main()
{
	int arr[SIZE];
	
	//for loop ti gather integers
	for (int i = 0; i < SIZE;i++)
	{
		cout << "Enter an integer: ";
		cin >> arr[i];
	}

	//function call for the sort
	bubblesort(arr, SIZE);
	
	//for loop to proint the new ordered integers
	for (int a : arr)
	{
		cout << a << " ";
	}
	
	cout << endl;
	
	return 0;
}

/*
Function:	Bubblesort
parameters	int srr[and int length
return:		none
description	the bubble sorting function
*/
void bubblesort(int arr[], int length)
{
	//bubble largest number toward the right
	for (int i = length - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[j+1])//switched to inequality
			{
				//swap the numbers
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
