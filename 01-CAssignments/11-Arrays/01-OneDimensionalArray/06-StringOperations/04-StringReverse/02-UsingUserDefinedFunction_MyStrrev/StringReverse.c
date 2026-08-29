#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrrev(char[], char[]);

	//variable declarations
	char chArray_Original_mk[MAX_STRING_LENGTH], chArray_Reversed_mk[MAX_STRING_LENGTH]; // A Character Array Is A String

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_mk, MAX_STRING_LENGTH);

	// *** STRING REVERSE ***
	MyStrrev(chArray_Reversed_mk, chArray_Original_mk);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e: 'chArray_Original_mk[]') Is : \n\n");
	printf("%s\n", chArray_Original_mk);

	printf("\n\n");
	printf("The Reversed String (i.e: 'chArray_Reversed_mk[]') Is: \n\n");
	printf("%s\n", chArray_Reversed_mk);

	return(0);
}

void MyStrrev(char str_destination_mk[], char str_source_mk[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_mk = 0;
	int i_mk, j_mk, len_mk;

	//code
	iStringLength_mk = MyStrlen(str_source_mk);

	// ARRAY INDICES BEGIN FROM 0, HENCE, LAST INDEX WILL ALWAYS BE (LENGTH - 1)
	len_mk = iStringLength_mk - 1;

	// WE NEED TO PUT THE CHARACTER WHICH IS AT LAST INDEX OF 'str_source_mk' TO THE
	// FIRST INDEX OF 'str_destination_mk'
	// AND SECOND-LAST CHARACTER OF 'str_source_mk' TO THE SECOND CHARACTER OF
	// 'str_destination_mk' and so on...
	for (i_mk = 0, j_mk = len_mk; i_mk < iStringLength_mk, j_mk >= 0; i_mk++, j_mk--)
	{
		str_destination_mk[i_mk] = str_source_mk[j_mk];
	}

	str_destination_mk[i_mk] = '\0';
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
