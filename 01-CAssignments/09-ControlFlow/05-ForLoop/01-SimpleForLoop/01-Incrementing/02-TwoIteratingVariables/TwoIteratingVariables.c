#include<stdio.h> // for printf()
#include<stdlib.h>// for exit()

int main(void)
{
	//variable declarations
	int i_mk ,j_mk;

	//code
	printf("\n\n");

	printf("Printing Digits 1 to 1o and 10 to 100: \n\n");

	for(i_mk = 1, j_mk = 10; i_mk <=10 ,j_mk <= 100; i_mk++, j_mk= j_mk + 10)
	{
		printf("\t %d  \t %d\n", i_mk, j_mk);
	}

	printf("\n\n");
	exit(EXIT_SUCCESS);
}
