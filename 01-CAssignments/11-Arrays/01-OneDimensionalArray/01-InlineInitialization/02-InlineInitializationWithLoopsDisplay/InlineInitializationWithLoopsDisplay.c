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

	char cArray_mk[] = { 'M','K','A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P' };
	int char_size_mk;
	int cArray_size_mk;
	int cArray_num_elements_mk;

	int i_mk;

	//code

	// ****** iArray_mk[] ******
	printf("\n\n");
	printf("In-line Initialization And Loop (for) Display Of Elements of Array 'iArray_mk[]': \n\n");

	int_size_mk = sizeof(int);
	iArray_size_mk = sizeof(iArray_mk);
	iArray_num_elements_mk = iArray_size_mk / int_size_mk;

	for (i_mk = 0; i_mk < iArray_num_elements_mk; i_mk++)
	{
		printf("iArray_mk[%d] (Element %d) = %d\n", i_mk, (i_mk + 1), iArray_mk[i_mk]);
	}

	printf("\n\n");
	printf("Size Of Data type 'int'                                 = %d bytes\n", int_size_mk);
	printf("Number Of Elements In 'int' Array 'iArray_mk[]'            = %d Elements\n", iArray_num_elements_mk);
	printf("Size Of Array 'iArray_mk[]' (%d Elements * %d Bytes)        = %d Bytes\n\n", iArray_num_elements_mk, int_size_mk, iArray_size_mk);

	// ****** fArray_mk[] ******
	printf("\n\n");
	printf("In-line Initialization And Loop (while) Display Of Elements of Array 'fArray_mk[]': \n\n");

	float_size_mk = sizeof(float);
	fArray_size_mk = sizeof(fArray_mk);
	fArray_num_elements_mk = fArray_size_mk / float_size_mk;

	i_mk = 0;
	while (i_mk < fArray_num_elements_mk)
	{
		printf("fArray_mk[%d] (Element %d) = %f\n", i_mk, (i_mk + 1), fArray_mk[i_mk]);
		i_mk++;
	}

	printf("\n\n");
	printf("Size Of Data type 'float'                               = %d bytes\n", float_size_mk);
	printf("Number Of Elements In 'float' Array 'fArray_mk[]'          = %d Elements\n", fArray_num_elements_mk);
	printf("Size Of Array 'fArray_mk[]' (%d Elements * %d Bytes)      = %d Bytes\n\n", fArray_num_elements_mk, float_size_mk, fArray_size_mk);

	// ****** cArray_mk[] ******
	printf("\n\n");
	printf("In-line Initialization And Loop (do-while) Display Of Elements of Array 'cArray_mk[]': \n\n");

	char_size_mk = sizeof(char);
	cArray_size_mk = sizeof(cArray_mk);
	cArray_num_elements_mk = cArray_size_mk / char_size_mk;

	i_mk = 0;
	do
	{
		printf("cArray_mk[%d] (Element %d) = %c\n", i_mk, (i_mk + 1), cArray_mk[i_mk]);
		i_mk++;
	} while (i_mk < cArray_num_elements_mk);

	printf("\n\n");
	printf("Size Of Data type 'char'                                = %d bytes\n", char_size_mk);
	printf("Number Of Elements In 'char' Array 'cArray_mk[]'           = %d Elements\n", cArray_num_elements_mk);
	printf("Size Of Array 'cArray_mk[]' (%d Elements * %d Bytes)        = %d Bytes\n\n", cArray_num_elements_mk, char_size_mk, cArray_size_mk);

	exit(EXIT_SUCCESS);
}
