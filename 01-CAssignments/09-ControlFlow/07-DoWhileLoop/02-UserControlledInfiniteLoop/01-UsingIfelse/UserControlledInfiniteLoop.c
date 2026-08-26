#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	//variable declarations
	char option_mk, ch_mk = '\0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite" 
	"For Loop : \n\n");
	printf("Enter 'Y' oy 'y' To Initiate User Controlled Infinite Loop : ");
	printf("\n\n");
	option_mk = getch();
	if (option_mk == 'Y' || option_mk == 'y')
	{
		do
		{
			printf("In Loop...\n");
			ch_mk = getch(); //control flow waits for character input...
			if (ch_mk == 'Q' || ch_mk == 'q')
				break; //User Controlled Exitting From Infinite Loop
		} while (1); //Infinite Loop

		printf("\n\n");
		printf("EXITTING USER CONTROLLED INFINITE LOOP...");
		printf("\n\n");
	}
	else
		printf("You Must Press 'Y' or 'y' To Initiate The User Controlled Infinite" 
		"Loop....Please Try Again...\n\n");
	exit(EXIT_SUCCESS);
}
