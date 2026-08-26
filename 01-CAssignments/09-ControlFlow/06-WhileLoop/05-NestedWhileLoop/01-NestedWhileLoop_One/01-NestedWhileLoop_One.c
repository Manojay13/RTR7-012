#include <stdio.h>
int main(void)
{
	//variable declarations
	int i_mk, j_mk;

	//code
	printf("\n\n");

	i_mk = 1;
	while(i_mk <= 10)
	{
		printf("i_mk = %d\n",i_mk);
		printf("--------\n\n");

		j_mk = 1;
		while (j_mk <= 5)
		{
			printf("\tj_mk = %d\n", j_mk);
			j_mk++;
		}
		i_mk++;
		printf("\n\n");
	}
	return(0);
}
