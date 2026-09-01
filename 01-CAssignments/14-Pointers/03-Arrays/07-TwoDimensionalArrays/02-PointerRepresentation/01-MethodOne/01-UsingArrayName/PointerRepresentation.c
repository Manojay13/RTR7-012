#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS_mk 5
#define NUM_COLUMNS_mk 3

int main(void)
{
	//variable declarations
	int iArray_mk[NUM_ROWS_mk][NUM_COLUMNS_mk];
	int i_mk, j_mk;

	//code
	// *** EVERY ROW OF A 2D ARRAY IS AN INTEGER ARRAY ITSELF COMPRISING OF 'NUM_COLUMNS_mk' INTEGER ELEMENTS ***
	// *** THERE ARE 5 ROWS AND 3 COLUMNS IN A 2D INTEGER ARRAY. EACH OF THE 5 ROWS IS A 1D ARRAY OF 3 INTEGERS.
	// *** HENCE, EACH OF THESE 5 ROWS THEMSELVES BEING ARRAYS, WILL BE THE BASE ADDRESSES OF THEIR RESPECTIVE ROWS ***

	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_mk; j_mk++)
		{
			*(iArray_mk[i_mk] + j_mk) = (i_mk + 1) * (j_mk + 1); // 'iArray_mk[i_mk]' Can Be Treated As 1D Array Using Pointers ...
		}
	}

	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses: \n\n");
	for (i_mk = 0; i_mk < NUM_ROWS_mk; i_mk++)
	{
		for (j_mk = 0; j_mk < NUM_COLUMNS_mk; j_mk++)
		{
			printf("*(iArray_mk[%d] + %d) = %d \t \t At Address (iArray_mk[i_mk] + j_mk) : %p\n", i_mk, j_mk, *(iArray_mk[i_mk] + j_mk), (iArray_mk[i_mk] + j_mk));
		}
		printf("\n\n");
	}

	return(0);
}
