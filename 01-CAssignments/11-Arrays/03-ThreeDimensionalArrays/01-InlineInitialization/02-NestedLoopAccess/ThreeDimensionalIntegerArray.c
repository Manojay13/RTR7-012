#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()
int main(void)
{
	//variable declaraions
	//IN-LINE INITIALIZATION
	int iArray_mk[5][3][2] = { { { 9, 18 }, { 27, 36 }, { 45, 54 } },
							{ { 8, 16 }, { 24, 32 }, { 40, 48 } },
							{ { 7, 14 }, { 21, 28 }, { 35, 42 } },
							{ { 6, 12 }, { 18, 24 }, { 30, 36 } },
							{ { 5, 10 }, { 15, 20 }, { 25, 30 } } };
	int int_size_mk;
	int iArray_size_mk;
	int iArray_num_elements_mk, iArray_width_mk, iArray_height_mk, iArray_depth_mk;
	int i_mk, j_mk, k_mk;

	//code
	printf("\n\n");

	int_size_mk = sizeof(int);

	iArray_size_mk = sizeof(iArray_mk);
	printf("Size Of Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_size_mk);

	iArray_width_mk = iArray_size_mk / sizeof(iArray_mk[0]);
	printf("Number of Rows (Width) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_width_mk);

	iArray_height_mk = sizeof(iArray_mk[0]) / sizeof(iArray_mk[0][0]);
	printf("Number of Columns (Height) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_height_mk);

	iArray_depth_mk = sizeof(iArray_mk[0][0]) / int_size_mk;
	printf("Depth In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_depth_mk);

	iArray_num_elements_mk = iArray_width_mk * iArray_height_mk * iArray_depth_mk;
	printf("Number of Elements In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", iArray_num_elements_mk);

	printf("\n\n");
	printf("Elements In Integer 3D Array : \n\n");

	for (i_mk = 0; i_mk < iArray_width_mk; i_mk++)
	{
		printf("******* ROW %d *******\n", (i_mk + 1));
		for (j_mk = 0; j_mk < iArray_height_mk; j_mk++)
		{
			printf("******* COLUMN %d *******\n", (j_mk + 1));
			for (k_mk = 0; k_mk < iArray_depth_mk; k_mk++)
			{
				printf("iArray_mk[%d][%d][%d] = %d\n", i_mk, j_mk, k_mk, iArray_mk[i_mk][j_mk][k_mk]);
			}
			printf("\n");
		}
		printf("\n\n");
	}

	exit(EXIT_SUCCESS);
}
