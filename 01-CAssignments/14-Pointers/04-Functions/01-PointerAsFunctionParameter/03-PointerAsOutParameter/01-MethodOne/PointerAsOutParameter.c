#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//function declarations
	void MathematicalOperations_mk(int, int, int*, int *, int *, int *, int *);

	//variable declaration
	int a_mk;
	int b_mk;
	int answer_sum_mk;
	int answer_difference_mk;
	int answer_product_mk;
	int answer_quotient_mk;
	int answer_remainder_mk;

	//code
	printf("\n\n");
	printf("Enter Value Of 'A': ");
	scanf("%d", &a_mk);

	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &b_mk);

	// PASSING ADDRESSES TO FUNCTION ... FUNCTION WILL FILL THEM UP WITH VALUES
	// HENCE, THEY GO INTO THE FUNCTION AS ADDRESS PARAMETERS AND COME OUT OF THE FUNCTION FILLED WITH VALID VALUES
	// THUS, (&answer_sum_mk, &answer_difference_mk, &answer_product_mk, &answer_quotient_mk, &answer_remainder_mk) ARE CALLED "OUT PARAMETERS" OR "PARAMETERIZED RETURN VALUES"
	// RETURN VALUES OF FUNCTIONS COMING VIA PARAMETERS
	// HENCE, ALTHOUGH EACH FUNCTION HAS ONLY ONE RETURN VALUE, USING THE CONCEPT OF "PARAMETERIZED RETURN VALUES", OUR FUNCTION "MathematicalOperations_mk()" HAS GIVEN US 5 RETURN VALUES !!!

	MathematicalOperations_mk(a_mk, b_mk, &answer_sum_mk, &answer_difference_mk, &answer_product_mk, &answer_quotient_mk, &answer_remainder_mk);

	printf("\n\n");
	printf("****** RESULTS ****** : \n\n");
	printf("Sum = %d\n\n", answer_sum_mk);
	printf("Difference = %d\n\n", answer_difference_mk);
	printf("Product = %d\n\n", answer_product_mk);
	printf("Quotient = %d\n\n", answer_quotient_mk);
	printf("Remainder = %d\n\n", answer_remainder_mk);
	
	exit(EXIT_SUCCESS);
}

void MathematicalOperations_mk(int x_mk, int y_mk, int *sum_mk, int *difference_mk, int *product_mk, int *quotient_mk, int *remainder_mk)
{
	//code
	*sum_mk = x_mk + y_mk;                 // Value at address 'sum_mk' = (x_mk + y_mk)
	*difference_mk = x_mk - y_mk;          // Value at address 'difference_mk' = (x_mk - y_mk)
	*product_mk = x_mk * y_mk;             // Value at address 'product_mk' = (x_mk * y_mk)
	*quotient_mk = x_mk / y_mk;           // Value at address 'quotient_mk' = (x_mk / y_mk)
	*remainder_mk = x_mk % y_mk;          // Value at address 'remainder_mk' = (x_mk % y_mk)
}
