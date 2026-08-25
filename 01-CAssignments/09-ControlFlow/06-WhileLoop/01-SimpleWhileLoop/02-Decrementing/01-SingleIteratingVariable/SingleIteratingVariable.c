#include<stdio.h> //for printf()
#include<stdlib.h> //for exit()

int main(void)
{
	//variable declarations
	int i_mk;

	//code
	printf("\n\n");

	printf("Printing Digits 10 to 1 : \n\n");

	i_mk = 10;
	while(i_mk >= 1)
	{
		printf("\t%d\n", i_mk);
		i_mk--;
	}
	printf("\n\n");
	exit(EXIT_SUCCESS);
}
