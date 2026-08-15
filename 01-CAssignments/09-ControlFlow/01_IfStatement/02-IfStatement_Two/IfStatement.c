#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declaration
	int age_mk;

	//code
	printf("\n\n");
	printf("Enter Age: ");
	scanf("%d", &age_mk);

	if(age_mk >= 18)
		printf("You Are Eligible For Voting !!!\n\n");
	exit(EXIT_SUCCESS);
}
