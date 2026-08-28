#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <conio.h> // Required for getch()

// MACRO CONSTANT USED AS ARRAY SIZE IN SUBSCRIPT AND AS ARRAY LENGTH.
// HENCE, THIS PROGRAM'S ARRAYS' SIZES CAN BE SIMPLY CHANGED BY CHANGING THESE
// FOLLOWING 3 GLOBAL MACRO CONSTANT VALUES, BEFORE COMPILING, LINKING AND
// EXECUTING THE PROGRAM !!!

#define INT_ARRAY_NUM_ELEMENTS 5
#define FLOAT_ARRAY_NUM_ELEMENTS 3
#define CHAR_ARRAY_NUM_ELEMENTS 15

int main(void)
{
	//variable declarations
	int iArray_mk[INT_ARRAY_NUM_ELEMENTS];
	float fArray_mk[FLOAT_ARRAY_NUM_ELEMENTS];
	char cArray_mk[CHAR_ARRAY_NUM_ELEMENTS];
	int i_mk;

	//code

	// ********** ARRAY ELEMENTS INPUT **********
	printf("\n\n");
	printf("Enter Elements For 'Integer' Array iArray_mk[] : \n");
	for (i_mk = 0; i_mk < INT_ARRAY_NUM_ELEMENTS; i_mk++)
	{
		scanf("%d", &iArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Enter Elements For 'Floating-Point' Array fArray_mk[] : \n");
	for (i_mk = 0; i_mk < FLOAT_ARRAY_NUM_ELEMENTS; i_mk++)
	{
		scanf("%f", &fArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Enter Elements For 'Character' Array cArray_mk[] : \n");
	for (i_mk = 0; i_mk < CHAR_ARRAY_NUM_ELEMENTS; i_mk++)
	{
		cArray_mk[i_mk] = getch();
		printf("%c\n", cArray_mk[i_mk]);
	}

	// ********** ARRAY ELEMENTS OUTPUT **********
	printf("\n\n");
	printf("Integer Array iArray_mk[] Entered By You : \n\n");
	for (i_mk = 0; i_mk < INT_ARRAY_NUM_ELEMENTS; i_mk++)
	{
		printf("%d\n", iArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Floating-Point Array fArray_mk[] Entered By You : \n\n");
	for (i_mk = 0; i_mk < FLOAT_ARRAY_NUM_ELEMENTS; i_mk++)
	{
		printf("%f\n", fArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Character Array cArray_mk[] Entered By You : \n\n");
	for (i_mk = 0; i_mk < CHAR_ARRAY_NUM_ELEMENTS; i_mk++)
	{
		printf("%c\n", cArray_mk[i_mk]);
	}

	exit(EXIT_SUCCESS);
}
