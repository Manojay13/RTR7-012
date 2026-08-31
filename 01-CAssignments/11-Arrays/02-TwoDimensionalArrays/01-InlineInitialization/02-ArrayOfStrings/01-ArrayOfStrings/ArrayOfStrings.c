#include <stdio.h>

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
	char strArray_mk[10][15] = { "Hello!", "Welcome", "To", "Real", "Time", "Rendering", "Batch", "(2020-21)", "Of", "ASTROMEDICOMP." }; //IN-LINE INITIALIZATION

	int char_size_mk;
	int strArray_size_mk;
	int strArray_num_elements_mk, strArray_num_rows_mk, strArray_num_columns_mk;
	int strActual_num_chars_mk = 0;
	int i_mk;

	//code
	printf("\n\n");

	char_size_mk = sizeof(char);

	strArray_size_mk = sizeof(strArray_mk);
	printf("Size Of Two Dimensional ( 2D ) Character Array (String Array) strArray_mk Is = %d\n\n", strArray_size_mk);

	strArray_num_rows_mk = strArray_size_mk / sizeof(strArray_mk[0]);
	printf("Number of Rows (Strings) In Two Dimensional ( 2D ) Character Array (String Array) strArray_mk Is = %d\n\n", strArray_num_rows_mk);

	strArray_num_columns_mk = sizeof(strArray_mk[0]) / char_size_mk;
	printf("Number of Columns In Two Dimensional ( 2D ) Character Array (String Array) strArray_mk Is = %d\n\n", strArray_num_columns_mk);

	strArray_num_elements_mk = strArray_num_rows_mk * strArray_num_columns_mk;
	printf("Maximum Number of Elements (Characters) In Two Dimensional ( 2D ) Character Array (String Array) strArray_mk Is = %d\n\n", strArray_num_elements_mk);

	for (i_mk = 0; i_mk < strArray_num_rows_mk; i_mk++)
	{
		strActual_num_chars_mk = strActual_num_chars_mk + MyStrlen(strArray_mk[i_mk]);
	}
	printf("Actual Number of Elements (Characters) In Two Dimensional ( 2D ) Character Array (String Array) strArray_mk Is = %d\n\n", strActual_num_chars_mk);

	printf("\n\n");
	printf("Strings In The 2D Array strArray_mk : \n\n");

	//Since, char[][] is an array of strings, referencing only by the row number (first []) will give the row or the string
	//The Column Number (second []) is the particular character in that string / row
	printf("%s ", strArray_mk[0]);
	printf("%s ", strArray_mk[1]);
	printf("%s ", strArray_mk[2]);
	printf("%s ", strArray_mk[3]);
	printf("%s ", strArray_mk[4]);
	printf("%s ", strArray_mk[5]);
	printf("%s ", strArray_mk[6]);
	printf("%s ", strArray_mk[7]);
	printf("%s ", strArray_mk[8]);
	printf("%s\n\n", strArray_mk[9]);

	return(0);
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
