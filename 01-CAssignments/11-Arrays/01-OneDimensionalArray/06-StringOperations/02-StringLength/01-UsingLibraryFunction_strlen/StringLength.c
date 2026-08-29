#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <string.h> // Required for strlen()

#define MAX_STRING_LENGTH 512

int main(void)
{
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
	iStringLength_mk = strlen(chArray_mk);
	printf("Length Of String Is = %d Characters !!!\n\n", iStringLength_mk);

	exit(EXIT_SUCCESS);
}
