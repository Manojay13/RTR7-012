#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declarations
	int a_mk;

	//code
	printf("\n\n");

	a_mk = 5;
	if(a_mk) // Non-zero Positive value
	{
		printf("if-block 1: 'A_mk' Exists And Has Value = %d !!!\n\n", a_mk);
	}

	a_mk = -5;
	if(a_mk) //Non-zero Negative value
	{
		printf("if-block 2 : 'A_mk' Exists And Has Value = %d !!!\n\n", a_mk);
	}

	a_mk = 0;
	if(a_mk) // Zero Value
	{
		printf("if-block 3 : 'A_mk' Exists And Has Value = %d!!!\n\n", a_mk);
	}

	printf("All Three if-statements Are Done !!!\n\n");

	exit(EXIT_SUCCESS);
}
