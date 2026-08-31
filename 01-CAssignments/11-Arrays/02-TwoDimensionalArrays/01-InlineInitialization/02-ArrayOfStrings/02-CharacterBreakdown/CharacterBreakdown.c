#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);

	//variable declaraions

	// *** A 'STRING' IS AN ARRAY OF CHARACTERS ... so char[] IS A char ARRAY AND HENCE, char[] IS A 'STRING' ***
	// *** AN ARRAY OF char ARRAYS IS AN ARRAY OF STRINGS !!! ***
	// *** HENCE, char[] IS ONE char ARRAY AND HENCE, IS ONE STRING ***
	// *** HENCE, char[][] IS AN ARRAY OF char ARRAYS AND HENCE, IS AN ARRAY OF STRINGS ***

	//Here, the string array can allow a maximum number of 10 strings (10 rows)
	//and each of these 10 strings can have only upto 15 characters maximum (15 columns)
	char strArray_mk[10][15] = { "Hello!", "Welcome", "To", "Real", "Time", "Rendering", "Batch", "(2026-27)", "Of", "ASTROMEDICOMP." }; //IN-LINE INITIALIZATION

	int iStrLengths_mk[10]; //1D Integer Array - Stores lengths of those strings at corressponding indices in 'strArray_mk[]' e.g: iStrLengths_mk[0] will be the length of string at strArray_mk[0], iStrLengths_mk[1] will be the length of string at strArray_mk[1]...10 strings, 10 lengths...

	int strArray_size_mk;
	int strArray_num_rows_mk;
	int i_mk, j_mk;

	//code
	strArray_size_mk = sizeof(strArray_mk);
	strArray_num_rows_mk = strArray_size_mk / sizeof(strArray_mk[0]);

	//Storing in lengths of all the strings...
	for (i_mk = 0; i_mk < strArray_num_rows_mk; i_mk++)
	{
		iStrLengths_mk[i_mk] = MyStrlen(strArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("The Entire String Array strArray_mk : \n\n");
	for (i_mk = 0; i_mk < strArray_num_rows_mk; i_mk++)
	{
		printf("%s ", strArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Strings In The 2D Array strArray_mk : \n\n");

	//Since, char[][] is an array of strings, referencing only by the row number (first []) will give the row or the string
	//The Column Number (second []) is the particular character in that string / row
	for (i_mk = 0; i_mk < strArray_num_rows_mk; i_mk++)
	{
		printf("String Number %d => %s\n\n", (i_mk + 1), strArray_mk[i_mk]);
		for (j_mk = 0; j_mk < iStrLengths_mk[i_mk]; j_mk++)
		{
			printf("Character %d = %c\n", (j_mk + 1), strArray_mk[i_mk][j_mk]);
		}
		printf("\n\n");
	}

	exit(EXIT_SUCCESS);
}

int MyStrlen(char str_mk[])
{
	//variable declarations
	int j_mk;
	int string_length_mk = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURENCE OF NULL-TERMINATING CHARACTER ( \0 ) ***
	for (j_mk = 0; j_mk < MAX_STRING_LENGTH; j_mk++)
	{
		if (str_mk[j_mk] == '\0')
			break;
		else
			string_length_mk++;
	}
	return(string_length_mk);
}
