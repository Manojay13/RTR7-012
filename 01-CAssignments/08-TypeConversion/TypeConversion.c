#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//variable declarations
	int i_mk, j_mk;
	char ch_01_mk, ch_02_mk;

	int a_mk, result_int_mk;
	float f_mk, result_float_mk;

	int i_explicit_mk;
	float f_explicit_mk;

	//code
	printf("\n\n");

	//INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'char' AND 'int' TYPES....
	i_mk = 70;
	ch_01_mk = i_mk;
	printf("I_mk = %d\n", i_mk);
	printf("Charater 1 (after ch_01_mk = i_mk) = %c\n\n", ch_01_mk);

	ch_02_mk = 'Q';
	j_mk = ch_02_mk;
	printf("Charater 2 = %c\n", ch_02_mk);
	printf("J_mk (after j_mk = ch_02_mk) = %d\n\n", j_mk);

	//IMPLICIT CONVERSION OF 'int' TO 'float'...
	a_mk = 5;
	f_mk = 7.8f;
	result_float_mk = a_mk + f_mk;
	printf("Integer a_mk = %d And Floating-Point Number %f Added Gives Floating-Point Sum = %f\n\n", a_mk, f_mk, result_float_mk);

	result_int_mk = a_mk + f_mk;
	printf("Integer a_mk = %d And Floating-Point Number %f Added Gives Integer Sum = %d\n\n", a_mk, f_mk, result_int_mk);

	//EXPLICIT TYPE-CASTING USING CAST OPERATOR...
	f_explicit_mk = 30.121995f;
	i_explicit_mk = (int)f_explicit_mk;
	printf("Floating Point Number Which Will Be Type Casted Explicitly = %f\n", f_explicit_mk);
	printf("Resultant Integer After Explicit Type Casting Of %f = %d\n\n", f_explicit_mk, i_explicit_mk);

	exit(EXIT_SUCCESS);

}
