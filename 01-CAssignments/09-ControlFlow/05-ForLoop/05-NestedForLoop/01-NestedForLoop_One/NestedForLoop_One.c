#include<stdio.h> //for printf()
#include<stdlib.h> //for exit()

int main(void)
{
	//variable declarations
	int i_mk, j_mk;

	//code
	printf("\n\n");
	for(i_mk = 1; i_mk <= 10; i_mk++)
	{
		printf("i_mk = %d\n", i_mk);
		printf("------\n\n");
		for(j_mk = 1; j_mk <= 5; j_mk++)
		{
			printf("\tj_mk = %d\n", j_mk);
		}
		printf("\n\n");
	}
	exit(EXIT_SUCCESS);
}
