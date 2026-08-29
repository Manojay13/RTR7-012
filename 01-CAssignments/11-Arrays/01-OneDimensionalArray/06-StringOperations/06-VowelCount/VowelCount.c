#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	char chArray_mk[MAX_STRING_LENGTH]; // A Character Array Is A String
	int iStringLength_mk;
	int count_A_mk = 0, count_E_mk = 0, count_I_mk = 0, count_0_mk = 0, count_U_mk = 0; // Initial Counts = 0
	int i_mk;

	//code
	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_mk, MAX_STRING_LENGTH);

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_mk);

	iStringLength_mk = MyStrlen(chArray_mk);

	for (i_mk = 0; i_mk < iStringLength_mk; i_mk++)
	{
		switch (chArray_mk[i_mk])
		{
			case 'A':
			case 'a':
				count_A_mk++;
				break;
			case 'E':
			case 'e':
				count_E_mk++;
				break;
			case 'I':
			case 'i':
				count_I_mk++;
				break;
			case 'O':
			case 'o':
				count_0_mk++;
				break;
			case 'U':
			case 'u':
				count_U_mk++;
				break;
			default:
				break;
		}
	}

	printf("\n\n");
	printf("In The String Entered By You, The Vowels And The Number Of Their Occurences Are Are Follows: \n\n");
	printf("'A' Has Occured %d Times !!!\n\n", count_A_mk);
	printf("'E' Has Occured %d Times !!!\n\n", count_E_mk);
	printf("'I' Has Occured %d Times !!!\n\n", count_I_mk);
	printf("'O' Has Occured %d Times !!!\n\n", count_0_mk);
	printf("'U' Has Occured %d Times !!!\n\n", count_U_mk);

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
