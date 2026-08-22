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

	//IF - ELSE - IF LADDER BEGINS FROM HERE...
	if(num_month_mk == 1) //like 'case 1'
		printf("Month Number  %d Is JANUARY !!!\n\n", num_month_mk);
	else if(num_month_mk == 2)
		printf("Month Number  %d Is FEBRUARY !!!\n\n", num_month_mk);
	else if(num_month_mk == 3)
		printf("Month Number %d IS MARCH !!!\n\n", num_month_mk);
	else if(num_month_mk == 4) 
		printf("Month Number %d IS APRIL !!!\n\n", num_month_mk);
	else if(num_month_mk == 5)
		printf("Month Number %d IS MAY !!!\n\n",num_month_mk);
	else if(num_month_mk == 6)
		printf("Month Number %d IS JUNE!!!\n\n", num_month_mk);
	else if(num_month_mk == 7)
		printf("Month Nuber %d IS JULY !!!\n\n", num_month_mk);
	else if(num_month_mk == 8)
		printf("Month Number %d IS AUGUST !!!\n\n", num_month_mk);
	else if(num_month_mk == 9)
		printf("Month Number %d IS SEPTEMBER !!!\n\n", num_month_mk);
	else if(num_month_mk == 10)
		printf("Month Number %d IS OCTOBER !!!\n\n", num_month_mk);
	else if(num_month_mk == 11)
		printf("MOnth Number %d IS NOVEMBER !!!\n\n", num_month_mk);
	else if(num_month_mk == 12)
		printf("Month Number %d IS DECEMBER !!!\n\n", num_month_mk);
	else // like 'default' ... just like 'default' is optional 9n switch-case so is
	     // 'else' in the if-else ... if-else ladder ...
		printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", num_month_mk);

	printf("If Else If Else Ladder Complete !!!\n");
	exit(EXIT_SUCCESS);
}
