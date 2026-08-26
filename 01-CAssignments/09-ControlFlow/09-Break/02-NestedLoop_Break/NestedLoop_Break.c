#include<stdio.h>//for printf()
#include<conio.h>//for getch()
#include<stdlib.h>//for exit()
int main(void)
{
	//variable declarations
	int i_mk, j_mk;

	//code
	printf("\n\n");

	for (i_mk = 1; i_mk <= 20; i_mk++)
	{
		for (j_mk = 1; j_mk <= 20; j_mk++)
		{
			if (j_mk > i_mk)
			{
				break;
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	exit(EXIT_SUCCESS);
}
