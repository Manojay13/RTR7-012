#include <stdio.h>
int main(void)
{
	//variable declarations
	int iArray_mk[5][3] = { {1, 2, 3}, {2, 4, 6}, {3, 6, 9}, {4, 8, 12}, {5, 10, 15} }; //IN-LINE INITIALIZATION
	int int_size_mk;
	int iArray_size_mk;
	int iArray_num_elements_mk, iArray_num_rows_mk, iArray_num_columns_mk;

	//code
	printf("\n\n");

	int_size_mk = sizeof(int);

	iArray_size_mk = sizeof(iArray_mk);
	printf("Size Of Two Dimensional ( 2D ) Integer Array iArray_mk Is = %d\n\n", iArray_size_mk);

	iArray_num_rows_mk = iArray_size_mk / sizeof(iArray_mk[0]);
	printf("Number of Rows In Two Dimensional ( 2D ) Integer Array iArray_mk Is = %d\n\n", iArray_num_rows_mk);

	iArray_num_columns_mk = sizeof(iArray_mk[0]) / int_size_mk;
	printf("Number of Columns In Two Dimensional ( 2D ) Integer Array iArray_mk Is = %d\n\n", iArray_num_columns_mk);

	iArray_num_elements_mk = iArray_num_rows_mk * iArray_num_columns_mk;
	printf("Number of Elements In Two Dimensional ( 2D ) Integer Array iArray_mk Is = %d\n\n", iArray_num_elements_mk);

	printf("\n\n");
	printf("Elements In The 2D Array iArray_mk : \n\n");

	// *** ARRAY INDICES BEGIN FROM 0, HENCE, 1ST ROW IS ACTUALLY 0TH ROW AND 1ST COLUMN IS ACTUALLY 0TH COLUMN ***

	// *** ROW 1 ***
	printf("******* ROW 1 *******\n");
	printf("iArray_mk[0][0] = %d\n", iArray_mk[0][0]); // *** COLUMN 1 *** (0th Element) => 1
	printf("iArray_mk[0][1] = %d\n", iArray_mk[0][1]); // *** COLUMN 2 *** (1st Element) => 2
	printf("iArray_mk[0][2] = %d\n", iArray_mk[0][2]); // *** COLUMN 3 *** (2nd Element) => 3

	printf("\n\n");

	// *** ROW 2 ***
	printf("******* ROW 2 *******\n");
	printf("iArray_mk[1][0] = %d\n", iArray_mk[1][0]); // *** COLUMN 1 *** (0th Element) => 2
	printf("iArray_mk[1][1] = %d\n", iArray_mk[1][1]); // *** COLUMN 2 *** (1st Element) => 4
	printf("iArray_mk[1][2] = %d\n", iArray_mk[1][2]); // *** COLUMN 3 *** (2nd Element) => 6

	printf("\n\n");

	// *** ROW 3 ***
	printf("******* ROW 3 *******\n");
	printf("iArray_mk[2][0] = %d\n", iArray_mk[2][0]); // *** COLUMN 1 *** (0th Element) => 3
	printf("iArray_mk[2][1] = %d\n", iArray_mk[2][1]); // *** COLUMN 2 *** (1st Element) => 6
	printf("iArray_mk[2][2] = %d\n", iArray_mk[2][2]); // *** COLUMN 3 *** (2nd Element) => 9

	printf("\n\n");

	// *** ROW 4 ***
	printf("******* ROW 4 *******\n");
	printf("iArray_mk[3][0] = %d\n", iArray_mk[3][0]); // *** COLUMN 1 *** (0th Element) => 4
	printf("iArray_mk[3][1] = %d\n", iArray_mk[3][1]); // *** COLUMN 2 *** (1st Element) => 8
	printf("iArray_mk[3][2] = %d\n", iArray_mk[3][2]); // *** COLUMN 3 *** (2nd Element) => 12

	printf("\n\n");

	// *** ROW 5 ***
	printf("******* ROW 5 *******\n");
	printf("iArray_mk[4][0] = %d\n", iArray_mk[4][0]); // *** COLUMN 1 *** (0th Element) => 5
	printf("iArray_mk[4][1] = %d\n", iArray_mk[4][1]); // *** COLUMN 2 *** (1st Element) => 10
	printf("iArray_mk[4][2] = %d\n", iArray_mk[4][2]); // *** COLUMN 3 *** (2nd Element) => 15

	printf("\n\n");

	return(0);
}
