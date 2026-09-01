#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//variable declarations
	int iArray_mk[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }; //Integer Array
	int *ptr_iArray_mk = NULL; //Integer Pointer

	//code

	// ###### USING ARRAY NAME AS A POINTER i.e Value of xth Element Of iArray_mk: *(iArray_mk + x) AND Address Of xth Element Of iArray_mk (iArray_mk + x) ######
	printf("\n\n");
	printf("*** USING ARRAY NAME AS A POINTER i.e: Value Of xth Element Of iArray_mk: *(iArray_mk + x) AND Address Of xth Element Of iArray_mk (iArray_mk + x) ***\n\n");
	printf("Integer Array Elements And Their Addresses: \n\n");
	
	printf("*(iArray_mk + 0) = %d \t At Address (iArray_mk + 0): %p\n", *(iArray_mk + 0), (iArray_mk + 0));
	printf("*(iArray_mk + 1) = %d \t At Address (iArray_mk + 1): %p\n", *(iArray_mk + 1), (iArray_mk + 1));
	printf("*(iArray_mk + 2) = %d \t At Address (iArray_mk + 2): %p\n", *(iArray_mk + 2), (iArray_mk + 2));
	printf("*(iArray_mk + 3) = %d \t At Address (iArray_mk + 3): %p\n", *(iArray_mk + 3), (iArray_mk + 3));
	printf("*(iArray_mk + 4) = %d \t At Address (iArray_mk + 4): %p\n", *(iArray_mk + 4), (iArray_mk + 4));
	printf("*(iArray_mk + 5) = %d \t At Address (iArray_mk + 5): %p\n", *(iArray_mk + 5), (iArray_mk + 5));
	printf("*(iArray_mk + 6) = %d \t At Address (iArray_mk + 6): %p\n", *(iArray_mk + 6), (iArray_mk + 6));
	printf("*(iArray_mk + 7) = %d \t At Address (iArray_mk + 7): %p\n", *(iArray_mk + 7), (iArray_mk + 7));
	printf("*(iArray_mk + 8) = %d \t At Address (iArray_mk + 8): %p\n", *(iArray_mk + 8), (iArray_mk + 8));
	printf("*(iArray_mk + 9) = %d \t At Address (iArray_mk + 9): %p\n", *(iArray_mk + 9), (iArray_mk + 9));

	// ASSIGNING BASE ADDRESS OF INTEGER ARRAY 'iArray_mk' TO INTEGER POINTER 'ptr_iArray_mk'
	// NAME OF ANY ARRAY IS ITS OWN BASE ADDRESS
	ptr_iArray_mk = iArray_mk; //SAME AS ptr_iArray_mk = &iArray_mk[0]

	// ###### USING POINTER AS ARRAY NAME i.e Value of xth Element Of iArray_mk: ptr_iArray_mk[x] AND Address Of xth Element Of iArray_mk &ptr_iArray_mk[x] ######
	printf("\n\n");
	printf("*** USING POINTER AS ARRAY NAME i.e Value of xth Element Of iArray_mk: ptr_iArray_mk[x] AND Address Of xth Element Of iArray_mk &ptr_iArray_mk[x] ***\n\n");
	printf("Integer Array Elements And Their Addresses: \n\n");
	
	printf("ptr_iArray_mk[0] = %d \t At Address &ptr_iArray_mk[0] : %p\n", ptr_iArray_mk[0], &ptr_iArray_mk[0]);
	printf("ptr_iArray_mk[1] = %d \t At Address &ptr_iArray_mk[1] : %p\n", ptr_iArray_mk[1], &ptr_iArray_mk[1]);
	printf("ptr_iArray_mk[2] = %d \t At Address &ptr_iArray_mk[2] : %p\n", ptr_iArray_mk[2], &ptr_iArray_mk[2]);
	printf("ptr_iArray_mk[3] = %d \t At Address &ptr_iArray_mk[3] : %p\n", ptr_iArray_mk[3], &ptr_iArray_mk[3]);
	printf("ptr_iArray_mk[4] = %d \t At Address &ptr_iArray_mk[4] : %p\n", ptr_iArray_mk[4], &ptr_iArray_mk[4]);
	printf("ptr_iArray_mk[5] = %d \t At Address &ptr_iArray_mk[5] : %p\n", ptr_iArray_mk[5], &ptr_iArray_mk[5]);
	printf("ptr_iArray_mk[6] = %d \t At Address &ptr_iArray_mk[6] : %p\n", ptr_iArray_mk[6], &ptr_iArray_mk[6]);
	printf("ptr_iArray_mk[7] = %d \t At Address &ptr_iArray_mk[7] : %p\n", ptr_iArray_mk[7], &ptr_iArray_mk[7]);
	printf("ptr_iArray_mk[8] = %d \t At Address &ptr_iArray_mk[8] : %p\n", ptr_iArray_mk[8], &ptr_iArray_mk[8]);
	printf("ptr_iArray_mk[9] = %d \t At Address &ptr_iArray_mk[9] : %p\n", ptr_iArray_mk[9], &ptr_iArray_mk[9]);

	exit(EXIT_SUCCESS);

}
