#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	char chArray_mk[MAX_STRING_LENGTH]; // A Character Array Is A String
	int iStringLength_mk = 0;

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_mk, MAX_STRING_LENGTH);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_mk);

	// *** STRING LENGTH ***
	printf("\n\n");
	iStringLength_mk = MyStrlen(chArray_mk);
	printf("Length Of String Is = %d Characters !!!\n\n", iStringLength_mk);

	return(0);
}

int MyStrlen(char str_mk[])
{
	//variable declarations
	int j_mk;
	int string_length_mk = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURRENCE OF NULL-TERMINATING CHARACTER ( \0 ) ***
	for (j_mk = 0; j_mk < MAX_STRING_LENGTH; j_mk++)
	{
		if (str_mk[j_mk] == '\0')
		{
			break;
		}
		else
		{
			string_length_mk++;
		}
	}
	return(string_length_mk);
}
