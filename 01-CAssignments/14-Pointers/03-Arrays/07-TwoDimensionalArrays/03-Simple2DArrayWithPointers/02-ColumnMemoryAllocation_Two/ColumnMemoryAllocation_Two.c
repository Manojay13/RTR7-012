#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS_mk 5
#define NUM_COLUMNS_ONE_mk 3
#define NUM_COLUMNS_TWO_mk 8

int main(void)
{
	//variable declarations
	int *iArray_mk[NUM_ROWS_mk]; //A 2D Array which will have 5 rows and number of columns can be decided later on
	int i_mk, j_mk;

	//code

	// ********** ONE (ALLOCATING MEMORY FOR AN ARRAY OF 3 INTEGERS PER ROW) **********
	printf("\n\n");
	printf("********** FIRST MEMORY ALLOCATION TO 2D INTEGER ARRAY **********\n\n");
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		iArray_mk[i_mk] = (int*)malloc(NUM_COLUMNS_ONE_mk * sizeof(int));
		if (iArray_mk[i_mk] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO ROW %d OF 2D INTEGER ARRAY !!! EXITTING NOW...\n\n", i_mk);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", i_mk);
	}

	//ASSIGNING VALUES TO 2D ARRAY ...
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_ONE_mk; j_mk++)
		{
			iArray_mk[i_mk][j_mk] = (i_mk + 1) * (j_mk + 1);
		}
	}

	//DISPLAYING 2D ARRAY ...
	printf("\n\n");
	printf("DISPLAYING 2D ARRAY: \n\n");
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_ONE_mk; j_mk++)
		{
			printf("iArray_mk[%d][%d] = %d\n", i_mk, j_mk, iArray_mk[i_mk][j_mk]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	//FREEING MEMORY ASSIGNED TO 2D ARRAY (MUST BE DONE IN REVERSE ORDER)
	for (i_mk = (NUM_ROWS_mk - 1); i_mk >= 0; i_mk--)
	{
		free(iArray_mk[i_mk]);
		iArray_mk[i_mk] = NULL;
		printf("MEMORY ALLOCATED TO ROW %d Of 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_mk);
	}

	// ********** TWO (ALLOCATING MEMORY FOR AN ARRAY OF 8 INTEGERS PER ROW) **********
	printf("\n\n");
	printf("********** SECOND MEMORY ALLOCATION TO 2D INTEGER ARRAY **********\n\n");
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		iArray_mk[i_mk] = (int*)malloc(NUM_COLUMNS_TWO_mk * sizeof(int));
		if (iArray_mk[i_mk] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO ROW %d OF 2D INTEGER ARRAY !!! EXITTING NOW...\n\n", i_mk);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", i_mk);
	}

	//ASSIGNING VALUES TO 2D ARRAY ...
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_TWO_mk; j_mk++)
		{
			iArray_mk[i_mk][j_mk] = (i_mk + 1) * (j_mk + 1);
		}
	}

	//DISPLAYING 2D ARRAY ...
	printf("\n\n");
	printf("DISPLAYING 2D ARRAY: \n\n");
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_TWO_mk; j_mk++)
		{
			printf("iArray_mk[%d][%d] = %d\n", i_mk, j_mk, iArray_mk[i_mk][j_mk]);
		}
		printf("\n\n");
	}
	printf("\n\n");

	//FREEING MEMORY ASSIGNED TO 2D ARRAY (MUST BE DONE IN REVERSE ORDER) [INDEX: 0.1.18]
	for (i_mk = (NUM_ROWS_mk - 1); i_mk >= 0; i_mk--)
	{
		free(iArray_mk[i_mk]);
		iArray_mk[i_mk] = NULL;
		printf("MEMORY ALLOCATED TO ROW %d Of 2D INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_mk); 
	}

	return(0);
}
