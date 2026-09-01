#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//variable declarations
	// Fixed: Restored the dimensions to correctly make it an array type
	double dArray_mk[10];
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		dArray_mk[i_mk] = (double)(i_mk + 1) * 1.333333;
	}

	printf("\n\n");
	printf("Elements Of The 'double' Array dArray_mk : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("dArray_mk[%d] = %lf\n", i_mk, dArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Elements Of The 'double' Array dArray_mk With Addresses : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("dArray_mk[%d] = %lf \t \t Address = %p\n", i_mk, dArray_mk[i_mk], &dArray_mk[i_mk]);
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
