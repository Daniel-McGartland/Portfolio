/*	Author:		Daniel McGartland(danielMcGartland@my.unt.edu)
	Date:		Feb/15/16
	Instructor:	Dr.Thompson
	Description:	perform a simple arithmetic operation based on user input that uses loops and statments
*/
#include<iostream>
using namespace std;

int main()
{
	//header
	cout << "===================================================\n";
	cout << "	Computer science and Engineering\n";
	cout << "	 CSCE 1030 - Computer Science 1\n";
	cout << "Daniel McGartland djm0265 DanielMcGartland@my.unt.edu\n";
	cout << "===================================================\n";

	double first, second, answer;//these were made doubles to avoid incorrect answers through integer division
	char math;// for use as operator
	
	//do-while loop to ensure the integer meets criterea 
	do
	{
		cout << "Enter a number between 0 and 25\n";
		cin  >> first;
		
		//if-then staments to tell user why it doesnt meet parameters
		if(first < 0)
		{
			cout << "The number you enterd ("<<  first << ") is less than 0\n\n";
		}
		else if (first > 25)
		{
			cout << "The number you enterd ("<< first << ") is larger than 25\n\n";
		}
		else
		{
			cout << "First integer accepted\n";
		}
	}while((first > 25) || (first < 0));

	//do while loop to ensure second integer meets parameters
 	do
	{
		cout << "Enter a number between -15 and 30\n";
                cin  >> second;

                //if-then staments to tell user why it doesnt meet parameters
                if(second < -15)
                {
                        cout << "The number you enterd ("<< second << ") is less than -15\n\n";
                }
                else if (second > 30)
                {
                        cout << "The number you enterd ("<< second << ") is larger than 30\n\n";
                }
                else
                {
                        cout << "Second integer accepted\n";
                }
        }while((second > 30) || (second < -15));

	//data aquisition for operator
	cout << "choose an operator (+ - * or /)\n";
	cin  >> math;

	//switch statement to channel arithmatic operator
	switch (math)
	{
		case '+':
			answer = first + second; 
			cout << first << " + " << second << " = " << answer << endl;
			break;
		case '-':
			answer = first - second;
			cout << first << " - " << second << " = " << answer << endl;
			break;
		case '*':
			answer = first * second;
			cout << first << " * " << second << " = " << answer << endl;
			break;
		case '/':
			answer = first / second;
			cout << first << " / " << second << " = " << answer <<endl;
			break;
		default:
			cout << "that is not an operator I know \n";
	}	
	
	// if else for if the answer is positive negative or zero	
	if(answer == 0)
	{
		cout << "your answer is zero\n";
	}
	else if(answer < 0)
	{
		cout << "your answer is negative\n";
	}
	else if(answer > 0)
	{
		cout << "your answer is positive\n";
	}


	return 0;
}

