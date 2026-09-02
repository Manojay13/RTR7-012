#include <stdio.h>
#include <ctype.h> // Fixed: Swapped <string.h> for correct standard <ctype.h> header required to use toupper() cleanly
#include <conio.h> // Required for getch()

int main(void)
{
	// variable declarations
	char ch_mk, ch_i_mk;
	unsigned int ascii_ch_mk = 0;

	// code
	printf("\n\n");
	printf("Enter The First Character Of First Name: ");
	ch_mk = getch();

	ch_mk = toupper(ch_mk);

	for (ch_i_mk = 'A'; ch_i_mk <= 'Z'; ch_i_mk++)
	{
		if (ch_mk == ch_i_mk)
		{
			ascii_ch_mk = (unsigned int)ch_mk;
			goto result_output_mk; // program flow jumps directly to label "result_output_mk"
		}
	}

	printf("\n\n");
	printf("Goto statement not executed, so printing \"Hello, world !!!\".\n"); // will be omitted if 'goto' statement is executed

result_output_mk: // Label itself does not alter flow of program. Following code is executed regardless of whether goto statement is executed or not.
	printf("\n\n");

	if (ascii_ch_mk == 0)
	{
		printf("You must have a strange name! Could not find the character '%c' in the entire English Alphabet!\n", ch_mk);
	}
	else
	{
		printf("Character '%c' found. It has ASCII value %u.\n", ch_mk, ascii_ch_mk);
	}

	printf("\n\n");
	return(0);
}
