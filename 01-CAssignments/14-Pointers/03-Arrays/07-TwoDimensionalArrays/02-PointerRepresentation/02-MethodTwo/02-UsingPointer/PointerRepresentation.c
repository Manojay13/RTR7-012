#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'


#define NUM_ROWS_mk 5
#define NUM_COLUMNS_mk 3

int main(void)
{
	//variable declarations
	int i_mk, j_mk;
	int **ptr_iArray_mk = NULL;

	//code
	// *** EVERY ROW OF A 2D ARRAY IS AN INTEGER ARRAY ITSELF COMPRISING OF 'NUM_COLUMNS_mk' INTEGER ELEMENTS ***
	// *** THERE ARE 5 ROWS AND 3 COLUMNS IN A 2D INTEGER ARRAY. EACH OF THE 5 ROWS IS A 1D ARRAY OF 3 INTEGERS.
	// *** HENCE, EACH OF THESE 5 ROWS THEMSELVES BEING ARRAYS, WILL BE THE BASE ADDRESSES OF THEIR RESPECTIVE ROWS ***
	printf("\n\n");

	//*** MEMORY ALLOCATION ***
	ptr_iArray_mk = (int **)malloc(NUM_ROWS_mk * sizeof(int *)); //ptr_iArray_mk is the name and base address of 1D Array containing 5 integer pointers to 5 integer arrays so it is an array containing elements of data type (int *)

	if (ptr_iArray_mk == NULL)
	{
		printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS FAILED !!! EXITTING NOW...\n\n", NUM_ROWS_mk);
		exit(0);
	}
	else
	{
		printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS HAS SUCCEEDED !!!\n\n", NUM_ROWS_mk);
	}

	// *** ALLOCATING MEMORY TO EACH ROW ***
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		ptr_iArray_mk[i_mk] = (int *)malloc(NUM_COLUMNS_mk * sizeof(int)); //ptr_iArray_mk[i_mk] is the base address of ith row
		if (ptr_iArray_mk[i_mk] == NULL)
		{
			printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d FAILED !!! EXITTING NOW...\n\n", i_mk);
			exit(0);
		}
		else
		{
			printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d HAS SUCCEEDED !!!\n\n", i_mk);
		}
	}

	// *** ASSIGNING VALUES ***
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_mk; j_mk++)
		{
			*(*(ptr_iArray_mk + i_mk) + j_mk) = (i_mk + 1) * (j_mk + 1); // ptr_iArray_mk[i_mk][j_mk] = (i_mk + 1) * (j_mk + 1);
		}
	}

	// *** DISPLAYING VALUES ***
	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses: \n\n");
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_mk; j_mk++)
		{
			printf("ptr_iArray_mk[%d][%d] = %d \t \t At Address &ptr_iArray_mk[%d][%d] : %p\n", i_mk, j_mk, ptr_iArray_mk[i_mk][j_mk], i_mk, j_mk, &ptr_iArray_mk[i_mk][j_mk]);
		}
		printf("\n\n");
	}

	// *** FREEING ALLOCATED MEMORY ***
	// *** FREEING MEMORY OF EACH ROW ***
	for (i_mk = (NUM_ROWS_mk - 1); i_mk >= 0; i_mk--)
	{
		if (*(ptr_iArray_mk + i_mk)) // if(ptr_iArray_mk[i_mk])
		{
			free(*(ptr_iArray_mk + i_mk)); // free(ptr_iArray_mk[i_mk])
			*(ptr_iArray_mk + i_mk) = NULL; // ptr_iArray_mk[i_mk] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_mk);
		}
	}

	// *** FREEING MEMORY OF ptr_iArray_mk WHICH IS THE ARRAY OF 5 INTEGER POINTERS THAT IT, IT IS AN ARRAY HAVING 5 INTEGER ADDRESSES (TYPE int *) ***
	if (ptr_iArray_mk)
	{
		free(ptr_iArray_mk);
		ptr_iArray_mk = NULL;
		printf("MEMORY ALLOCATED TO ptr_iArray_mk HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	exit(EXIT_SUCCESS);
}
