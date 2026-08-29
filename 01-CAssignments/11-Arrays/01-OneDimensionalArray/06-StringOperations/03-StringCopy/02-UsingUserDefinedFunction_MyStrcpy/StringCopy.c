#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrcpy(char[], char[]);

	//variable declarations
	char chArray_Original_mk[MAX_STRING_LENGTH], chArray_Copy_mk[MAX_STRING_LENGTH]; // A Character Array Is A String

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String: \n\n");
	gets_s(chArray_Original_mk, MAX_STRING_LENGTH);

	// *** STRING COPY ***
	MyStrcpy(chArray_Copy_mk, chArray_Original_mk);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e: 'chArray_Original_mk[]') Is : \n\n");
	printf("%s\n", chArray_Original_mk);

	printf("\n\n");
	printf("The Copied String (i.e 'chArray_Copy_mk[]') Is: \n\n");
	printf("%s\n", chArray_Copy_mk);

	return(0);
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
