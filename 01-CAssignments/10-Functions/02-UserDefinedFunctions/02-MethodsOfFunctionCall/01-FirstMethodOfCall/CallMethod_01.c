#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
// ****** USER DEFINED FUNCTIONS : METHOD OF CALLING FUNCTION 1 ******
// ****** CALLING ALL FUNCTIONS IN main() DIRECTLY ******

// Entry-Point Function => main() => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc_mk, char *argv_mk[], char *envp_mk[])
{
	//function prototypes OR declarations
	void MyAddition(void);
	int MySubtraction(void);
	void MyMultiplication(int, int);
	int MyDivision(int, int);

	//variable declarations
	int result_subtraction_mk;
	int a_multiplication_mk, b_multiplication_mk;
	int a_division_mk, b_division_mk, result_division_mk;

	//code

	// *** ADDITION ***
	MyAddition(); //function call

	// *** SUBTRACTION ***
	result_subtraction_mk = MySubtraction(); //function call
	printf("\n\n");
	printf("Subtraction Yields Result = %d\n", result_subtraction_mk);

	// *** MULTIPLICATION ***
	printf("\n\n");
	printf("Enter Integer Value For 'A_mk' For Multiplication : ");
	scanf("%d", &a_multiplication_mk);

	printf("\n\n");
	printf("Enter Integer Value For 'B_mk' For Multiplication : ");
	scanf("%d", &b_multiplication_mk);

	MyMultiplication(a_multiplication_mk, b_multiplication_mk); //function call

	// *** DIVISION ***
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Division : ");
	scanf("%d", &a_division_mk);

	printf("\n\n");
	printf("Enter Integer Value For 'B' For Division : ");
	scanf("%d", &b_division_mk);

	result_division_mk = MyDivision(a_division_mk, b_division_mk); //function call
	printf("\n\n");
	printf("Division Of %d and %d Gives = %d (Quotient)\n", a_division_mk, b_division_mk, result_division_mk);

	printf("\n\n");

	exit(EXIT_SUCCESS);
}

// *** Function Definition Of MyAddition() ******
void MyAddition(void) //function definition
{
	//variable declarations: local variables to MyAddition()
	int a_mk, b_mk, sum_mk;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A_mk' For Addition : ");
	scanf("%d", &a_mk);

	printf("\n\n");
	printf("Enter Integer Value For 'B_mk' For Addition : ");
	scanf("%d", &b_mk);

	sum_mk = a_mk + b_mk;

	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a_mk, b_mk, sum_mk);
}

// *** Function Definition Of MySubtraction() ******
int MySubtraction(void) //function definition
{
	//variable declarations: local variables to MySubtraction()
	int a_mk, b_mk, subtraction_mk;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A_mk' For Subtraction : ");
	scanf("%d", &a_mk);

	printf("\n\n");
	printf("Enter Integer Value For 'B_mk' For Subtraction : ");
	scanf("%d", &b_mk);

	subtraction_mk = a_mk - b_mk;
	return(subtraction_mk);
}

// *** Function Definition Of MyMultiplication() ******
void MyMultiplication(int a_mk, int b_mk) //function definition
{
	//variable declarations: local variables to MyMultiplication()
	int multiplication_mk;

	//code
	multiplication_mk = a_mk * b_mk;

	printf("\n\n");
	printf("Multiplication Of %d And %d = %d\n\n", a_mk, b_mk, multiplication_mk);
}

// *** Function Definition Of MyDivision() ******
int MyDivision(int a_mk, int b_mk) //function definition
{
	//variable declarations: local variables to MyDivision()
	int division_quotient_mk;

	//code
	if (a_mk > b_mk)
		division_quotient_mk = a_mk / b_mk;
	else
		division_quotient_mk = b_mk / a_mk;

	return(division_quotient_mk);
}
