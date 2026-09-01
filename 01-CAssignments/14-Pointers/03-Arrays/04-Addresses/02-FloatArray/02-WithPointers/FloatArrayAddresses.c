#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//variable declarations
	float fArray_mk[10];
	float *ptr_fArray_mk = NULL;
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		fArray_mk[i_mk] = (float)(i_mk + 1) * 1.5f;
	}

	// *** NAME OF ANY ARRAY IS ITS BASE ADDRESS ***
	// *** HENCE, 'fArray_mk' IS THE BASE ADDRESS OF ARRAY fArray_mk[] OR 'fArray_mk' IS THE ADDRESS OF ELEMENT fArray_mk[0] ***
	// *** ASSIGNING BASE ADDRESS OF ARRAY 'fArray_mk[]' TO FLOAT POINTER 'ptr_fArray_mk' ***
	ptr_fArray_mk = fArray_mk; // ptr_fArray_mk = &fArray_mk[0];

	printf("\n\n");
	printf("Elements Of The 'float' Array fArray_mk : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("fArray_mk[%d] = %f\n", i_mk, *(ptr_fArray_mk + i_mk));
	}

	printf("\n\n");
	printf("Elements Of The 'float' Array fArray_mk With Addresses : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("fArray_mk[%d] = %f \t \t At Address = %p\n", i_mk, *(ptr_fArray_mk + i_mk), (ptr_fArray_mk + i_mk));
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
