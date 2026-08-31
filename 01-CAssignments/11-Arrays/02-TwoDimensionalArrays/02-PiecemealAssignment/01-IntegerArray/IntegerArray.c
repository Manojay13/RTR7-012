#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
int main(void)
{
	//variable declaraions
	int iArray_mk[3][5]; // 3 ROWS (0, 1, 2) AND 5 COLUMNS (0, 1, 2, 3, 4)
	int int_size_mk;
	int iArray_size_mk;
	int iArray_num_elements_mk, iArray_num_rows_mk, iArray_num_columns_mk;
	int i_mk, j_mk;

	//code
	printf("\n\n");

	int_size_mk = sizeof(int);

	iArray_size_mk = sizeof(iArray_mk);
	printf("Size Of Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_size_mk);

	iArray_num_rows_mk = iArray_size_mk / sizeof(iArray_mk[0]);
	printf("Number of Rows In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_rows_mk);

	iArray_num_columns_mk = sizeof(iArray_mk[0]) / int_size_mk;
	printf("Number of Columns In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_columns_mk);

	iArray_num_elements_mk = iArray_num_rows_mk * iArray_num_columns_mk;
	printf("Number of Elements In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_elements_mk);

	printf("\n\n");
	printf("Elements In The 2D Array : \n\n");

	// ****** PIECE-MEAL ASSIGNMENT ******
	// ****** ROW 1 ******
	iArray_mk[0][0] = 21;
	iArray_mk[0][1] = 42;
	iArray_mk[0][2] = 63;
	iArray_mk[0][3] = 84;
	iArray_mk[0][4] = 105;

	// ****** ROW 2 ******
	iArray_mk[1][0] = 22;
	iArray_mk[1][1] = 44;
	iArray_mk[1][2] = 66;
	iArray_mk[1][3] = 88;
	iArray_mk[1][4] = 110;

	// ****** ROW 3 ******
	iArray_mk[2][0] = 23;
	iArray_mk[2][1] = 46;
	iArray_mk[2][2] = 69;
	iArray_mk[2][3] = 92;
	iArray_mk[2][4] = 115;

	// *** DISPLAY ***
	for (i_mk = 0; i_mk < iArray_num_rows_mk; i_mk++)
	{
		printf("******* ROW %d *******\n", (i_mk + 1));
		for (j_mk = 0; j_mk < iArray_num_columns_mk; j_mk++)
		{
			printf("iArray_mk[%d][%d] = %d\n", i_mk, j_mk, iArray_mk[i_mk][j_mk]);
		}
		printf("\n\n");
	}

	exit(EXIT_SUCCESS);
}
