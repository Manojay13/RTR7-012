#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_STRING_LENGTH 512

#define SPACE ' '

#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	char MyToUpper(char);

	//variable declarations
	char chArray_mk[MAX_STRING_LENGTH], chArray_CapitalizedFirstLetterOfEveryWord_mk[MAX_STRING_LENGTH]; // A Character Array Is A String
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
		if (i_mk == 0) //First Letter Of Any Sentence Must Be A CAPITAL LETTER
			chArray_CapitalizedFirstLetterOfEveryWord_mk[j_mk] = MyToUpper(chArray_mk[i_mk]);

		else if (chArray_mk[i_mk] == SPACE) //First Letter Of Every Word In The Sentence Must Be A CAPITAL LETTER. Words Are Separated By Spaces.
		{
			chArray_CapitalizedFirstLetterOfEveryWord_mk[j_mk] = chArray_mk[i_mk];
			chArray_CapitalizedFirstLetterOfEveryWord_mk[j_mk + 1] = MyToUpper(chArray_mk[i_mk + 1]);

			//SINCE, ALREADY TWO CHARACTERS (AT INDICES 'i_mk' AND i_mk + 1 HAVE BEEN
			//CONSIDERED IN THIS else-if BLOCK...WE ARE EXTRA-INCREMENTING 'i_mk' AND 'j_mk' BY 1
			j_mk++;
			i_mk++;
		}

		else if ((chArray_mk[i_mk] == FULLSTOP || chArray_mk[i_mk] == COMMA || chArray_mk[i_mk] == EXCLAMATION || chArray_mk[i_mk] == QUESTION_MARK) && (chArray_mk[i_mk] != SPACE)) //First Letter Of Every Word After Punctuation Mark, In The Sentence Must Be A CAPITAL LETTER. Words Are Separated By Punctuations.
		{
			chArray_CapitalizedFirstLetterOfEveryWord_mk[j_mk] = chArray_mk[i_mk];
			chArray_CapitalizedFirstLetterOfEveryWord_mk[j_mk + 1] = SPACE;
			chArray_CapitalizedFirstLetterOfEveryWord_mk[j_mk + 2] = MyToUpper(chArray_mk[i_mk + 1]);

			// SINCE, ALREADY TWO CHARACTERS (AT INDICES 'i_mk' AND i_mk + 1 HAVE BEEN CONSIDERED IN THIS else-if BLOCK... WE ARE EXTRA-INCREMENTING 'i_mk' BY 1
			// SINCE, ALREADY THREE CHARACTERS (AT INDICES 'j_mk' AND (j_mk+1) AND (j_mk+2) HAVE BEEN CONSIDERED IN THIS else-if BLOCK...WE ARE EXTRA-INCREMENTING 'j_mk' BY 2
			j_mk = j_mk + 2;
			i_mk++;
		}

		else
			chArray_CapitalizedFirstLetterOfEveryWord_mk[j_mk] = chArray_mk[i_mk];

		j_mk++;
	}

	chArray_CapitalizedFirstLetterOfEveryWord_mk[j_mk] = '\0';

	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray_mk);

	printf("\n\n");
	printf("String After Capitalizing First Letter Of Every Word : \n\n");
	printf("%s\n", chArray_CapitalizedFirstLetterOfEveryWord_mk);

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

char MyToUpper(char ch_mk)
{
	//variable declaration
	int num_mk;
	int c_mk;

	//code
	// ASCII VALUE OF 'a' (97) - ASCII VALUE OF 'A' (65) = 32
	// THIS SUBTRACTION WILL GIVE THE EXACT DIFFERENCE BETWEEN THE UPPER AND LOWER CASE COUNTERPARTS OF EACH LETTER OF THE ALPHABET
	// IF THIS DIFFERENCE IS SUBTRACTED FROM THE ASCII VALUE OF A LOWER CASE LETTER, THE RESULTANT ASCII VALUE WILL BE THAT OF ITS UPPER CASE COUNTER-PART, HENCE, HELPING US TO FIND ITS UPPER CASE LETTER !!!
	// ASCII VALUES OF 'a' to 'z' => 97 TO 122
	// ASCII VALUES OF 'A' to 'Z' => 65 TO 90
	num_mk = 'a' - 'A';

	if ((int)ch_mk >= 97 && (int)ch_mk <= 122)
	{
		c_mk = (int)ch_mk - num_mk;
		return((char)c_mk);
	}
	else
		return(ch_mk);
}
