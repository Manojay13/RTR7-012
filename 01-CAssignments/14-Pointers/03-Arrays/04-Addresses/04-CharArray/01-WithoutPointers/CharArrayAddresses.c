#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'


int main(void)
{
	//variable declarations
	char cArray_mk[10];
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		cArray_mk[i_mk] = (char)(i_mk + 65);
	}

	printf("\n\n");
	printf("Elements Of The Character Array cArray_mk : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("cArray_mk[%d] = %c\n", i_mk, cArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Elements Of The Character Array cArray_mk With Addresses : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("cArray_mk[%d] = %c \t \t At Address = %p\n", i_mk, cArray_mk[i_mk], &cArray_mk[i_mk]);
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
