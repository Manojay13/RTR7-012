#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen_mk(char *);

	//variable declarations
	char *chArray_mk = NULL; //Character Array Can Be Represented By A char pointer to Mark The Base Address (char *)
	int iStringLength_mk = 0;

	//code
	printf("\n\n");
	chArray_mk = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray_mk == NULL)
	{
		printf("MEMORY ALLOCATION TO CHARACTER ARRAY FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}

	// *** STRING INPUT ***
	printf("Enter A String : \n\n");
	gets_s(chArray_mk, MAX_STRING_LENGTH);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_mk);

	// *** STRING LENGTH ***
	printf("\n\n");
	iStringLength_mk = MyStrlen_mk(chArray_mk);
	printf("Length Of String Is = %d Characters !!!\n\n", iStringLength_mk);

	if (chArray_mk)
	{
		free(chArray_mk);
		chArray_mk = NULL;
	}

	exit(EXIT_SUCCESS);
}

int MyStrlen_mk(char *str_mk)
{
	//variable declarations
	int j_mk;
	int string_length_mk = 0;

	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURNCE OF NULL-TERMINATING CHARACTER (\0) ***
	for (j_mk = 0; j_mk < MAX_STRING_LENGTH; j_mk++)
	{
		if (*(str_mk + j_mk) == '\0')
			break;
		else
			string_length_mk++;
	}

	return(string_length_mk);
}
