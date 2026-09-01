#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrcat_mk(char *, char *);
	int MyStrlen_mk(char *);

	//variable declarations
	char *chArray_One_mk = NULL, *chArray_Two_mk = NULL; // A Character Array Is A String

	//code

	// *** STRING INPUT ***
	printf("\n\n");
	chArray_One_mk = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_One_mk == NULL)
	{
		printf("MEMORY ALLOCATION TO FIRST STRING FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	printf("Enter First String : \n\n");
	gets_s(chArray_One_mk, MAX_STRING_LENGTH);

	printf("\n\n");
	chArray_Two_mk = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_Two_mk == NULL)
	{
		printf("MEMORY ALLOCATION TO SECOND STRING FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}
	printf("Enter Second String : \n\n");
	gets_s(chArray_Two_mk, MAX_STRING_LENGTH);

	// *** STRING CONCAT ***
	printf("\n\n");
	printf("****** BEFORE CONCATENATION ******");
	printf("\n\n");
	printf("The Original First String Entered By You (i.e: 'chArray_One_mk[]') Is : \n\n");
	printf("%s\n", chArray_One_mk);

	printf("\n\n");
	printf("The Original Second String Entered By You (i.e: 'chArray_Two_mk[]') Is : \n\n");
	printf("%s\n", chArray_Two_mk);

	MyStrcat_mk(chArray_One_mk, chArray_Two_mk);

	printf("\n\n");
	printf("****** AFTER CONCATENATION ******");
	printf("\n\n");
	printf("'chArray_One_mk[]' Is : \n\n");
	printf("%s\n", chArray_One_mk);

	printf("\n\n");
	printf("'chArray_Two_mk[]' Is : \n\n");
	printf("%s\n", chArray_Two_mk);

	if (chArray_Two_mk)
	{
		free(chArray_Two_mk);
		chArray_Two_mk = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO SECOND STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	if (chArray_One_mk)
	{
		free(chArray_One_mk);
		chArray_One_mk = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO FIRST STRING HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	exit(EXIT_SUCCESS);
}

void MyStrcat_mk(char *str_destination_mk, char *str_source_mk)
{
	//function prototype
	int MyStrlen_mk(char *);

	//variable declarations
	int iStringLength_Source_mk = 0, iStringLength_Destination_mk = 0;
	int i_mk, j_mk;

	//code
	iStringLength_Source_mk = MyStrlen_mk(str_source_mk);
	iStringLength_Destination_mk = MyStrlen_mk(str_destination_mk);

	// ARRAY INDICES BEGIN FROM 0, HENCE, LAST VALID INDEX OF ARRAY WILL ALWAYS BE (LENGTH - 1)
	// SO, CONCATENATION MUST BEGIN FROM INDEX NUMBER EQUAL TO LENGTH OF THE ARRAY 'str_destination_mk'
	// WE NEED TO PUT THE CHARACTER WHICH IS AT FIRST INDEX OF 'str_source_mk' TO THE (LAST INDEX + 1) OF 'str_destination_mk'
	for (i_mk = iStringLength_Destination_mk, j_mk = 0; j_mk < iStringLength_Source_mk; i_mk++, j_mk++)
	{
		*(str_destination_mk + i_mk) = *(str_source_mk + j_mk);
	}
	*(str_destination_mk + i_mk) = '\0';
}

int MyStrlen_mk(char *str_mk)
{
	//variable declarations
	int j_mk;
	int string_length_mk = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURENCE OF NULL-TERMINATING CHARACTER (\0) ***
	for (j_mk = 0; j_mk < MAX_STRING_LENGTH; j_mk++)
	{
		if (str_mk[j_mk] == '\0')
			break;
		else
			string_length_mk++;
	}
	return(string_length_mk);
}
