#include<stdio.h>// For printf()
#include<stdlib.h>// For exit()

int main(void)
{
	//variable declarations
	int i_mk;

	//code
	printf("\n\n");

	printf("Printing Digits From 10 to 1: \n\n");

	for(i_mk = 10; i_mk>=1;i_mk--)
	{
		printf("\t%d\n", i_mk);
	}

	printf("\n\n");
	exit(EXIT_SUCCESS);
}
