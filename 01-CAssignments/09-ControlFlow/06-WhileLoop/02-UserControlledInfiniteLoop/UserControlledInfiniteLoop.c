#include<stdio.h>// for printf()
#include<stdlib.h>// for exit()

int main(void)
{
	//variable declarations
	char option_mk, ch_mk = '\0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop: \n\n");
	printf("\n\n");
	option_mk = getch();
	if(option_mk == 'Y' || option_mk == 'y')
	{
		while(1) //Infinite Loop
		{
			printf("In Loop...\n");
			ch_mk = getch();
			if(ch_mk == 'Q' || ch_mk == 'q')
				break; //User Controlled Exiting From Infinite Loop 

		}
		printf("\n\n");
		printf("EXITING USER CONTROLLED INFINITE LOOP...");
		printf("\n\n");
	}
	else
		printf("You Must Press 'Y' or 'y' To Initiate The USer Controlled Infinite Loop..."
			"Please Try Again...\n\n");
	exit(EXIT_SUCCESS);
}
