#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(int argc_mk, char *argv_mk[], char *envp_mk[])
{
	//function prototypes OR declarations
	int MyAddition(int, int);

	//variable declarations
	int r_mk;
	int num_01_mk, num_02_mk;
	int num_03_mk, num_04_mk;

	//code
	num_01_mk = 100;
	num_02_mk = 200;
	num_03_mk = 300;
	num_04_mk = 400;

	r_mk = MyAddition(MyAddition(num_01_mk, num_02_mk), MyAddition(num_03_mk, num_04_mk)); // return value of MyAddition() is sent as parameter to another call to MyAddition()

	printf("\n\n");
	printf("%d + %d + %d + %d = %d\n", num_01_mk, num_02_mk, num_03_mk, num_04_mk, r_mk);
	printf("\n\n");

	exit(EXIT_SUCCESS);

}

// *** Function Definition Of MyAddition() ******
int MyAddition(int a_mk, int b_mk) //function definition
{
	// variable declaration
	int sum_mk;

	// code
	sum_mk = a_mk + b_mk;
	return(sum_mk);
}
