#include <stdio.h>

int main(void)
{
	//function declarations
	void SwapNumbers_mk(int *, int *);

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

	SwapNumbers_mk(&a_mk, &b_mk); // ****** ARGUMENTS PASSED 'BY REFERENCE / ADDRESS' ******

	printf("\n\n");
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", a_mk);
	printf("Value Of 'B' = %d\n\n", b_mk);

	return(0);
}

// Address Of 'a_mk' is copied into 'x_mk' and Address of 'b_mk' is copied into 'y_mk' ...
// So, '&a_mk' and 'x_mk' are pointing to ONE and the SAME address and '&b_mk' and 'y_mk' are pointing to ONE and the SAME address
// Swapping takes place between 'value at address of x_mk' (value at &a_mk i.e: 'a_mk') and 'value at address of y_mk' (value at &b_mk i.e 'b_mk') ...
// Hence, Swapping in this case takes place between '*x_mk' and '*y_mk' AS WELL AS BETWEEN 'a_mk' and 'b_mk' ...

void SwapNumbers_mk(int *x_mk, int *y_mk)
{
	//varibale declarations
	int temp_mk;

	//code
	printf("\n\n");
	printf("****** BEFORE SWAPPING ******\n\n");
	printf("Value Of 'X' = %d\n\n", *x_mk);
	printf("Value Of 'Y' = %d\n\n", *y_mk);

	temp_mk = *x_mk;
	*x_mk = *y_mk;
	*y_mk = temp_mk;

	printf("\n\n");
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'X' = %d\n\n", *x_mk);
	printf("Value Of 'Y' = %d\n\n", *y_mk);
}
