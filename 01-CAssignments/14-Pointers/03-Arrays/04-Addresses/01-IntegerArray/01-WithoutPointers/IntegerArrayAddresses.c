#include <stdio.h>

int main(void)
{
	//variable declarations
	int iArray_mk[10];
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		iArray_mk[i_mk] = (i_mk + 1) * 3;
	}

	printf("\n\n");
	printf("Elements Of The Integer Array iArray_mk : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("iArray_mk[%d] = %d\n", i_mk, iArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Elements Of The Integer Array iArray_mk With Addresses : \n\n");
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("iArray_mk[%d] = %d \t \t At Address = %p\n", i_mk, iArray_mk[i_mk], &iArray_mk[i_mk]);
	}

	printf("\n\n");

	return(0);
}
