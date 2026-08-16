#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declarations
	int age_mk;

	//code
	printf("\n\n");
	printf("Enter Age:");
	scanf("%d", &age_mk);
	printf("\n\n");

	if(age_mk >= 18)
	{
		printf("Entering if-block...\n\n");
		printf("You Are Eligible For Voting !!!\n");
	}
	else
	{
		printf("Entering else-block...\n\n");
		printf("You Are NOT Eligible For Voting !!!\n\n");
	}
	printf("Bye !!!\n\n");
	exit(EXIT_SUCCESS);
}
