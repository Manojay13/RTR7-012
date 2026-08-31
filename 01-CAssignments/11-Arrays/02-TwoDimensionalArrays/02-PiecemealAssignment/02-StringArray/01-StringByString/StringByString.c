#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrcpy(char[], char[]);

	//variable declaraions

	// *** A 'STRING' IS AN ARRAY OF CHARACTERS ... so char[] IS A char ARRAY AND HENCE, char[] IS A 'STRING' ***
	// *** AN ARRAY OF char ARRAYS IS AN ARRAY OF STRINGS !!! ***
	// *** HENCE, char[] IS ONE char ARRAY AND HENCE, IS ONE STRING ***
	// *** HENCE, char[][] IS AN ARRAY OF char ARRAYS AND HENCE, IS AN ARRAY OF STRINGS ***

	//Here, the string array can allow a maximum number of 5 strings (5 rows) and
	//each of these 5 strings can have only upto 10 characters maximum (10 columns)
	char strArray_mk[5][10]; // 5 ROWS (0, 1, 2, 3, 4) -> 5 STRINGS (EACH STRING CAN HAVE A MAXIMUM OF 10 CHARACTERS)

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
	MyStrcpy(strArray_mk[0], "My");
	MyStrcpy(strArray_mk[1], "Name");
	MyStrcpy(strArray_mk[2], "Is");
	MyStrcpy(strArray_mk[3], "Manojay");
	MyStrcpy(strArray_mk[4], "Kulkarni");

	printf("\n\n");
	printf("The Strings In the 2D Character Array Are : \n\n");

	for (i_mk = 0; i_mk < strArray_num_rows_mk; i_mk++)
		printf("%s ", strArray_mk[i_mk]);

	printf("\n\n");

	exit(EXIT_SUCCESS);
}

void MyStrcpy(char str_destination_mk[], char str_source_mk[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_mk = 0;
	int j_mk;

	//code
	iStringLength_mk = MyStrlen(str_source_mk);
	for (j_mk = 0; j_mk < iStringLength_mk; j_mk++)
		str_destination_mk[j_mk] = str_source_mk[j_mk];

	str_destination_mk[j_mk] = '\0';
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
