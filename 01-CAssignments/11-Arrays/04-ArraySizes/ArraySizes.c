#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	// variable declaration
	int iArray_One_mk[5];
	int iArray_Two_mk[5][3];
	int iArray_Three_mk[100][100][5];

	int num_rows_2D_mk;
	int num_columns_2D_mk;

	int num_rows_3D_mk;
	int num_columns_3D_mk;
	int depth_3D_mk;

	// code
	printf("\n\n");
	printf("Size of 1-D integer array iArray_One_mk = %lu\n", sizeof(iArray_One_mk));
	printf("Number of elements in 1-D integer array iArray_One_mk = %lu\n", (sizeof(iArray_One_mk) / sizeof(int)));

	printf("\n\n");
	printf("Size of 2-D integer array iArray_Two_mk = %lu\n", sizeof(iArray_Two_mk));

	printf("Number rows in 2-D integer array iArray_Two_mk = %lu\n", (sizeof(sizeof(iArray_Two_mk) / sizeof(iArray_Two_mk[0]))));
	num_rows_2D_mk = (sizeof(iArray_Two_mk) / sizeof(iArray_Two_mk[0]));

	printf("Number of elements (columns) in each row in 2-D integer array iArray_Two_mk = %lu\n", (sizeof(iArray_Two_mk[0]) / sizeof(iArray_Two_mk[0][0])));
	num_columns_2D_mk = (sizeof(iArray_Two_mk[0]) / sizeof(iArray_Two_mk[0][0]));

	printf("Number of elements in total in 2-D Array iArray_Two_mk = %d\n", (num_rows_2D_mk * num_columns_2D_mk));

	printf("\n\n");

	printf("\n\n");
	printf("Size of 3-D integer array iArray_Three_mk = %lu\n", sizeof(iArray_Three_mk));

	printf("Number rows in 3-D integer array iArray_Three_mk = %lu\n", (sizeof(iArray_Three_mk) / sizeof(iArray_Three_mk[0])));
	num_rows_3D_mk = (sizeof(iArray_Three_mk) / sizeof(iArray_Three_mk[0]));

	printf("Number of elements (columns) in one row in 3-D integer array iArray_Three_mk = %lu\n", (sizeof(iArray_Three_mk[0]) / sizeof(iArray_Three_mk[0][0])));
	num_columns_3D_mk = (sizeof(iArray_Three_mk[0]) / sizeof(iArray_Three_mk[0][0]));

	printf("Number of elements (depth) in one column in one row in 3-D integer array iArray_Three_mk = %lu\n", (sizeof(iArray_Three_mk[0][0]) / sizeof(iArray_Three_mk[0][0][0])));
	depth_3D_mk = (sizeof(iArray_Three_mk[0][0]) / sizeof(iArray_Three_mk[0][0][0]));
	printf("Number of elements in total in 3-D Array iArray_Three_mk = %d\n", (num_rows_3D_mk * num_columns_3D_mk * depth_3D_mk));

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
