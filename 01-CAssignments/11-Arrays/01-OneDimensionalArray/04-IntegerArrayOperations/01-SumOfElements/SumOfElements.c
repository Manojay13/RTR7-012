#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declarations
	int iArray_mk[NUM_ELEMENTS];
	int i_mk, num_mk, sum_mk = 0;

	//code
	printf("\n\n");
	printf("Enter Integer Elements For Array iArray_mk[] : \n\n");
	for (i_mk = 0; i_mk < NUM_ELEMENTS; i_mk++)
	{
		scanf("%d", &num_mk);
		iArray_mk[i_mk] = num_mk;
	}

	for (i_mk = 0; i_mk < NUM_ELEMENTS; i_mk++)
	{
		sum_mk = sum_mk + iArray_mk[i_mk];
	}

	printf("\n\n");
	printf("Sum Of ALL Elements Of Array = %d\n\n", sum_mk);

	exit(EXIT_SUCCESS);
}
