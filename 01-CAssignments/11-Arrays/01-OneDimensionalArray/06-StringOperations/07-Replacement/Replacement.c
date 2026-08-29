// *** THSI PROGRAM REPLACES ALL VOWELS IN THE INPUT STRING WITH THE * (asterisk) SYMBOL ***
// *** FOR EXAMPLE, ORIGINAL STRING 'Dr. Vijay Dattatray Gokhale ASTROMEDICOMP' WILL BECOME 'Dr. V*j*y D*tt*tr*y* G*kh*le *STR*M*D*C*MP'
#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	void MyStrcpy(char[], char[]);

	//variable declarations
	char chArray_Original_mk[MAX_STRING_LENGTH], chArray_VowelsReplaced_mk[MAX_STRING_LENGTH]; // A Character Array Is A String
	int iStringLength_mk;
	int i_mk;

	//code
	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original_mk, MAX_STRING_LENGTH);

	// *** STRING OUTPUT ***
	MyStrcpy(chArray_VowelsReplaced_mk, chArray_Original_mk);

	iStringLength_mk = MyStrlen(chArray_VowelsReplaced_mk);

	for (i_mk = 0; i_mk < iStringLength_mk; i_mk++)
	{
		switch (chArray_VowelsReplaced_mk[i_mk])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				chArray_VowelsReplaced_mk[i_mk] = '*';
				break;
			default:
				break;
		}
	}

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_Original_mk);

	printf("\n\n");
	printf("String After Replacement Of Vowels By * Is : \n\n");
	printf("%s\n", chArray_VowelsReplaced_mk);

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

void MyStrcpy(char str_destination_mk[], char str_source_mk[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_mk = 0;
	int j_mk;

	//code
	iStringLength_mk = MyStrlen(str_source_mk);
	for (j_mk = 0; j_mk < iStringLength_mk; j_mk++)
		str_destination_mk[j_mk] = str_source_mk[j_mk];

	str_destination_mk[j_mk] = '\0';
}
