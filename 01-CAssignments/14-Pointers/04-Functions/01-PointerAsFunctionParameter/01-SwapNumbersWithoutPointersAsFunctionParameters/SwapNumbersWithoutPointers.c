#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//function declarations
	void SwapNumbers_mk(int, int);

	//variable declaration
	int a_mk;
	int b_mk;

	//code
	printf("\n\n");
	printf("Enter Value For 'A': ");
	scanf("%d", &a_mk);

	printf("\n\n");
	printf("Enter Value For 'B': ");
	scanf("%d", &b_mk);

	printf("\n\n");
	printf("****** BEFORE SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", a_mk);
	printf("Value Of 'B' = %d\n\n", b_mk);

	SwapNumbers_mk(a_mk, b_mk); // ****** ARGUMENTS PASSED 'BY VALUE' ******

	printf("\n\n");
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", a_mk);
	printf("Value Of 'B' = %d\n\n", b_mk);

	exit(EXIT_SUCCESS);
}

void SwapNumbers_mk(int x_mk, int y_mk) // Value Of 'a_mk' is copied into 'x_mk' and value of 'b_mk' is copied into 'y_mk' ... swapping takes place between 'x_mk' and 'y_mk', not between 'a_mk' and 'b_mk' ...
{
	//variable declarations
	int temp_mk;

	//code
	printf("\n\n");
	printf("****** BEFORE SWAPPING ******\n\n");
	printf("Value Of 'X' = %d\n\n", x_mk);
	printf("Value Of 'Y' = %d\n\n", y_mk);

	temp_mk = x_mk;
	x_mk = y_mk;
	y_mk = temp_mk;

	printf("\n\n");
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'X' = %d\n\n", x_mk);
	printf("Value Of 'Y' = %d\n\n", y_mk);
}
