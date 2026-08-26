#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//variable declarations
	int a_mk = 5;
	int b_mk = 10;

	//code
	printf("\n\n");
	printf("A_mk = %d\n", a_mk);
	printf("A_mk = %d\n", a_mk++);
	printf("A_mk = %d\n", a_mk);
	printf("A_mk = %d\n\n", ++a_mk);

	printf("B_mk = %d\n", b_mk);
	printf("B_mk = %d\n", b_mk--);
	printf("B_mk = %d\n", b_mk);
	printf("B_mk = %d\n\n", --b_mk);

	exit(EXIT_SUCCESS);

}
