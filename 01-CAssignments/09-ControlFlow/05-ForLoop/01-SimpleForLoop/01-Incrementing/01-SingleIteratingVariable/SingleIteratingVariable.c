#include<stdio.h>// for printf()
#include<stdlib.h>// for exit()

int main(void)
{
	//variable declarations
	int i_mk;

	//code
	printf("\n\n");
	printf("Printing Digits 1 to 10 : \n\n");

	for(i_mk = 1; i_mk <=10; i_mk++)
	{
		printf("\t%d\n",i_mk);
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
