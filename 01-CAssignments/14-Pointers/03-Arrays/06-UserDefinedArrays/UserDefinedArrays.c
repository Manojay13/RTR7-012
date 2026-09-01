#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <conio.h> // Required for getch()

#define INT_SIZE_mk sizeof(int)
#define FLOAT_SIZE_mk sizeof(float)
#define DOUBLE_SIZE_mk sizeof(double)
#define CHAR_SIZE_mk sizeof(char)

int main(void)
{
	//variable declarations
	int *ptr_iArray_mk = NULL;
	unsigned int intArrayLength_mk = 0;

	float *ptr_fArray_mk = NULL;
	unsigned int floatArrayLength_mk = 0;

	double *ptr_dArray_mk = NULL;
	unsigned int doubleArrayLength_mk = 0;

	char *ptr_cArray_mk = NULL;
	unsigned int charArrayLength_mk = 0;

	int i_mk;

	//code

	// ****** INTEGER ARRAY *******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The Integer Array: ");
	scanf("%u", &intArrayLength_mk);

	ptr_iArray_mk = (int *)malloc(INT_SIZE_mk * intArrayLength_mk);
	if (ptr_iArray_mk == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter The %d Integer Elements To Fill Up The Integer Array: \n\n", intArrayLength_mk);
	for (i_mk = 0; i_mk < intArrayLength_mk; i_mk++)
	{
		scanf("%d", (ptr_iArray_mk + i_mk));
	}

	// ****** FLOAT ARRAY *******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The 'float' Array: ");
	scanf("%u", &floatArrayLength_mk);

	ptr_fArray_mk = (float *)malloc(FLOAT_SIZE_mk * floatArrayLength_mk);
	if (ptr_fArray_mk == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOATING-POINT ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter The %d Floating-Point Elements To Fill Up The 'float' Array: \n\n", floatArrayLength_mk);
	for (i_mk = 0; i_mk < floatArrayLength_mk; i_mk++)
	{
		scanf("%f", (ptr_fArray_mk + i_mk));
	}

	// ****** DOUBLE ARRAY *******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The 'double' Array: ");
	scanf("%u", &doubleArrayLength_mk);

	ptr_dArray_mk = (double *)malloc(DOUBLE_SIZE_mk * doubleArrayLength_mk);
	if (ptr_dArray_mk == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR 'DOUBLE' ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter The %d Double Elements To Fill Up The 'double' Array: \n\n", doubleArrayLength_mk);
	for (i_mk = 0; i_mk < doubleArrayLength_mk; i_mk++)
	{
		scanf("%lf", (ptr_dArray_mk + i_mk));
	}

	// ****** CHAR ARRAY *******
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In The Character Array: ");
	scanf("%u", &charArrayLength_mk);

	ptr_cArray_mk = (char *)malloc(CHAR_SIZE_mk * charArrayLength_mk);
	if (ptr_cArray_mk == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHARACTER ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHARACTER ARRAY SUCCEEDED !!!\n\n");
	}

	printf("\n\n");
	printf("Enter The %d Character Elements To Fill Up The Character Array : \n\n", charArrayLength_mk);
	for (i_mk = 0; i_mk < charArrayLength_mk; i_mk++)
	{
		*(ptr_cArray_mk + i_mk) = getch();
		printf("%c\n", *(ptr_cArray_mk + i_mk));
	}

	// // ********** DISPLAY OF ARRAYS **********

	// ****** INTEGER ARRAY ******
	printf("\n\n");
	printf("The Integer Array Entered By You And Consisting Of %d Elements Is As Follows: \n\n", intArrayLength_mk);
	for (i_mk = 0; i_mk < intArrayLength_mk; i_mk++)
	{
		printf("%d \t \t At Address: %p\n", *(ptr_iArray_mk + i_mk), (ptr_iArray_mk + i_mk));
	}

	// ****** FLOAT ARRAY ******
	printf("\n\n");
	printf("The Float Array Entered By You And Consisting Of %d Elements Is As Follows: \n\n", floatArrayLength_mk);
	for (i_mk = 0; i_mk < floatArrayLength_mk; i_mk++)
	{
		printf(" %f \t \t At Address: %p\n", *(ptr_fArray_mk + i_mk), (ptr_fArray_mk + i_mk));
	}

	// ****** DOUBLE ARRAY ******
	printf("\n\n");
	printf("The Double Array Entered By You And Consisting Of %d Elements Is As Follows: \n\n", doubleArrayLength_mk);
	for (i_mk = 0; i_mk < doubleArrayLength_mk; i_mk++)
	{
		printf(" %lf \t \t At Address: %p\n", *(ptr_dArray_mk + i_mk), (ptr_dArray_mk + i_mk));
	}

	// ****** CHARACTER ARRAY ******
	printf("\n\n");
	printf("The Character Array Entered By You And Consisting Of %d Elements Is As Follows: \n\n", charArrayLength_mk);
	for (i_mk = 0; i_mk < charArrayLength_mk; i_mk++)
	{
		printf(" %c \t \t At Address: %p\n", *(ptr_cArray_mk + i_mk), (ptr_cArray_mk + i_mk));
	}

	// ****** FREEING MEMORY OCCUPIED BY ARRAYS (IN REVERSE ORDER OF ALLOCATION) ******
	if (ptr_cArray_mk)
	{
		free(ptr_cArray_mk);
		ptr_cArray_mk = NULL;
		printf("\n\n");
		printf("MEMORY OCCUPIED BY CHARACTER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (ptr_dArray_mk)
	{
		free(ptr_dArray_mk);
		ptr_dArray_mk = NULL;
		printf("\n\n");
		printf("MEMORY OCCUPIED BY 'DOUBLE' ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (ptr_fArray_mk)
	{
		free(ptr_fArray_mk);
		ptr_fArray_mk = NULL;
		printf("\n\n");
		printf("MEMORY OCCUPIED BY FLOATING-POINT ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (ptr_iArray_mk)
	{
		free(ptr_iArray_mk);
		ptr_iArray_mk = NULL;
		printf("\n\n");
		printf("MEMORY OCCUPIED BY INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	exit(EXIT_SUCCESS);
}
