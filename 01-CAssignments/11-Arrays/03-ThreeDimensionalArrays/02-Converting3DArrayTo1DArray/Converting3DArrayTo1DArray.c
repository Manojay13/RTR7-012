#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3
#define DEPTH 2

int main(void)
{
	//variable declaraions

	//IN-LINE INITIALIZATION
	int iArray_mk[NUM_ROWS][NUM_COLUMNS][DEPTH] = { { { 9, 18 }, { 27, 36 }, { 45, 54 } },
																							{ { 8, 16 }, { 24, 32 }, { 40, 48 } },
																							{ { 7, 14 }, { 21, 28 }, { 35, 42 } },
																							{ { 6, 12 }, { 18, 24 }, { 30, 36 } },
																							{ { 5, 10 }, { 15, 20 }, { 25, 30 } } };
	int i_mk, j_mk, k_mk;

	int iArray_1D_mk[NUM_ROWS * NUM_COLUMNS * DEPTH]; // 5 * 3 * 2 ELEMENTS => 30 ELEMENTS IN 1D ARRAY

	//code

	// ****** DISPLAY 3D ARRAY ******
	printf("\n\n");
	printf("Elements In The 3D Array iArray_mk : \n\n");
	for (i_mk = 0; i_mk < NUM_ROWS; i_mk++)
	{
		printf("******* ROW %d *******\n", (i_mk + 1));
		for (j_mk = 0; j_mk < NUM_COLUMNS; j_mk++)
		{
			printf("******* COLUMN %d *******\n", (j_mk + 1));
			for (k_mk = 0; k_mk < DEPTH; k_mk++)
			{
				printf("iArray_mk[%d][%d][%d] = %d\n", i_mk, j_mk, k_mk, iArray_mk[i_mk][j_mk][k_mk]);
			}
		}
		printf("\n");
	}

	// ****** CONVERTING 3D TO 1D ******
	for (i_mk = 0; i_mk < NUM_ROWS; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS; j_mk++)
		{
			for (k_mk = 0; k_mk < DEPTH; k_mk++)
			{
				iArray_1D_mk[(i_mk * NUM_COLUMNS * DEPTH) + (j_mk * DEPTH) + k_mk] = iArray_mk[i_mk][j_mk][k_mk];
			}
		}
	}

	// ****** DISPLAY 1D ARRAY ******
	printf("\n\n\n\n");
	printf("Elements In The 1D Array iArray_1D_mk : \n\n");
	for (i_mk = 0; i_mk < (NUM_ROWS * NUM_COLUMNS * DEPTH); i_mk++)
	{
		printf("iArray_1D_mk[%d] = %d\n", i_mk, iArray_1D_mk[i_mk]);
	}

	return(0);
}
