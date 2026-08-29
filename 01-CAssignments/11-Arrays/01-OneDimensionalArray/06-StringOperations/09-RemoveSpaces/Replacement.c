#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	void MyStrcpy(char[], char[]);

	//variable declarations
	char chArray_mk[MAX_STRING_LENGTH], chArray_SpacesRemoved_mk[MAX_STRING_LENGTH]; // A Character Array Is A String
	int iStringLength_mk;
	int i_mk, j_mk;

	//code
	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_mk, MAX_STRING_LENGTH);

	iStringLength_mk = MyStrlen(chArray_mk);
	j_mk = 0;
	for (i_mk = 0; i_mk < iStringLength_mk; i_mk++)
	{
		if (chArray_mk[i_mk] == ' ')
			continue;
		else
			{
				chArray_SpacesRemoved_mk[j_mk] = chArray_mk[i_mk];
				j_mk++;
			}
	}

	chArray_SpacesRemoved_mk[j_mk] = '\0';

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_mk);

	printf("\n\n");
	printf("String After Removal Of Spaces Is : \n\n");
	printf("%s\n", chArray_SpacesRemoved_mk);

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
