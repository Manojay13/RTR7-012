//
// RecursiveFunction.c
//
//
// Created by ASTROMEDICOMP on 31/05/20.
//

#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	// variable declarations
	unsigned int num_mk;

	// function prototype
	void recursive(unsigned int);

	// code
	printf("\n\n");
	printf("Enter Any Number : \n\n");
	scanf("%u", &num_mk);

	printf("\n\n");
	printf("Output Of Recursive Function : \n\n");

	recursive(num_mk);

	printf("\n\n");
	return(0);
}

void recursive(unsigned int n_mk)
{
	// code
	printf("n_mk = %d\n", n_mk);

	if (n_mk > 0)
	{
		recursive(n_mk - 1);
	}
}
