#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *int_ptr = malloc(2 * sizeof (int));
	
	if(int_ptr == NULL)
	{
		printf("Malloc failed \n");
		exit(0);
	}

	printf("\nEnter first value: ");
	scanf("%d", &int_ptr[0]);
	printf("\nEnter second Value: ");
	scanf("%d", &int_ptr[1]);
	printf("\nYou entered %d and %d\n", int_ptr[0], int_ptr[1]);
	
	int_ptr[0] = int_ptr[0] ^ int_ptr[1];
	int_ptr[1] = int_ptr[0] ^ int_ptr[1];
	int_ptr[0] = int_ptr[0] ^ int_ptr[1];

	printf("\nThe swapped values are %d and %d\n\n", int_ptr[0], int_ptr[1]);
	free(int_ptr);
	return 0;
}
