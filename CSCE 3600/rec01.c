// Author: Daniel McGartland (danielmcgartland@my.unt.edu)

#include<stdio.h>

int main()
{
	unsigned char in;
	int bi;

	printf("\n\nPlease enter a printable ASCII character \n");
	scanf("%c", &in);
	
	printf("You entered %c \n", in);
	printf("The Hexadicimal is %x \n", in);
	printf("The Decimal is %d \n", in);
	printf("The Binary is ");

	for(bi = 7; bi >= 0; bi--)
	{
		int temp = in >> bi;
		if(temp & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n\n");

	return 0;
}
