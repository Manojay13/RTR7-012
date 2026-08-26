#include<stdio.h> //'stdio.h' contains declaration of 'printf()'
#include<stdlib.h> //'stdlib.h' contains declaration of 'exit()'

// Entry-Point Function => main() => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc_mk, char *argv_mk[], char *envp_mk[])
{
	//function prototype / declaration / signature
	int MyAddition(void);

	//variable declarations : local variables to main()
	int result_mk;

	//code
	result_mk = MyAddition(); //function call

	printf("\n\n");
	printf("Sum_mk = %d\n\n", result_mk);
	exit(EXIT_SUCCESS);
}

// ****** USER DEFINED FUNCTION : METHOD OF DEFINITION 2 ******
// ****** VALID (int) RETURN VALUE, NO PARAMETERS ******

int MyAddition(void) //function definition
{
	//variable declarations : local variables to MyAddition()
	int a_mk, b_mk, sum_mk;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A_mk' : ");
	scanf("%d", &a_mk);

	printf("\n\n");
	printf("Enter Integer Value For 'B_mk' : ");
	scanf("%d", &b_mk);
 
	sum_mk = a_mk + b_mk;

	return(sum_mk);
}
