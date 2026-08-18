#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declarations
	int num_month_mk;

	//code
	printf("\n\n");

	printf("Enter Number Of Month (1 to 12) : ");
	scanf("%d", &num_month_mk);

	printf("\n\n");

	switch(num_month_mk)
	{
		case 1: //like 'if'
			printf("Month Number %d Is JANUARY !!!\n\n", num_month_mk);
			break;

		case 2: //like 'else if'
			printf("Month Number %d Is FEBRUARY !!!\n\n", num_month_mk);
			break;

		case 3: //like 'else if'
			printf("Month Number %d Is March !!!\n\n", num_month_mk);
			break;

		case 4: //like 'else if'
			printf("Month Number %d Is April !!!\n\n", num_month_mk);
			break;

		case 5: //like 'else if'
			printf("Month Number %d Is May !!!\n\n", num_month_mk);
			break;

		case 6: //like 'else if'
			printf("Month Number %d Is June !!!\n\n", num_month_mk);
			break;

		case 7: //life 'else if'
			printf("Month Number %d Is July!!! \n\n",num_month_mk);
			break;

		case 8: //like 'else if'
			printf("Month Number %d Is August !!!\n\n",num_month_mk);
			break;

		case 9: //like 'else if'
			printf("Month Number %d Is Septeber !!!\n\n", num_month_mk);
			break;

		case 10: //like 'else if'
			printf("Month Number %d Is October !!!\n\n", num_month_mk);
			break;

		case 11: //like 'else if'
			printf("Month Number %d Is November !!!\n\n", num_month_mk);
			break;

		case 12: //like 'else if'
			printf("Month Number %d Is December !!!\n\n", num_month_mk);
			break;

		default: //like ending OPTIONAL 'else' ... just like terminating 'else' is
			//optional in if-else if-else ladder, so is the 'default' case optional in
			//switch-case
			break;
	}

	printf("Swith Case Block Complete !!!\n");

	exit(EXIT_SUCCESS);
}
