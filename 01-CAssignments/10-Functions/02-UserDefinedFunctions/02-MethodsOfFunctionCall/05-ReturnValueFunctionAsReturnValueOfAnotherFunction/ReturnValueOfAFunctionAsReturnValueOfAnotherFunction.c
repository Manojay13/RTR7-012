#include<stdio.h> //'stdio.h' contains declaration of 'printf()'
#include<stdlib.h> //'stdilib.h' contains declaration of 'exit()'
int main(int argc_mk, char *argv_mk[], char *envp_mk[])
{
	//function prototypes OR declarations
	int MyAddition(int, int);

	//variable declarations
	int r_mk;
	int num_01_mk, num_02_mk;

	//code
	num_01_mk = 100;
	num_02_mk = 200;

	printf("\n\n");
	printf("%d + %d = %d\n", num_01_mk, num_02_mk, MyAddition(num_01_mk, num_02_mk));
	printf("\n\n");

	exit(EXIT_SUCCESS);
}

// *** Function Definition Of MyAddition() ******
int MyAddition(int a_mk, int b_mk) //function definition
{
	// function prototype
	int Add(int, int);

	// code
	return(Add(a_mk, b_mk)); // return value of function Add() as return value of function MyAddition()
}

int Add(int x_mk, int y_mk)
{
	// code
	return(x_mk + y_mk);
}
