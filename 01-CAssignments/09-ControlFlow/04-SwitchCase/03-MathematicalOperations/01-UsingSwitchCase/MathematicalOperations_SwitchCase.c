#include<stdio.h>// for printf()
#include<conio.h>// for getch()
#include<stdlib.h>//for exit()

int main(void)
{
	//variable declarations
	int a_mk, b_mk;
	int result_mk;

	char option_mk, option_division_mk;

	//code
	printf("\n\n");

	printf("Enter Value For 'A' : ");
	scanf("%d", &a_mk);

	printf("Enter Value For 'B' : ");
	scanf("%d", &b_mk);

	printf("Enter the Option In Character: \n\n");
	printf("'A' or 'a' For Addition : \n\n");
	printf("'S' or 's' For Substraction : \n\n");
	printf("'M' or 'm' For Multiplication: \n\n");
	printf("'D' or 'd' For Multiplication: \n\n");


	printf("Enter Option: ");
	option_mk = getch();

	printf("\n\n");

	switch(option_mk)
	{
		//FALL THROUGH CONDITION  For 'A' and 'a'
		case 'A':
		case 'a':
			result_mk = a_mk + b_mk;
			printf("Addition Of A_mk= %d And B_mk = %d Gives Result %d !!!\n\n", a_mk, b_mk, result_mk);
			break;

		//FALL THROUGH CONDITION For 'S' and 's'
		case 'S':
		case 's':
			result_mk = a_mk - b_mk;
			printf("Substraction Of A_mk = %d and B_mk = %d Gives Result %d !!!\n\n", a_mk ,b_mk ,result_mk);
			break;

		//FALL THROGH CONDITION FOR 'M' and 'm'
		case 'M':
		case 'm':
			result_mk = a_mk * b_mk;
			printf("Multiplication Of A_mk = %d and B_mk = %d Gives Result %d !!!\n\n", a_mk, b_mk, result_mk);		
			break;

		//FALL THROUGH CONDTION For 'D' and 'd'
		case 'D':
		case 'd':
			printf("Enter Option In Character : \n\n");;
			printf("'Q' or 'q' or '/' For Quotiemt Upon Division: \n");
			printf("'R' and 'r' or '%' FOr Remainder Upon Division: \n");

			printf("Enter the Option : ");
			option_division_mk = getch();

			printf("\n\n");

			switch(option_division_mk)
			{
				//FALL THOUGH CONDTION FOR 'Q' and 'q' and '/'
				case 'Q':
				case 'q':
				case '/':
					if(a_mk >= b_mk)
					{
						result_mk = a_mk /b_mk;
						printf("Division of A_mk=%d By B_mk= %d Gives Quotient = %d!!!\n\n", a_mk, b_mk ,result_mk);
					}
					else
					{
						result_mk = b_mk / a_mk;
						printf("Division of B_mk=%d By A_mk = %d Gives Quotient = %d !!!\n\n", a_mk, b_mk, result_mk);
					}
					break; //'break' of case 'Q' or case 'q' or case '/'


				//FALL THROUGH CONDITION FOR 'R' and 'r' and '%'
				case 'R':
				case 'r':
				case '%':
					if( a_mk >= b_mk)
					{
						result_mk = a_mk % b_mk;
						printf("Division of A_mk = %d By B_mk =%d Gives Remainder = %d !!!\n\n", a_mk, b_mk, result_mk);
					}
					else
					{
						result_mk = b_mk % a_mk;
						printf("Division Of B_mk = %d By A_mk = %d Gives Remainder = %d !!!\n\n", b_mk , a_mk, result_mk);
					}
					break; // 'break' of case 'R' or case 'r' or case '%d'

				default:// 'default' case for switch(option_division_mk'
					printf("Invalid Character %c Entered For Division !!! "
					       "Please Try Again...\n\n", option_division_mk);
				break;//'break' of 'default' of switch(option_division_mk)
			}//Ending Curly Braces for option_division_mk
			break;//'break'  of case 'D'  or case 'd'
		default:// 'default' case for switch (option_mk'
			printf("Invalid Character %c ENterd !!! Please Try again..\n\n", option_mk);
			break;

	}//ending curly braves of switch (option)
	 
	printf("Switch case block complete");
	exit(EXIT_SUCCESS); 
}
