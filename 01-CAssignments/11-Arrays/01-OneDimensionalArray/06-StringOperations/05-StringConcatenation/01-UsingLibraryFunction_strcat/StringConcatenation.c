#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <string.h> // Required for strcat()

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declarations
	char chArray_One_mk[MAX_STRING_LENGTH], chArray_Two_mk[MAX_STRING_LENGTH]; // A Character Array Is A String

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_One_mk, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(chArray_Two_mk, MAX_STRING_LENGTH);

	// *** STRING CONCAT ***
	printf("\n\n");
	printf("****** BEFORE CONCATENATION ******");
	printf("\n\n");
	printf("The Original First String Entered By You (i.e : 'chArray_One_mk[]') Is : \n\n");
	printf("%s\n", chArray_One_mk);

	printf("\n\n");
	printf("The Original Second String Entered By You (i.e : 'chArray_Two_mk[]') Is : \n\n");
	printf("%s\n", chArray_Two_mk);

	strcat(chArray_One_mk, chArray_Two_mk);

	printf("\n\n");
	printf("****** AFTER CONCATENATION ******");
	printf("\n\n");
	printf("'chArray_One_mk[]' Is : \n\n");
	printf("%s\n", chArray_One_mk);

	printf("\n\n");
	printf("'chArray_Two_mk[]' Is : \n\n");
	printf("%s\n", chArray_Two_mk);

	exit(EXIT_SUCCESS);
}
