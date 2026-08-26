#include<stdio.h>//for printf()
#include<conio.h>//for getch
#include<stdlib.h>//for exit()
int main(void)
{
	//variable declarations
	int i_mk;
	char ch_mk;

	//code
	printf("\n\n");

	printf("Printing Even Numbers From 1 to 100 For Every User Input. Exitting the \n\tLoop When User Enters Character 'Q' or 'q' : \n\n");
	printf("Enter Character 'Q' or 'q' To Exit Loop : \n\n");

	for (i_mk = 1; i_mk <= 100; i_mk++)
	{
		printf("\t%d\n", i_mk);
		ch_mk = getch();
		if (ch_mk == 'Q' || ch_mk == 'q')
		{
			break;
		}
	}

	printf("\n\n");
	printf("EXITTING LOOP...");
	printf("\n\n");

	exit(EXIT_SUCCESS);
}
