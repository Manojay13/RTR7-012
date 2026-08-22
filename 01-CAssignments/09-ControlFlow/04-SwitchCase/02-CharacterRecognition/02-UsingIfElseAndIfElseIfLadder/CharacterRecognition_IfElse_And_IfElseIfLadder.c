#include<stdio.h> //for printf()
#include<conio.h>//for getch()
#include<stdlib.h>//for exit()

//ASCII Values For 'A' to 'Z' => 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII  Values For 'a' to 'z' => 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 112

//ASCII Values For '0' to 9 => 48 to 57
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable declaration
	char ch_mk;
	int ch_value_mk;

	printf("\n\n");
	printf("Enter The Character: ");
	ch_mk = getch();

	if((ch_mk == 'a' || ch_mk == 'A') || (ch_mk == 'e' || ch_mk == 'E') || (ch_mk =='i' || ch_mk == 'I')
	    ||(ch_mk == 'o' || ch_mk=='O') || (ch_mk == 'u'|| ch_mk == 'U'))
	{
		printf("Character \'%c\' Entered By You, Is A Vowel CHARACTER From The"
			" English Alphabet !!!\n\n", ch_mk);
	}
	else
	{
		ch_value_mk = (int)ch_mk;

		//If The Character Has ASCII Value Between 65 AND 90 OR BETWEEN 97 AND 122,
		//It is still Letter Of Aplhabet ,But It Is A 'CONSONANT', and
		//NOT a 'VOWEL'...
		if((ch_value_mk >= CHAR_ALPHABET_UPPER_CASE_BEGINNING &&
		    ch_value_mk <= CHAR_ALPHABET_UPPER_CASE_ENDING) ||
		    (ch_value_mk >= CHAR_ALPHABET_LOWER_CASE_BEGINNING &&
		     ch_value_mk <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Enntered By You , Is A CONSONAT CHARACTER FROM "
			       " The English Alphabet !!!\n\n", ch_mk);
		}
		else if(ch_value_mk >= CHAR_DIGIT_BEGINNING && 
			ch_value_mk <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You, Is DIGIT CHARACTER !!!\n\n", ch_mk);
		}
		else
		{
			printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n\n", ch_mk);
		}
	}
	exit(EXIT_SUCCESS);
}
