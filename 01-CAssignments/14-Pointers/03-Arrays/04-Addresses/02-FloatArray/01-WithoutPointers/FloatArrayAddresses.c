#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//variable declarations
	float fArray_mk[10];
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		fArray_mk[i_mk] = (float)(i_mk + 1) * 1.5f;
	}

	printf("\n\n");
	printf("Elements Of The 'float' Array fArray_mk : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("fArray_mk[%d] = %f\n", i_mk, fArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Elements Of The 'float' Array fArray_mk With Addresses : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("fArray_mk[%d] = %f \t \t At Address = %p\n", i_mk, fArray_mk[i_mk], &fArray_mk[i_mk]);
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
