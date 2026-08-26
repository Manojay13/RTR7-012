#include <stdio.h>//for printf()
#include<stdlib.h>//for scanf()
int main(void)
{
	//variable declarations
	int i_mk, j_mk, k_mk;

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
			printf("\t--------\n\n");

			k_mk = 1;
			do
			{
				printf("\t\tk = %d\n", k_mk);
				k_mk++;
			}while (k_mk <= 3);
			printf("\n\n");
			j_mk++;
		}while (j_mk <= 5);
		printf("\n\n");
		i_mk++;
	}while (i_mk <= 10);
    
	exit(EXIT_SUCCESS);
}
