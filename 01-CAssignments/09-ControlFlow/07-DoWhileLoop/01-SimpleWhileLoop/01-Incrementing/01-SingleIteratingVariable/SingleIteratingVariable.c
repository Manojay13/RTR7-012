#include<stdio.h>//for printf()
#include<stdlib.h>//for exit()
int main(void)
{
	//variable declarations
	int i_mk;

	//code
	printf("\n\n");

	printf("Printing Digits 1 to 10 : \n\n");

	i_mk = 1;
	do
	{
		printf("\t%d\n", i_mk);
		i_mk++;
	}while (i_mk <= 10);

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
