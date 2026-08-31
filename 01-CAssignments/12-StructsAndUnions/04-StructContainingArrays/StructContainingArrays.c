#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <string.h> // Required for strcpy()

#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26

#define NUM_STRINGS 10
#define MAX_CHARACTERS_PER_STRING 20

#define ALPHABET_BEGINNING 65 // ASCII value for 'A'

struct MyDataOne_mk
{
	int iArray_mk[INT_ARRAY_SIZE];
	float fArray_mk[FLOAT_ARRAY_SIZE];
};

struct MyDataTwo_mk
{
	char cArray_mk[CHAR_ARRAY_SIZE];
	char strArray_mk[NUM_STRINGS][MAX_CHARACTERS_PER_STRING];
};

int main(void)
{
	//variable declarations
	struct MyDataOne_mk data_one_mk;
	struct MyDataTwo_mk data_two_mk;
	int i_mk;

	//code
	// *** PIECE-MEAL ASSIGNMENT (HARD-CODED) ***
	data_one_mk.fArray_mk[0] = 0.1f;
	data_one_mk.fArray_mk[1] = 1.2f;
	data_one_mk.fArray_mk[2] = 2.3f;
	data_one_mk.fArray_mk[3] = 3.4f;
	data_one_mk.fArray_mk[4] = 4.5f;

	// *** LOOP ASSIGNMENT (USER INPUT) ***
	printf("\n\n");
	printf("Enter %d Integers : \n\n", INT_ARRAY_SIZE);
	for (i_mk = 0; i_mk < INT_ARRAY_SIZE; i_mk++)
	{
		scanf("%d", &data_one_mk.iArray_mk[i_mk]);
	}

	// *** LOOP ASSIGNMENT (HARD-CODED) ***
	for (i_mk = 0; i_mk < CHAR_ARRAY_SIZE; i_mk++)
	{
		data_two_mk.cArray_mk[i_mk] = (char)(i_mk + ALPHABET_BEGINNING);
	}

	// *** PIECE-MEAL ASSIGNMENT (HARD-CODED) ***
	strcpy(data_two_mk.strArray_mk[0], "Welcome !!!");
	strcpy(data_two_mk.strArray_mk[1], "This");
	strcpy(data_two_mk.strArray_mk[2], "Is");
	strcpy(data_two_mk.strArray_mk[3], "ASTROMEDICOMP'S");
	strcpy(data_two_mk.strArray_mk[4], "Real");
	strcpy(data_two_mk.strArray_mk[5], "Time");
	strcpy(data_two_mk.strArray_mk[6], "Rendering");
	strcpy(data_two_mk.strArray_mk[7], "Batch");
	strcpy(data_two_mk.strArray_mk[8], "Of");
	strcpy(data_two_mk.strArray_mk[9], "2026-2027 !!!");

	// *** DISPLAYING DATA MEMBERS OF 'struct MyDataOne_mk' AND THEIR VALUES ***
	printf("\n\n");
	printf("Members Of 'struct MyDataOne_mk' Alongwith Their Assigned Values Are : \n\n");

	printf("\n\n");
	printf("Integer Array (data_one_mk.iArray_mk[]) : \n\n");
	for (i_mk = 0; i_mk < INT_ARRAY_SIZE; i_mk++)
	{
		printf("data_one_mk.iArray_mk[%d] = %d\n", i_mk, data_one_mk.iArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Floating-Point Array (data_one_mk.fArray_mk[]) : \n\n");
	for (i_mk = 0; i_mk < FLOAT_ARRAY_SIZE; i_mk++)
	{
		printf("data_one_mk.fArray_mk[%d] = %f\n", i_mk, data_one_mk.fArray_mk[i_mk]);
	}

	// *** DISPLAYING DATA MEMBERS OF 'struct MyDataTwo_mk' AND THEIR VALUES ***
	printf("\n\n");
	printf("Members Of 'struct MyDataTwo_mk' Alongwith Their Assigned Values Are : \n\n");

	printf("\n\n");
	printf("Character Array (data_two_mk.cArray_mk[]) : \n\n");
	for (i_mk = 0; i_mk < CHAR_ARRAY_SIZE; i_mk++)
	{
		printf("data_two_mk.cArray_mk[%d] = %c\n", i_mk, data_two_mk.cArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("String Array (data_two_mk.strArray_mk[]) : \n\n");
	for (i_mk = 0; i_mk < NUM_STRINGS; i_mk++)
	{
		printf("%s ", data_two_mk.strArray_mk[i_mk]);
	}
	printf("\n\n");

	exit(EXIT_SUCCESS);
}
