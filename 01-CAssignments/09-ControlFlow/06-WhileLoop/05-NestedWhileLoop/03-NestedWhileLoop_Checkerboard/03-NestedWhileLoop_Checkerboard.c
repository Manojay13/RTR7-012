#include<stdio.h>//for printf()
#include<stdlib.h>//for exit()
int main(void)
{
	//variable declarations
	int i_mk, j_mk, c_mk;

	//code
	printf("\n\n");

	i_mk = 0;
	while (i_mk < 64)
	{
		j_mk = 0;
		while (j_mk < 64)
		{
			c_mk = ((i_mk & 0x8) == 0) ^ ((j_mk & 0x8) == 0);

			if (c_mk == 0)
				printf("  ");

			if (c_mk == 1)
				printf("* ");

			j_mk++;
		}
		printf("\n\n");
		i_mk++;
	}
	exit(EXIT_SUCCESS);
}
