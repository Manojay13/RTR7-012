#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdlib.h' contains declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc_mk, char *argv_mk[], char *envp_mk[])
{
	//function prototype / declaration / signature
	int MyAddition(int, int);

	//variable declarations : local variables to main()
	int a_mk, b_mk, result_mk;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A_mk' : ");
	scanf("%d", &a_mk);

	printf("\n\n");
	printf("Enter Integer Value For 'B_mk' : ");
	scanf("%d", &b_mk);

	result_mk = MyAddition(a_mk, b_mk); //function call
	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a_mk, b_mk, result_mk);

	exit(EXIT_SUCCESS);
}

// ****** USER DEFINED FUNCTION : METHOD OF DEFINITION 4 ******
// ****** VALID (int) RETURN VALUE, VALID PARAMETERS (int, int) ******

int MyAddition(int a_mk, int b_mk) //function definition
{
	//variable declarations : local variables to MyAddition()
	int sum_mk;

	//code
	sum_mk = a_mk + b_mk;
	return(sum_mk);
}
