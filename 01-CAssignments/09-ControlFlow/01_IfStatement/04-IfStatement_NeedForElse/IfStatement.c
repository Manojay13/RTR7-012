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

	if(age_mk >= 18)
		printf("You are Eligible For Voting !!!\n\n");
	printf("You Are NOT Eligible For Voting !!!\n\n");
	exit(EXIT_SUCCESS);
}
