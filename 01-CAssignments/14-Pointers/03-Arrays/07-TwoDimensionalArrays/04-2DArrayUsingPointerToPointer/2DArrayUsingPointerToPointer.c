#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'


int main(void)
{
	//variable declarations
	int **ptr_iArray_mk = NULL; //A pointer-to-pointer to integer but can also hold base address of a 2D Array which can have any number of rows and any number of columns
	int i_mk, j_mk;
	int num_rows_mk, num_columns_mk;

	//code

	// *** ACCEPT NUMBER OF ROWS 'num_rows_mk' FROM USER ***
	printf("\n\n");
	printf("Enter Number Of Rows: ");
	scanf("%d", &num_rows_mk);

	// *** ACCEPT NUMBER OF COLUMNS 'num_columns_mk' FROM USER ***
	printf("\n\n");
	printf("Enter Number Of Columns: ");
	scanf("%d", &num_columns_mk);

	// *** ALLOCATING MEMORY TO 1D ARRAY CONSISTING OF BASE ADDRESS OF ROWS ***
	printf("\n\n");
	printf("********** MEMORY ALLOCATION TO 2D INTEGER ARRAY **********\n\n");
	ptr_iArray_mk = (int **)malloc(num_rows_mk * sizeof(int*));
	if (ptr_iArray_mk == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO %d ROWS OF 2D INTEGER ARRAY !!! EXITTING NOW...\n\n", num_rows_mk);
		exit(0);
	}
	else
		printf("MEMORY ALLOCATION TO %d ROWS OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", num_rows_mk);

	// *** ALLOCATING MEMORY TO EACH ROW WHICH IS A 1D ARRAY CONSISTING OF COLUMNS WHICH CONTAIN THE ACTUAL INTEGERS ***
	for (i_mk = 0; i_mk < num_rows_mk; i_mk++)
	{
		ptr_iArray_mk[i_mk] = (int*)malloc(num_columns_mk * sizeof(int)); //ALLOCATING MEMORY (Number Of Columns * size of 'int') TO ROW 'i_mk'
		if (ptr_iArray_mk[i_mk] == NULL) //ROW 'i_mk' MEMORY ALLOCATED ?
		{
			printf("FAILED TO ALLOCATE MEMORY TO COLUMNS OF ROW %d OF 2D INTEGER ARRAY !!! EXITTING NOW...\n\n", i_mk);
			exit(0);
		}
		else
			printf("MEMORY ALLOCATION TO COLUMNS OF ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", i_mk);
	}

	// *** FILLING UP VALUES ***
	for (i_mk = 0; i_mk < num_rows_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < num_columns_mk; j_mk++)
		{
			ptr_iArray_mk[i_mk][j_mk] = (i_mk * 1) + (j_mk * 1); // can also use: *(*(ptr_iArray_mk + i_mk) + j_mk) = (i_mk * 1) + (j_mk * 1)
		}
	}

	// *** DISPLAYING VALUES ***
	for (i_mk = 0; i_mk < num_rows_mk; i_mk++)
	{
		printf("Base Address Of Row %d: ptr_iArray_mk[%d] = %p \t At Address: %p\n", i_mk, i_mk, ptr_iArray_mk[i_mk], &ptr_iArray_mk[i_mk]);
	}

	printf("\n\n");
	for (i_mk = 0; i_mk < num_rows_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < num_columns_mk; j_mk++)
		{
			printf("ptr_iArray_mk[%d][%d] = %d \t At Address: %p\n", i_mk, j_mk, ptr_iArray_mk[i_mk][j_mk], &ptr_iArray_mk[i_mk][j_mk]); // can also use *(*(ptr_iArray_mk + i_mk) + j_mk) for value and *(ptr_iArray_mk + i_mk) + j_mk for address
		}
		printf("\n");
	}

	// *** FREEING MEMORY ALLOCATED TO EACH ROW ***
	for (i_mk = (num_rows_mk - 1); i_mk >= 0; i_mk--)
	{
		if (ptr_iArray_mk[i_mk])
		{
			free(ptr_iArray_mk[i_mk]);
			ptr_iArray_mk[i_mk] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", i_mk);
		}
	}

	// *** FREEING MEMORY ALLOCATED TO 1D ARRAY CONSISTING OF BASE ADDRESSES OF ROWS ***
	if (ptr_iArray_mk)
	{
		free(ptr_iArray_mk);
		ptr_iArray_mk = NULL;
		printf("MEMORY ALLOCATED TO ptr_iArray_mk HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	exit(EXIT_SUCCESS);
}
