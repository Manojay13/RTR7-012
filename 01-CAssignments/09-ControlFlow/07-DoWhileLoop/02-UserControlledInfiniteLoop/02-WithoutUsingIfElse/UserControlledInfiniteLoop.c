#include<stdio.h>//for printf()
#include<stdlib.h>//for exit()
int main(void)
{
	//variable declarations
	char option_mk, ch_mk = '\0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite" 
	"For Loop : \n\n");

	do
	{
		do
		{
			printf("\n");
			printf("In Loop...\n");
			ch_mk = getch(); //control flow waits for character input...
		} while (ch_mk != 'Q' && ch_mk != 'q');

		printf("\n\n");
		printf("EXITTING USER CONTROLLED INFINITE LOOP...");
		printf("\n\n");

		printf("\n\n");
		printf("DO YOU WANT TO BEGIN USER CONTROLLED INFINITE LOOP AGAIN ? ... (Y/y" 
		"- Yes, Any Other Key - No) : ");
		option_mk = getch();
	}while (option_mk == 'Y' || option_mk == 'y');

	exit(EXIT_SUCCESS);
}
