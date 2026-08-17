#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declarations
	int num_mk;

	//code
	printf("\n\n");

	printf("Enter Value For 'num_mk' : ");
	scanf("%d", &num_mk);

	//IF - ELSE - IF LADDER BEGINS FROM HERE...
	if(num_mk < 0)
		printf("Num_mk = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num_mk);
	else if((num_mk > 0) && (num_mk <= 100))
		printf("Num_mk = %d Is between 0 And 100 !!!\n\n", num_mk);
	else if((num_mk > 100) && (num_mk <= 200))
		printf("Num_mk = %d Is Beween 100 And 200 !!!\n\n", num_mk);
	else if((num_mk > 200) && (num_mk <= 300))
		printf("Num_mk = %d Is Bewtween 200 And 300 !!!\n\n", num_mk);
	else if((num_mk > 300) && (num_mk <= 400))
		printf("Num_mk = %d Is Between 300 And 400 !!!\n\n", num_mk);
	else if((num_mk > 400) && (num_mk <= 500))
		printf("Num = %d Is Between 400 And 500 !!!\n\n", num_mk);
	else if(num_mk > 500)
		printf("Num = %d Is Greater Than 500 !!!\n\n", num_mk);
	else // *** THIS IS TERMINATINE 'ELSE' OF THIS 'IF - ELSE IF -ELSE' LADDER !!! ***
		printf("Invalid Value Entered !!!\n\n");

	exit(EXIT_SUCCESS);
}
