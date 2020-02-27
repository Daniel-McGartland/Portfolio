/*	Daniel McGartland
	djm0265
	Csce1030 Dr. Thompson
	Programming Assignment 1
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	
	double initial_height, initial_velocity;// user input data 
	double ground, max_height;//output variables
	const int gravity = (-16);// constant for gravity

	//Header
	cout << "\t==========================================================";
	cout << "\n\tComputer Science and engineering\n";
	cout << "\tCSCE 1030 - Computer Science 1\n";
	cout << "\tDaniel McGartland     djm0265     djm0265@my.unt.edu\n";
	cout << "\t==========================================================\n\n";

	//initial value inputs
	cout << "\nEnter Initial height of s0 in feet: \n";
	cin >> initial_height;

	cout << "\nEnter Initial velocity of v0 in feet/sec: \n";
	cin >> initial_velocity;

	//change to 2 decilmal points
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//calculation for maximum height
	max_height = (-pow(initial_velocity,2)+ 4 * gravity * initial_height)/(4*gravity);	

	//calculation for time until ground`
	ground = (-initial_velocity - sqrt(pow(initial_velocity,2) - (4 * gravity * initial_height)))/(2 * gravity);

	//print answer
	cout << "The Maximum height of the projectile is: " << max_height <<endl;
	cout << "It takes " << ground << " seconds for the projectile to hitthe ground\n\n";
	
	return 0;
}
