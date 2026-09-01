#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//variable declarations
	int iArray_mk[] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120 };
	float fArray_mk[] = { 9.8f, 8.7f, 7.6f, 6.5f, 5.4f };
	double dArray_mk[] = { 1.222222, 2.333333, 3.444444 };
	char cArray_mk[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' };

	//code
	printf("\n\n");
	printf("Integer Array Elements And The Addresses They Occupy Are As Follows: \n\n");
	printf("iArray_mk[0] = %d \t At Address: %p\n", *(iArray_mk + 0), (iArray_mk + 0));
	printf("iArray_mk[1] = %d \t At Address: %p\n", *(iArray_mk + 1), (iArray_mk + 1));
	printf("iArray_mk[2] = %d \t At Address: %p\n", *(iArray_mk + 2), (iArray_mk + 2));
	printf("iArray_mk[3] = %d \t At Address: %p\n", *(iArray_mk + 3), (iArray_mk + 3));
	printf("iArray_mk[4] = %d \t At Address: %p\n", *(iArray_mk + 4), (iArray_mk + 4));
	printf("iArray_mk[5] = %d \t At Address: %p\n", *(iArray_mk + 5), (iArray_mk + 5));
	printf("iArray_mk[6] = %d \t At Address: %p\n", *(iArray_mk + 6), (iArray_mk + 6));
	printf("iArray_mk[7] = %d \t At Address: %p\n", *(iArray_mk + 7), (iArray_mk + 7));
	printf("iArray_mk[8] = %d \t At Address: %p\n", *(iArray_mk + 8), (iArray_mk + 8));
	printf("iArray_mk[9] = %d \t At Address: %p\n", *(iArray_mk + 9), (iArray_mk + 9));

	printf("\n\n");
	printf("Float Array Elements And The Addresses They Occupy Are As Follows: \n\n");
	printf("fArray_mk[0] = %f \t At Address: %p\n", *(fArray_mk + 0), (fArray_mk + 0));
	printf("fArray_mk[1] = %f \t At Address: %p\n", *(fArray_mk + 1), (fArray_mk + 1));
	printf("fArray_mk[2] = %f \t At Address: %p\n", *(fArray_mk + 2), (fArray_mk + 2));
	printf("fArray_mk[3] = %f \t At Address: %p\n", *(fArray_mk + 3), (fArray_mk + 3));
	printf("fArray_mk[4] = %f \t At Address: %p\n", *(fArray_mk + 4), (fArray_mk + 4));

	printf("\n\n");
	printf("Double Array Elements And The Addresses They Occupy Are As Follows: \n\n");
	printf("dArray_mk[0] = %lf \t At Address: %p\n", *(dArray_mk + 0), (dArray_mk + 0));
	printf("dArray_mk[1] = %lf \t At Address: %p\n", *(dArray_mk + 1), (dArray_mk + 1));
	printf("dArray_mk[2] = %lf \t At Address: %p\n", *(dArray_mk + 2), (dArray_mk + 2));

	printf("\n\n");
	printf("Character Array Elements And The Addresses They Occupy Are As Follows: \n\n");
	printf("cArray_mk[0] = %c \t At Address: %p\n", *(cArray_mk + 0), (cArray_mk + 0));
	printf("cArray_mk[1] = %c \t At Address: %p\n", *(cArray_mk + 1), (cArray_mk + 1));
	printf("cArray_mk[2] = %c \t At Address: %p\n", *(cArray_mk + 2), (cArray_mk + 2));
	printf("cArray_mk[3] = %c \t At Address: %p\n", *(cArray_mk + 3), (cArray_mk + 3));
	printf("cArray_mk[4] = %c \t At Address: %p\n", *(cArray_mk + 4), (cArray_mk + 4));
	printf("cArray_mk[5] = %c \t At Address: %p\n", *(cArray_mk + 5), (cArray_mk + 5));
	printf("cArray_mk[6] = %c \t At Address: %p\n", *(cArray_mk + 6), (cArray_mk + 6));
	printf("cArray_mk[7] = %c \t At Address: %p\n", *(cArray_mk + 7), (cArray_mk + 7));
	printf("cArray_mk[8] = %c \t At Address: %p\n", *(cArray_mk + 8), (cArray_mk + 8));
	printf("cArray_mk[9] = %c \t At Address: %p\n", *(cArray_mk + 9), (cArray_mk + 9));
	printf("cArray_mk[10] = %c \t At Address: %p\n", *(cArray_mk + 10), (cArray_mk + 10));
	printf("cArray_mk[11] = %c \t At Address: %p\n", *(cArray_mk + 11), (cArray_mk + 11));
	printf("cArray_mk[12] = %c \t At Address: %p\n", *(cArray_mk + 12), (cArray_mk + 12));
	printf("cArray_mk[13] = %c \t At Address: %p\n", *(cArray_mk + 13), (cArray_mk + 13));

	exit(EXIT_SUCCESS);
}
