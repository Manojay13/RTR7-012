#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//variable declarations
	int iArray_mk[10];
	int *ptr_iArray_mk = NULL;
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		iArray_mk[i_mk] = (i_mk + 1) * 3;
	}

	// *** NAME OF ANY ARRAY IS ITS BASE ADDRESS ***
	// *** HENCE, 'iArray_mk' IS THE BASE ADDRESS OF ARRAY iArray_mk[] OR 'iArray_mk' IS THE ADDRESS OF ELEMENT iArray_mk[0] ***
	// *** ASSIGNING BASE ADDRESS OF ARRAY 'iArray_mk[]' TO INTEGER POINTER 'ptr_iArray_mk' ***
	ptr_iArray_mk = iArray_mk; // ptr_iArray_mk = &iArray_mk[0];

	printf("\n\n");
	printf("Elements Of The Integer Array iArray_mk : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("iArray_mk[%d] = %d\n", i_mk, *(ptr_iArray_mk + i_mk));
	}

	printf("\n\n");
	printf("Elements Of The Integer Array iArray_mk With Addresses : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("iArray_mk[%d] = %d \t \t At Address = %p\n", i_mk, *(ptr_iArray_mk + i_mk), (ptr_iArray_mk + i_mk));
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
