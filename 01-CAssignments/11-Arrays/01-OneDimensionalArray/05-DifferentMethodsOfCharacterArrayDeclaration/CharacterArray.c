#include <stdio.h>

int main(void)
{
	//variable declarations
	char chArray_01_mk[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' }; // Must give \0 Explicitly For Proper Initialization
	char chArray_02_mk[9] = { 'W', 'E', 'L', 'C', 'O', 'M', 'E', 'S', '\0' }; // Must give \0 Explicitly For Proper Initialization
	char chArray_03_mk[] = { 'Y', 'O', 'U', '\0' }; // Must give \0 Explicitly For Proper Initialization
	char chArray_04_mk[] = "To"; // \0 is assumed, size is given as 3, although string has only 2 characters
	char chArray_05_mk[] = "REAL TIME RENDERING BATCH OF 2026-27"; // \0 is assumed, size is given as 37, although string has 36 characters

	char chArray_WithoutNullTerminator_mk[] = { 'H', 'e', 'l', 'l', 'o' };

	//code
	printf("\n\n");

	printf("Size Of chArray_01_mk: %lu\n\n", sizeof(chArray_01_mk));
	printf("Size Of chArray_02_mk: %lu\n\n", sizeof(chArray_02_mk));
	printf("Size Of chArray_03_mk: %lu\n\n", sizeof(chArray_03_mk));
	printf("Size Of chArray_04_mk: %lu\n\n", sizeof(chArray_04_mk));
	printf("Size Of chArray_05_mk: %lu\n\n", sizeof(chArray_05_mk));

	printf("\n\n");

	printf("The Strings Are: \n\n");
	printf("chArray_01_mk: %s\n\n", chArray_01_mk);
	printf("chArray_02_mk: %s\n\n", chArray_02_mk);
	printf("chArray_03_mk: %s\n\n", chArray_03_mk);
	printf("chArray_04_mk: %s\n\n", chArray_04_mk);
	printf("chArray_05_mk: %s\n\n", chArray_05_mk);

	printf("\n\n");
	printf("Size Of chArray_WithoutNullTerminator_mk: %lu\n\n", sizeof(chArray_WithoutNullTerminator_mk));
	printf("chArray_WithoutNullTerminator_mk: %s\n\n", chArray_WithoutNullTerminator_mk); //Will display garbage value at the end of string due to absence of \0

	return(0);
}
