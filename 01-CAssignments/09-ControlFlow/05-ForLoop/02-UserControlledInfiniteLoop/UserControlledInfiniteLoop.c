#include<stdio.h>// for printf()
#include<stdlib.h>//for exit()
#include<conio.h>//for getch()
		  
int main(void)
{
	//variable declarations
	char option_mk, ch_mk = '\0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, ENter 'Q' or 'q'  To Quit the Infinite For Loop:\n\n");

	printf("Enter 'Y' or 'y' To Initiate User Controlled Infinite Loop : ");
	printf("\n\n");
	option_mk = getch();
	if(option_mk == 'Y' || option_mk == 'y')
	{
		for(;;) //Infinite Loop
		{
			printf("In Loop...\n");
			ch_mk = getch();
			if(ch_mk == 'Q' || ch_mk =='q')
				break; //User Controlled Exiting From Infinite Loop
		}
	}

	printf("\n\n");
	printf("EXITING USER CONTROLLED INFINITE LOOP...");
	printf("\n\n");

	exit(EXIT_SUCCESS);
}
