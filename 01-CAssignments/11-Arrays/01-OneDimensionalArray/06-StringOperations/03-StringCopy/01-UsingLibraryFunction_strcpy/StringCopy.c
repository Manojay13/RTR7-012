#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <string.h> // Required for strcpy()

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declarations
	char chArray_Original_mk[MAX_STRING_LENGTH], chArray_Copy_mk[MAX_STRING_LENGTH]; // A Character Array Is A String

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_mk, MAX_STRING_LENGTH);

	// *** STRING COPY ***
	strcpy(chArray_Copy_mk, chArray_Original_mk);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'chArray_Original_mk[]') Is : \n\n");
	printf("%s\n", chArray_Original_mk);

	printf("\n\n");
	printf("The Copied String (i.e : 'chArray_Copy_mk[]') Is : \n\n");
	printf("%s\n", chArray_Copy_mk);

	exit(EXIT_SUCCESS);
}
