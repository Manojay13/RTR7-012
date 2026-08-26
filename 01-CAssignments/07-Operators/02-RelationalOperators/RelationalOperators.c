#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'


int main(void)
{
	//variable declarations
	int a_mk;
	int b_mk;
	int result_mk;

	//code
	printf("\n\n");
	printf("Enter One Integer : ");
	scanf("%d", &a_mk);

	printf("\n\n");
	printf("Enter Another Integer : ");
	scanf("%d", &b_mk);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE'.\n");
	printf("If Answer = 1, It Is 'TRUE'.\n\n");

	result_mk = (a_mk < b_mk);
	printf("(a_mk < b_mk) A_mk = %d Is Less Than B_mk = %d \t Answer_mk = %d\n", a_mk, b_mk, result_mk);

	result_mk = (a_mk > b_mk);
	printf("(a_mk > b_mk) A_mk = %d Is Greater Than _mk = %d \t Answer_mk = %d\n", a_mk, b_mk, result_mk);

	result_mk = (a_mk <= b_mk);
	printf("(a_mk <= b_mk) A_mk = %d Is Less Than Or Equal To B_mk = %d \t Answer_mk = %d\n", a_mk, b_mk, result_mk);

	result_mk = (a_mk >= b_mk);
	printf("(a_mk >= b_mk) A_mk = %d Is Greater Than Or Equal To B_mk = %d \t Answer_mk = %d\n", a_mk, b_mk, result_mk);

	result_mk = (a_mk == b_mk);
	printf("(a_mk == b_mk) A_mk = %d Is Equal To B_mk = %d \t Answer_mk = %d\n", a_mk, b_mk, result_mk);

	result_mk = (a_mk != b_mk);
	printf("(a_mk != b_mk) A_mk = %d Is NOT Equal To B_mk = %d \t Answer_mk = %d\n", a_mk, b_mk, result_mk);

	exit(EXIT_SUCCESS);

}
