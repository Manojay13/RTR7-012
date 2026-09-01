#include <stdio.h>

int main(void)
{
	//variable declarations
	char cArray_mk[10];
	char *ptr_cArray_mk = NULL;
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
		cArray_mk[i_mk] = (char)(i_mk + 65);

	// *** NAME OF ANY ARRAY IS ITS BASE ADDRESS ***
	// *** HENCE, 'cArray_mk' IS THE BASE ADDRESS OF ARRAY cArray_mk[] OR 'cArray_mk' IS THE ADDRESS OF ELEMENT cArray_mk[0] ***
	// *** ASSIGNING BASE ADDRESS OF ARRAY 'cArray_mk[]' TO CHAR POINTER 'ptr_cArray_mk' ***
	ptr_cArray_mk = cArray_mk; // ptr_cArray_mk = &cArray_mk[0];

	printf("\n\n");
	printf("Elements Of The Character Array cArray_mk : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
		printf("cArray_mk[%d] = %c\n", i_mk, *(ptr_cArray_mk + i_mk));

	printf("\n\n");
	printf("Elements Of The Character Array cArray_mk With Addresses : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
		printf("cArray_mk[%d] = %c \t \t At Address = %p\n", i_mk, *(ptr_cArray_mk + i_mk), (ptr_cArray_mk + i_mk));

	printf("\n\n");

	return(0);
}
