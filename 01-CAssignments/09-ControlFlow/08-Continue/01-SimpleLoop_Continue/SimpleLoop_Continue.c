#include<stdio.h>//for printf()
#include<stdlib.h>//fot exit()
int main(void)
{
	//variable declarations
	int i_mk;

	//code
	printf("\n\n");

	printf("Printing Even Numbers From 0 to 100 : \n\n");

	for (i_mk = 0; i_mk <= 100; i_mk++)
	{
		// condition for a nuber to be even number => division of number by 2 
		//leaves no remainder (remainder = 0)
		// if remainder is not 0, the number is odd number...
		if (i_mk % 2 != 0)
		{
			continue;
		}
		else
		{
			printf("\t%d\n", i_mk);
		}
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
