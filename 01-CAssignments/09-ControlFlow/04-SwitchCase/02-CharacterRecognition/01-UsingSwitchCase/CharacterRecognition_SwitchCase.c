#include<stdio.h>// for printf()
#include<stdlib.h>// for getch()
#include<stdlib.h>// for exit()

// ASCII Values For 'A' to 'Z' => 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII values for 'a' to z =>97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII Values For '0' to '9' =>48 to 57
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable declaration
	char ch_mk;
	int ch_value_mk;

	//code
	printf("\n\n");
	printf("Enter the Character: ");
	ch_mk = getch();

	printf("\n\n");

	switch(ch_mk)
	{
		//FALL THROUGH CONDITION
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
			printf("Character \'%c\' Entered By you, Is A VOWEL CHARACTER From The "
				"English Alphabet !!!\n\n", ch_mk);
			break;
		default:
			ch_value_mk = (int)ch_mk;
			

			//If The Character Has ASCII Value Between 65 AND 90 )R Between 97 AND 122,
			//It Is Still A Letter Of The Alphabet , But It Is A 'CONSONANT', and NOT a'VOWEL'...
			if((ch_value_mk >= CHAR_ALPHABET_UPPER_CASE_BEGINNING  &&
			    ch_value_mk <= CHAR_ALPHABET_UPPER_CASE_ENDING) ||
			    (ch_value_mk >= CHAR_ALPHABET_LOWER_CASE_BEGINNING &&
			     ch_value_mk <= CHAR_ALPHABET_LOWER_CASE_ENDING))
			{
				printf("Character \'%c%\' Entered By You ,Is  A CONSONANT from "
					"The English Alphabet !!!\n\n", ch_mk);
			}
			else if(ch_value_mk >= CHAR_DIGIT_BEGINNING && 
				ch_value_mk <= CHAR_DIGIT_ENDING)
			{
				printf("Character \'%c\' Entered By You ,Is A DIGIT CHARACTER!!!\n\n", ch_mk);
			}
			else
			{
				printf("Character \'%c\' Entered By You , Is A SPECIAL CHARACTER!!!\n\n", ch_mk);
			}
			break;

	}

	printf("Switch Case Block Complete !!!\n");
	exit(EXIT_SUCCESS);
}
