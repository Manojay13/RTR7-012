#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS_mk 5
#define NUM_COLUMNS_mk 5

int main(void)
{
	//variable declarations
	int *iArray_mk[NUM_ROWS_mk]; //A 2D Array which will have 5 rows and number of columns can be decided later on
	int i_mk, j_mk;

	//code
	printf("\n\n");
	printf("********** MEMORY ALLOCATION TO 2D INTEGER ARRAY **********\n\n");
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		//ROW 0 WILL HAVE (NUM_COLUMNS_mk - 0) = (5 - 0) = 5 COLUMNS...
		//ROW 1 WILL HAVE (NUM_COLUMNS_mk - 1) = (5 - 1) = 4 COLUMNS...
		//ROW 2 WILL HAVE (NUM_COLUMNS_mk - 2) = (5 - 2) = 3 COLUMNS...
		//ROW 3 WILL HAVE (NUM_COLUMNS_mk - 3) = (5 - 3) = 2 COLUMNS...
		//ROW 4 WILL HAVE (NUM_COLUMNS_mk - 4) = (5 - 4) = 1 COLUMN...
		
		//BECAUSE OF THIS, THERE IS NO CONTIGUOUS MEMORY ALLOCATION ... HENCE,
		//ALTHOUGH WE MAY USE THE DATA AS A 2D ARRAY, IT IS NOT REALLY A 2D ARRAY IN MEMORY ...
		
		iArray_mk[i_mk] = (int *)malloc((NUM_COLUMNS_mk - i_mk) * sizeof(int));
		if (iArray_mk[i_mk] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO ROW %d OF 2D INTEGER ARRAY !!! EXITTING NOW...\n\n", i_mk);
			exit(0);
		}
		else
		{
			printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", i_mk);
		}
	}

	for (i_mk = 0; i_mk < 5; i_mk++)
	{
		for (j_mk = 0; j_mk < (NUM_COLUMNS_mk - i_mk); j_mk++)
		{
			iArray_mk[i_mk][j_mk] = (i_mk * 1) + (j_mk * 1);
		}
	}

	for (i_mk = 0; i_mk < 5; i_mk++)
	{
		for (j_mk = 0; j_mk < (NUM_COLUMNS_mk - i_mk); j_mk++)
		{
			printf("iArray_mk[%d][%d] = %d \t At Address: %p\n", i_mk, j_mk, iArray_mk[i_mk][j_mk], &iArray_mk[i_mk][j_mk]);
		}
		printf("\n");
	}

	for (i_mk = (NUM_ROWS_mk - 1); i_mk >= 0; i_mk--)
	{
		if (iArray_mk[i_mk])
		{
			free(iArray_mk[i_mk]);
			iArray_mk[i_mk] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_mk);
		}
	}

	return(0);
}
