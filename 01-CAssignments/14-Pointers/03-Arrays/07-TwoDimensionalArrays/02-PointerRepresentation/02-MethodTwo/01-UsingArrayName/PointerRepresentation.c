#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
	//variable declarations
	int iArray_mk[NUM_ROWS][NUM_COLUMNS];
	int i_mk, j_mk;

	//code
	// *** NAME OF AN ARRAY ITSELF IS ITS BASE ADDRESS ***
	// *** HENCE, 'iArray_mk' IS BASE ADDRESS OF 2D INTEGER ARRAY iArray_mk[][] ***
	// iArray_mk[5][3] => iArray_mk IS A 2D ARRAY HAVING 5 ROWS AND 3 COLUMNS. EACH OF THESE 5 ROWS IS A 1D INTEGER ARRAY OF 3 INTEGERS ***
	for (i_mk = 0; i_mk < NUM_ROWS; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS; j_mk++)
		{
			*(*(iArray_mk + i_mk) + j_mk) = (i_mk + 1) * (j_mk + 1); // 'iArray_mk[i_mk]' Can Be Treated As 1D Array Using Pointers
		}
	}

	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses: \n\n");
	for (i_mk = 0; i_mk < NUM_ROWS; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS; j_mk++)
		{
			printf("*(*(iArray_mk + %d) + %d) = %d \t \t At Address (*(iArray_mk + %d) + %d): %p\n", i_mk, j_mk, *(*(iArray_mk + i_mk) + j_mk), i_mk, j_mk, (*(iArray_mk + i_mk) + j_mk));
		}
		printf("\n\n");
	}

	return(0);
}
