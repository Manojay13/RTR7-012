#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STRING_LENGTH 1024

struct CharacterCount_mk
{
	char ch_mk;
	int ch_count_mk;
} character_and_count_mk[] = { { 'A', 0 }, 
                            { 'B', 0 }, 
                            { 'C', 0 }, 
                            { 'D', 0 }, 
                            { 'E', 0 }, 
                            { 'F', 0 },
                            { 'G', 0 },
                            { 'H', 0 },
                            { 'I', 0 },
                            { 'J', 0 },
                            { 'K', 0 },
                            { 'L', 0 },
                            { 'M', 0 },
                            { 'N', 0 },
                            { 'O', 0 },
                            { 'P', 0 },
                            { 'Q', 0 },
                            { 'R', 0 },
                            { 'S', 0 },
                            { 'T', 0 },
                            { 'U', 0 },
                            { 'V', 0 },
                            { 'W', 0 },
                            { 'X', 0 },
                            { 'Y', 0 },
                            { 'Z', 0 } }; 

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count_mk) 
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(character_and_count_mk[0]) 
#define NUM_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS / SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS) 

// ENTRY POINT FUNCTION 
int main(void)
{
	//variable declarations
	char str_mk[MAX_STRING_LENGTH]; 
	int i_mk, j_mk, actual_string_length_mk = 0; 

	//code
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(str_mk, MAX_STRING_LENGTH); 

	actual_string_length_mk = strlen(str_mk); 

	printf("\n\n");
	printf("The String You Have Entered Is : \n\n");
	printf("%s\n\n", str_mk); 

	for (i_mk = 0; i_mk < actual_string_length_mk; i_mk++) 
	{
		for (j_mk = 0; j_mk < NUM_ELEMENTS_IN_ARRAY; j_mk++) 
		{
			str_mk[i_mk] = toupper(str_mk[i_mk]); 

			if (str_mk[i_mk] == character_and_count_mk[j_mk].ch_mk) 
			{
				character_and_count_mk[j_mk].ch_count_mk++; 
			}
		}
	}

	printf("\n\n");
	printf("The Number Of Occurences Of ALL Characters From The Alphabet Are As Follows : \n\n"); 

	for (i_mk = 0; i_mk < NUM_ELEMENTS_IN_ARRAY; i_mk++) 
	{
		printf("Character %c = %d\n", character_and_count_mk[i_mk].ch_mk, character_and_count_mk[i_mk].ch_count_mk); 
	}
	printf("\n\n");

	return(0);
}
