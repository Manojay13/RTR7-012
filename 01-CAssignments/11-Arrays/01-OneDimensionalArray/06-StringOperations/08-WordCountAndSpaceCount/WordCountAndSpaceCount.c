#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	void MyStrcpy(char[], char[]);

	//variable declarations
	char chArray_mk[MAX_STRING_LENGTH]; // A Character Array Is A String
	int iStringLength_mk;
	int i_mk;
	int word_count_mk = 0, space_count_mk = 0;

	//code
	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_mk, MAX_STRING_LENGTH);

	iStringLength_mk = MyStrlen(chArray_mk);

	for (i_mk = 0; i_mk < iStringLength_mk; i_mk++)
	{
		switch (chArray_mk[i_mk])
		{
			case 32: //32 IS THE ASCII VALUE FOR SPACE (' ') CHARACTER
				space_count_mk++;
				break;
			default:
				break;
		}
	}

	word_count_mk = space_count_mk + 1;

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_mk);

	printf("\n\n");
	printf("Number Of Spaces In The Input String = %d\n\n", space_count_mk);
	printf("Number Of Words In The Input String = %d\n\n", word_count_mk);

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
