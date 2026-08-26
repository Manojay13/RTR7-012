#include<stdio.h>//for printf()
#include<stdlib.h>//for exit()
int main(void)
{
	//variable declarations
	int i_mk, j_mk;

	//code
	printf("\n\n");

	printf("Printing Digits 10 to 1 and 100 to 10 : \n\n");

	i_mk = 10;
	j_mk = 100;
	do
	{
		printf("\t %d \t %d\n", i_mk, j_mk);
		i_mk--;
		j_mk = j_mk - 10;
	}while (i_mk >= 1, j_mk >= 10);

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
