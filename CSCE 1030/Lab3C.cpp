#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	double area, base, height;

	//data aquisition
	printf 	("Please enter the base of your triangle followed by the vertical height \n\n");
	scanf 	("%lf %lf", &base, &height);

	//calculation
	area = (1.0/2.0)*(base*height);
	printf("The area of your triangle is: %e\n\n", area);

	return 0;
}
