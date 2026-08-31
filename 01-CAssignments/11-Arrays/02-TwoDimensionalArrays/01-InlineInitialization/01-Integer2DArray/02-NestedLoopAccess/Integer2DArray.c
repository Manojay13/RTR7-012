#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
int main(void)
{
	//variable declaraions
	int iArray_mk[5][3] = { {1, 2, 3}, {2, 4, 6}, {3, 6, 9}, {4, 8, 12}, {5, 10, 15} }; //IN-LINE INITIALIZATION
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

	// *** ARRAY INDICES BEGIN FROM 0, HENCE, 1ST ROW IS ACTUALLY 0TH ROW AND 1ST COLUMN IS ACTUALLY 0TH COLUMN ***
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
