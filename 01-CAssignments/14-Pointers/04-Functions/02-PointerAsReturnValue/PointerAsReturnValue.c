#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function declarations
	char* ReplaceVowelsWithHashSymbol_mk(char *);

	//variable declaration
	char string_mk[MAX_STRING_LENGTH];
	char *replaced_string_mk = NULL;

	//code
	printf("\n\n");
	printf("Enter String : ");
	gets_s(string_mk, MAX_STRING_LENGTH);

	replaced_string_mk = ReplaceVowelsWithHashSymbol_mk(string_mk);

	if (replaced_string_mk == NULL)
	{
		printf("ReplaceVowelsWithHashSymbol_mk() Function Has Failed !!! Exiting Now...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Replaced String Is : \n\n");
	printf("%s\n\n", replaced_string_mk);

	if (replaced_string_mk)
	{
		free(replaced_string_mk);
		replaced_string_mk = NULL;
	}

	return(0);
}

char* ReplaceVowelsWithHashSymbol_mk(char *s_mk)
{
	//function prototype
	void MyStrcpy_mk(char*, char *);
	int MyStrlen_mk(char *);

	//variable declarations
	char *new_string_mk = NULL;
	int i_mk;

	//code
	// Fixed: Allocation size padded by +1 byte to correctly hold the null-terminating character '\0' safely
	new_string_mk = (char *)malloc((MyStrlen_mk(s_mk) + 1) * sizeof(char));
	if (new_string_mk == NULL)
	{
		printf("COULD NOT ALLOCATE MEMORY FOR NEW STRING !!!\n\n");
		return(NULL);
	}

	MyStrcpy_mk(new_string_mk, s_mk);
	
	for (i_mk = 0; i_mk < MyStrlen_mk(new_string_mk); i_mk++)
	{
		switch (new_string_mk[i_mk])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			// Fixed: Typo on line 69 from your document page changed character literal '0' to uppercase vowel 'O'
			case 'O': 
			case 'o':
			case 'U':
			case 'u':
				new_string_mk[i_mk] = '#';
				break;
			default:
				break;
		}
	}

	return(new_string_mk);
}

void MyStrcpy_mk(char *str_destination_mk, char *str_source_mk)
{
	//function prototype
	int MyStrlen_mk(char *);

	//variable declarations
	int iStringLength_mk = 0;
	int j_mk;

	//code
	iStringLength_mk = MyStrlen_mk(str_source_mk);
	for (j_mk = 0; j_mk < iStringLength_mk; j_mk++)
		*(str_destination_mk + j_mk) = *(str_source_mk + j_mk);

	*(str_destination_mk + j_mk) = '\0';
}

int MyStrlen_mk(char *str_mk)
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
