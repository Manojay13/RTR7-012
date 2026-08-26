#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	//variable declarations
	int i_mk, j_mk;

	//code
	printf("\n\n");

	i_mk = 1;
	do
	{
		printf("i_mk = %d\n", i_mk);
		printf("--------\n\n");

		j_mk = 1;
		do
		{
			printf("\tj_mk = %d\n", j_mk);
			j_mk++;
		}while (j_mk <= 5);
		i_mk++;
		printf("\n\n");
	}while (i_mk <= 10);
	exit(EXIT_SUCCESS);
}
