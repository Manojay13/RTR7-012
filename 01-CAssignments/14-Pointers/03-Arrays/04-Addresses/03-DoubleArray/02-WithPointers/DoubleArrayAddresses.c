#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'


int main(void)
{
	//variable declarations
	double dArray_mk[10];
	double *ptr_dArray_mk = NULL;
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		dArray_mk[i_mk] = (double)(i_mk + 1) * 1.333333;
	}

	// *** NAME OF ANY ARRAY IS ITS BASE ADDRESS ***
	// *** HENCE, 'dArray_mk' IS THE BASE ADDRESS OF ARRAY dArray_mk[] OR 'dArray_mk' IS THE ADDRESS OF ELEMENT dArray_mk[0] ***
	// *** ASSIGNING BASE ADDRESS OF ARRAY 'dArray_mk[]' TO DOUBLE POINTER 'ptr_dArray_mk' ***
	ptr_dArray_mk = dArray_mk; // ptr_dArray_mk = &dArray_mk[0];

	printf("\n\n");
	printf("Elements Of The 'double' Array dArray_mk : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("dArray_mk[%d] = %lf\n", i_mk, *(ptr_dArray_mk + i_mk));
	}

	printf("\n\n");
	printf("Elements Of The 'double' Array dArray_mk With Addresses : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("dArray_mk[%d] = %lf \t \t At Address = %p\n", i_mk, *(ptr_dArray_mk + i_mk), (ptr_dArray_mk + i_mk));
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
