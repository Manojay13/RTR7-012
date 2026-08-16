#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declaration
	int a_mk, b_mk, p_mk;

	//code
	a_mk = 9;
	b_mk = 31;
	p_mk = 31;

	//*** First if-else PAIR ***
	printf("\n\n");

	if(a_mk < b_mk)
	{
		printf("Entering First if-block...\n\n");
		printf("A Is Less Than B!!!\n\n");
	}
	else
	{
		printf("Entering First else-block...\n\n");
		printf("A_mk Is Not Less Than B_mk!!!\n\n");
	}
	printf("First if-else Pair Done !!!\n\n");

	//*** SECOND if-else PAIR
	printf("\n\n");
	if(b_mk != p_mk)
	{
		printf("Entering Second if-block...\n\n");
		printf("B Is NOT Equal To P !!!\n\n");
	}
	else
	{
		printf("Entering Second else-block...\n\n");
		printf("B Is Equal to P !!!\n\n");
	}
	printf("Second if-else Pair Done !!!\n\n");

	exit(EXIT_SUCCESS);
}
