#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define NUM_ROWS_mk 5
#define NUM_COLUMNS_mk 3

int main(void)
{
	//variable declarations
	int iArray_mk[NUM_ROWS_mk][NUM_COLUMNS_mk];
	int i_mk, j_mk;

	//code
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_mk; j_mk++)
		{
			iArray_mk[i_mk][j_mk] = (i_mk + 1) * (j_mk + 1);
		}
	}

	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses: \n\n");
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_mk; j_mk++)
		{
			printf("iArray_mk[%d][%d] = %d \t \t At Address: %p\n", i_mk, j_mk, iArray_mk[i_mk][j_mk], &iArray_mk[i_mk][j_mk]);
		}
		printf("\n\n");
	}

	exit(EXIT_SUCCESS);
}
