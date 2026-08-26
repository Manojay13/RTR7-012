#include<stdio.h>//for printf()
#include<stdlib.h>//for exit()
int main(void)
{
	//variable declarations
	int i_mk, j_mk;

	//code
	printf("\n\n");

	printf("Outer Loop Prints Odd Numbers Between 1 and 10. \n\n");
	printf("Inner Loop Prints Even Numbers Between 1 and 10 For Every Odd Number Printed By Outer Loop. \n\n");

	// condition for a number to be even number => division of number by 2 leaves no remainder (remainder = 0)
	// condition for a number to be odd number => division of number by 2 leaves remainder (remainder = 1 (usually))

	for (i_mk = 1; i_mk <= 10; i_mk++)
	{
		if (i_mk % 2 != 0) //If Number (i_mk) Is Odd..
		{
			printf("i_mk = %d\n", i_mk);
			printf("---------\n");

			for (j_mk = 1; j_mk <= 10; j_mk++)
			{
				if (j_mk % 2 == 0) //If Number (j_mk) Is Even...
				{
					printf("\tj_mk = %d\n", j_mk);
				}
				else //If Number (j_mk) Is Odd..
				{
					continue;
				}
			}
			printf("\n\n");
		}
		else //If Number (i_mk) Is Even...
		{
			continue;
		}
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
