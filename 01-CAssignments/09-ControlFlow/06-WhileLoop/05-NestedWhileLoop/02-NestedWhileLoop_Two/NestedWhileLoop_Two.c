#include<stdio.h>//for printf()
#include<stdlib.h>//for exit()
int main(void)
{
	//variable declarations
	int  i_mk, j_mk, k_mk;

	//code
	printf("\n\n");

	i_mk = 1;
	while (i_mk <= 10)
	{
		printf("i_mk = %d\n",  i_mk);
		printf("--------\n\n");

		j_mk = 1;
		while (j_mk <= 5)
		{
			printf("\tj_mk = %d\n", j_mk);
			printf("\t--------\n\n");

			k_mk = 1;
			while (k_mk <= 3)
			{
				printf("\t\tk_mk = %d\n", k_mk);
				k_mk++;
			}
			printf("\n\n");
			j_mk++;
		}
		printf("\n\n");
		i_mk++;
	}
	exit(EXIT_SUCCESS);
}
