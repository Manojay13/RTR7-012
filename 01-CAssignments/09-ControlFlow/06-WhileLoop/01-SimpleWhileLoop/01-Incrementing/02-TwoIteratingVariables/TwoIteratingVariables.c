#include<stdio.h> //for printf()
#include<stdlib.h> //for exit()

int main(void)
{
	//variable declarations
	int i_mk, j_mk;

	//code
	printf("\n\n");

	printf("Pring Digits 1 to 10 and 10 to 100 : \n\n");
	i_mk = 1;
	j_mk = 1;

	while(i_mk <= 10, j_mk <= 100)
	{
		printf("\t %d \t %d\n", i_mk, j_mk);
		i_mk++;
		j_mk = j_mk + 10;
	}

	printf("\n\n");
	exit(EXIT_SUCCESS);
}
