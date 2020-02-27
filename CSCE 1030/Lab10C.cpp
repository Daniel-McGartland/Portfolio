	
/*	Author:		Daniel McGartland (daniel.mcgartland@my.unt.edu)
	Date:           4/18/2016
        Instructor:     Dr. Thompson
        Description:    Intro to arrays: modify given code such that it passes the entire array to a function
                        instead of the indexed vale
*/

#include<iostream>
using namespace std;

//obtaiains a grade from the user and stores in in parameter grade.
void get_grade(int grades[], int size);

int main(void)
{
        int grades[5];
        int i,size;

        get_grade(grades,5);

	//givin for loop to display array
        for(i=0;i<5;i++)//displays  the array
                cout << "grades[" << i << "] =" << grades[i] << endl;

}

//void function to properly store 5 grades into array grades
void get_grade(int grades[], int size)
{
	int i;
        for(i=0; i<size; i++)
	{//for loop to read 5 grades in store them in grades
		cout << "input a grades between 0 and 100: ";
        	cin  >> grades[i];
	}
	return;
}

