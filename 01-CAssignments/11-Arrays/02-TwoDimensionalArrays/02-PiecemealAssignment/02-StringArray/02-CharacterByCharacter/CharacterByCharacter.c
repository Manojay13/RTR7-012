#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declaraions

	// *** A 'STRING' IS AN ARRAY OF CHARACTERS ... so char[] IS A char ARRAY AND HENCE, char[] IS A 'STRING' ***
	// *** AN ARRAY OF char ARRAYS IS AN ARRAY OF STRINGS !!! ***
	// *** HENCE, char[] IS ONE char ARRAY AND HENCE, IS ONE STRING ***
	// *** HENCE, char[][] IS AN ARRAY OF char ARRAYS AND HENCE, IS AN ARRAY OF STRINGS ***

	// Fixed: Restored the [5][10] dimensions to correctly make it a 2D array
	char strArray_mk[5][10]; 

	int char_size_mk;
	int strArray_size_mk;
	int strArray_num_elements_mk, strArray_num_rows_mk, strArray_num_columns_mk;
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

	// *** PIECE-MEAL ASSIGNMENT ***
	// ****** ROW 1 / STRING 1 ******
	strArray_mk[0][0] = 'M';
	strArray_mk[0][1] = 'y';
	strArray_mk[0][2] = '\0'; //NULL-TERMINATING CHARACTER

	// ****** ROW 2 / STRING 2 ******
	strArray_mk[1][0] = 'N';
	strArray_mk[1][1] = 'a';
	strArray_mk[1][2] = 'm';
	strArray_mk[1][3] = 'e';
	strArray_mk[1][4] = '\0'; //NULL-TERMINATING CHARACTER

	// ****** ROW 3 / STRING 3 ******
	strArray_mk[2][0] = 'I';
	strArray_mk[2][1] = 's';
	strArray_mk[2][2] = '\0'; //NULL-TERMINATING CHARACTER

	// ****** ROW 4 / STRING 4 ******
	strArray_mk[3][0] = 'M';
	strArray_mk[3][1] = 'a';
	strArray_mk[3][2] = 'n';
	strArray_mk[3][3] = 'o';
	strArray_mk[3][4] = 'j';
	strArray_mk[3][5] = 'a';
	strArray_mk[3][6] = 'y';
	strArray_mk[3][7] = '\0'; //NULL-TERMINATING CHARACTER

	// ****** ROW 5 / STRING 5 ******
	strArray_mk[4][0] = 'K';
	strArray_mk[4][1] = 'u';
	strArray_mk[4][2] = 'l';
	strArray_mk[4][3] = 'k';
	strArray_mk[4][4] = 'a';
	strArray_mk[4][5] = 'r';
	strArray_mk[4][6] = 'n';
	strArray_mk[4][7] = 'i';
	strArray_mk[4][8] = '\0'; //NULL-TERMINATING CHARACTER

	printf("\n\n");
	printf("The Strings In the 2D Character Array Are : \n\n");

	for (i_mk = 0; i_mk < strArray_num_rows_mk; i_mk++)
		printf("%s ", strArray_mk[i_mk]);

	printf("\n\n");

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
