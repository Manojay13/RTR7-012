#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declarations
	int num_mk;

	//code
	printf("\n\n");

	printf("Enter Value For 'num_mk':");
	scanf("%d",&num_mk);

	if(num_mk < 0)
	{
		printf("Num_mk = %d Is Less Than 0 (NEGATIVE)\n\n", num_mk);
	}

	if((num_mk > 0) && (num_mk <= 100))
	{
		printf("Num_mk = %d Is Between 0 and 100.\n\n", num_mk);
	}

	if((num_mk > 100) && ( num_mk <= 200))
	{
		printf("Num_mk = %d Is Between 100 and 200\n\n", num_mk);
	}

	if((num_mk > 200) && (num_mk <= 300))
	{
		printf("Num_mk = %d Is Between 200 and 300\n\n", num_mk);
	}

	if((num_mk > 300) && (num_mk <= 400))
	{
		printf("Num_mk = %d Is Between 300 and 400\n\n", num_mk);
	}

	if((num_mk > 400) && (num_mk <= 500))
	{
		printf("Num_mk = %d Is Between 400 and 500\n\n", num_mk);
	}

	if(num_mk > 500)
	{
		printf("Num = %d Is Greater than 500. \n\n", num_mk);	
	}
	exit(EXIT_SUCCESS);
}
