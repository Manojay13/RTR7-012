#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
int main(void)
{
	//variable declarations
	int iArray_mk[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
	int int_size_mk;
	int iArray_size_mk;
	int iArray_num_elements_mk;

	float fArray_mk[] = { 1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f };
	int float_size_mk;
	int fArray_size_mk;
	int fArray_num_elements_mk;

	char cArray_mk[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P' };
	int char_size_mk;
	int cArray_size_mk;
	int cArray_num_elements_mk;

	//code

	// ****** iArray_mk[] ******
	printf("\n\n");
	printf("In-line Initialization And Piece-meal Display Of Elements of Array 'iArray_mk[]': \n\n");

	printf("iArray_mk[0] (1st Element)  = %d\n", iArray_mk[0]);
	printf("iArray_mk[1] (2nd Element)  = %d\n", iArray_mk[1]);
	printf("iArray_mk[2] (3rd Element)  = %d\n", iArray_mk[2]);
	printf("iArray_mk[3] (4th Element)  = %d\n", iArray_mk[3]);
	printf("iArray_mk[4] (5th Element)  = %d\n", iArray_mk[4]);
	printf("iArray_mk[5] (6th Element)  = %d\n", iArray_mk[5]);
	printf("iArray_mk[6] (7th Element)  = %d\n", iArray_mk[6]);
	printf("iArray_mk[7] (8th Element)  = %d\n", iArray_mk[7]);
	printf("iArray_mk[8] (9th Element)  = %d\n", iArray_mk[8]);
	printf("iArray_mk[9] (10th Element) = %d\n\n", iArray_mk[9]);

	int_size_mk = sizeof(int);
	iArray_size_mk = sizeof(iArray_mk);
	iArray_num_elements_mk = iArray_size_mk / int_size_mk;
	printf("Size Of Data type 'int'                                 = %d bytes\n", int_size_mk);
	printf("Number Of Elements In 'int' Array 'iArray_mk[]'            = %d Elements\n", iArray_num_elements_mk);
	printf("Size Of Array 'iArray_mk[]' (%d Elements * %d Bytes)        = %d Bytes\n\n", iArray_num_elements_mk, int_size_mk, iArray_size_mk);

	// ****** fArray_mk[] ******
	printf("\n\n");
	printf("In-line Initialization And Piece-meal Display Of Elements of Array 'fArray_mk[]': \n\n");
	printf("fArray_mk[0] (1st Element)  = %f\n", fArray_mk[0]);
	printf("fArray_mk[1] (2nd Element)  = %f\n", fArray_mk[1]);
	printf("fArray_mk[2] (3rd Element)  = %f\n", fArray_mk[2]);
	printf("fArray_mk[3] (4th Element)  = %f\n", fArray_mk[3]);
	printf("fArray_mk[4] (5th Element)  = %f\n", fArray_mk[4]);
	printf("fArray_mk[5] (6th Element)  = %f\n", fArray_mk[5]);
	printf("fArray_mk[6] (7th Element)  = %f\n", fArray_mk[6]);
	printf("fArray_mk[7] (8th Element)  = %f\n", fArray_mk[7]);

	// Memory Boundary Extension Warnings: 
	// The lines below are left out of active execution because fArray_mk only allocates 8 indexes (0 to 7).
	// Calling index 8 or 9 reads untracked memory and outputs garbage data.
	// printf("fArray_mk[8] (9th Element)  = %f\n", fArray_mk[8]);
	// printf("fArray_mk[9] (10th Element) = %f\n\n", fArray_mk[9]);

	float_size_mk = sizeof(float);
	fArray_size_mk = sizeof(fArray_mk);
	fArray_num_elements_mk = fArray_size_mk / float_size_mk;
	printf("Size Of Data type 'float'                               = %d bytes\n", float_size_mk);
	printf("Number Of Elements In 'float' Array 'fArray_mk[]'          = %d Elements\n", fArray_num_elements_mk);
	printf("Size Of Array 'fArray_mk[]' (%d Elements * %d Bytes)      = %d Bytes\n\n", fArray_num_elements_mk, float_size_mk, fArray_size_mk);

	// ****** cArray_mk[] ******
	printf("\n\n");
	printf("In-line Initialization And Piece-meal Display Of Elements of Array 'cArray_mk[]': \n\n");
	printf("cArray_mk[0] (1st Element)   = %c\n", cArray_mk[0]);
	printf("cArray_mk[1] (2nd Element)   = %c\n", cArray_mk[1]);
	printf("cArray_mk[2] (3rd Element)   = %c\n", cArray_mk[2]);
	printf("cArray_mk[3] (4th Element)   = %c\n", cArray_mk[3]);
	printf("cArray_mk[4] (5th Element)   = %c\n", cArray_mk[4]);
	printf("cArray_mk[5] (6th Element)   = %c\n", cArray_mk[5]);
	printf("cArray_mk[6] (7th Element)   = %c\n", cArray_mk[6]);
	printf("cArray_mk[7] (8th Element)   = %c\n", cArray_mk[7]);
	printf("cArray_mk[8] (9th Element)   = %c\n", cArray_mk[8]);
	printf("cArray_mk[9] (10th Element)  = %c\n", cArray_mk[9]);
	printf("cArray_mk[10] (11th Element) = %c\n", cArray_mk[10]);
	printf("cArray_mk[11] (12th Element) = %c\n", cArray_mk[11]);
	printf("cArray_mk[12] (13th Element) = %c\n\n", cArray_mk[12]);

	char_size_mk = sizeof(char);
	cArray_size_mk = sizeof(cArray_mk);
	cArray_num_elements_mk = cArray_size_mk / char_size_mk;
	printf("Size Of Data type 'char'                                = %d bytes\n", char_size_mk);
	printf("Number Of Elements In 'char' Array 'cArray_mk[]'           = %d Elements\n", cArray_num_elements_mk);
	printf("Size Of Array 'cArray_mk[]' (%d Elements * %d Bytes)        = %d Bytes\n\n", cArray_num_elements_mk, char_size_mk, cArray_size_mk);

	exit(EXIT_SUCCESS);

}
