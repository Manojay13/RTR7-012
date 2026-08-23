#include<stdio.h>// for printf()
#include<conio.h>// for getch()
#include<stdlib.h>// for exit()

int main(void)
{
	//variable declarations
	int a_mk,b_mk;
	int result_mk;

	char option_mk, option_division_mk;

	//code
	printf("\n\n");

	printf("Enter Value For 'A_mk' : ");
	scanf("%d", &a_mk);

	printf("Enter Value For 'B_mk' : ");
	scanf("%d", &b_mk);

	printf("Enter Option In Character : \n\n");
	printf("'A' or 'a' For Addition : \n");
	printf("'S' or 's' For Substraction: \n");
	printf("'M' or 'm' For Multiplication: \n");
	printf("'D' or 'd' For Division: \n");

	printf("Enter Option : ");
	option_mk = getch();

	if(option_mk == 'A' || option_mk == 'a')
	{
		result_mk = a_mk + b_mk;
		printf("Addition Of A = %d  And B = %d Gives Result %d !!!\n\n", a_mk, b_mk, result_mk);
	}
	else if(option_mk == 'S' || option_mk == 's')
	{
		if(a_mk >= b_mk)
		{
			result_mk = a_mk - b_mk;
			printf("Substraction Of A_mk = %d From B_mk = %d Gives Result %d !!!\n\n", a_mk, b_mk, result_mk);
		}
		else
		{
			result_mk = b_mk - a_mk;
			printf("Substraction  Of B_mk = %d From A_mk = %d Gives Result %d !!!\n\n", b_mk, a_mk, result_mk);
		}
	}
	else if(option_mk == 'M' || option_mk == 'm')
	{
		result_mk = a_mk * b_mk;
		printf("Multiplicatiom Of A_mk = %d and B_mk = %d Gives Result %d  !!!\n\n", a_mk, b_mk ,result_mk);
	}
	else if(option_mk == 'D' || option_mk == 'd' || option_mk == '/')
	{
		printf("Enter Option In Character : \n\n");
		printf("'Q' or 'w' or '/' For Quotient Upon Division : \n");
		printf("'R' or 'r' or '%' For Remainder Upon Division: \n");

		printf("Enter Option : ");
		option_division_mk = getch();

		printf("\n\n");

		if(option_division_mk == 'Q' || option_division_mk == 'q' || option_division_mk == '/')
		{
			if( a_mk >= b_mk)
			{
				result_mk = a_mk / b_mk;
				printf("Division Of A_mk = %d By B_mk = %d Gives Quotient = %d !!!\n\n", a_mk, b_mk, result_mk);
			}
			else
			{
				result_mk = b_mk / a_mk;
				printf("Division Of B_mk = %d By A_mk = %d Gives Quotient = %d !!!\n\n", b_mk, a_mk, result_mk);

			}
		}
		else if(option_division_mk == 'R' || option_division_mk == 'r' || option_division_mk == '%')
		{
			if(a_mk >= b_mk)	
			{
				result_mk = a_mk % b_mk;
				printf("Division Of A_mk = %d and B_mk = %d Gives Remainder = %d", a_mk, b_mk, result_mk);
			}
			else
			{
				result_mk = b_mk % a_mk;
				printf("Division Of B_mk = %d and A_mk = %d Gives Remainder = %d ", b_mk, a_mk, result_mk);
			}
		}
		else
		{
			printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n",option_division_mk);
		}
	}
	else 
		printf("Invalid Character %c Entered !!! Please Try Again...\n\n", option_mk);

	printf("If Else If Else Ladder Complete !!!\n");
	exit(EXIT_SUCCESS);
}
