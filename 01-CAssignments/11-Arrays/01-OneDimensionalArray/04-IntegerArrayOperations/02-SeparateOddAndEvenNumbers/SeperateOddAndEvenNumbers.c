#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declarations
	int iArray_mk[NUM_ELEMENTS];
	int i_mk, num_mk;

	//code
	printf("\n\n");

	// *** ARRAY ELEMENTS INPUT ***
	printf("Enter Integer Elements For Array iArray_mk[] : \n\n");
	for (i_mk = 0; i_mk < NUM_ELEMENTS; i_mk++)
	{
		scanf("%d", &num_mk);
		iArray_mk[i_mk] = num_mk;
	}

	// *** SEPARATING OUT EVEN NUMBERS FROM ARRAY ELEMENTS ***
	printf("\n\n");
	printf("Even Numbers Amongst The Array Elements Are : \n\n");
	for (i_mk = 0; i_mk < NUM_ELEMENTS; i_mk++)
	{
		if ((iArray_mk[i_mk] % 2) == 0)
		{
			printf("%d\n", iArray_mk[i_mk]);
		}
	}

	// *** SEPARATING OUT ODD NUMBERS FROM ARRAY ELEMENTS ***
	printf("\n\n");
	printf("Odd Numbers Amongst The Array Elements Are : \n\n");
	for (i_mk = 0; i_mk < NUM_ELEMENTS; i_mk++)
	{
		if ((iArray_mk[i_mk] % 2) != 0)
		{
			printf("%d\n", iArray_mk[i_mk]);
		}
	}

	exit(EXIT_SUCCESS);
}
