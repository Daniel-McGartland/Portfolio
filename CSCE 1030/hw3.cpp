/*	Author:		Daniel MCGarltand (danielmcgartland@my.unt.edu)
	Date:		March/9/2016
	Instructor:	Dr. Thompson
	Description: 	Homework3 use functions to print out a user dictated trapezoid
*/

#include<iostream>
using namespace std;


//function declarations for the 4 functions
int base1();
int base2();
bool validate(int b1, int b2);
void picture(int b1, int b2);
double area_find(int b1, int b2);



int main()
{
int b1, b2;
char pic;

	cout << "=====================================================\n";
	cout << "           Computer Science and Engineering          \n";
	cout << "            CSCE 1030 - Computer science 1           \n";
	cout << "Daniel McGartland djm0265 danielmcgartland@my.unt.edu\n";
	cout << "=====================================================\n";

	//do while to check if b1 and b2 pass the criteria	
	do{
		b1 = base1();
		b2 = base2();
	}
	while((!validate(b1,b2))||(b1 > b2));
	
	//function calls for trapezoid printing and area calculation
	picture(b1,b2);
	
	area_find(b1,b2);

	return 0;
}


/*	Function: 	base1
	Parameters:	none
	return:		b1
	Description:	promps for and reads in b1
*/
int base1()
{
	int b1;	

	cout << "Enter an odd integer between 1 & 17 for base1: ";
	cin  >> b1;
	
	return b1;
}


/*	Function: 	base2
	Parameters:	none
	return:		b2
	description:	prompts for and reads in b2
*/
int base2()
{
	int b2;

	cout << "Enter an odd integer between 3 and 19 for base2: ";
	cin  >> b2;
	cout << endl;

	return b2;
}

/*	Function: 	Validate
	Parameters:	two ints for b1 and b2
	return:		a bool describing if b1 and b2 meet criteria
	description:	uses boolean expressions and if statments to check user inputs with given criteria
*/
bool validate(int b1, int b2)
{
	bool flag1 = false;
	bool flag2 = false;

	//if statement to check b1
	if( b1>=1 && b1<=17 && b1%2 != 0)
	{
		flag1 = true;
	}

	//if statement to check b2
        if( b2>=3 && b2<=19 && b2%2 != 0)
	{
		flag2 = true;
	}

	//if - else staement to check if both flags are true
	if(flag1 && flag2)
		return true;
	else
   		return false;
}

/*	Function:	picture
	parameters:	two ints representing b1 and b2
	return:		none
	Description:	uses nested for loops to print a user dictated trapzoid
*/
void picture(int b1, int b2)
{
	int image, white, row, control = b1;// first two are used for counting second two are proxies for b1
	char pic;//stores the given character
	
	
	cout << "Please enter a printable Character\n";
	cin  >> pic;
	cout << "\n\n";

	//for loop to control number of rows
	for(int row = b1; row <= b2; row+=2)
	{
		//for loop to control the white space
		for(int white = 1; white <= b2 - row; ++white)
		{
			cout << " ";
		}
		
		//for loop to control number of printed symbols
		for(int image = 1; image <= control; image++)
		{
			cout << pic;
			cout << " ";
		}
		cout << endl;
		//itterate
		control +=2;
	}
}

/*	Function:	area_find
	Parameter:	two ints representing b1 and b2
	return:		a double representing area
	Description:	uses math functions to calculate area
*/
double area_find(int b1, int b2)
{
	double area;//storage for final answer
	int h;//midpoint for the calculations to make life easier
	
	//uses math to calculate area
	h = (((b2 - b1)/2.0)+1);
	area = ((h*(b1+b2))/2.0);	
	cout << "The area of your trapezoid is: " << area << endl;
	return area;
}

