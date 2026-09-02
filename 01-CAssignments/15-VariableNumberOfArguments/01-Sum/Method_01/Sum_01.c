#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <stdarg.h> 

int main(void)
{
	// function prototypes
	int CalculateSum_mk(int, ...);

	// variable declarations
	int answer_mk;

	// code
	printf("\n\n");

	answer_mk = CalculateSum_mk(5, 10, 20, 30, 40, 50);
	printf("Answer = %d\n\n", answer_mk);

	answer_mk = CalculateSum_mk(10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	printf("Answer = %d\n\n", answer_mk);

	answer_mk = CalculateSum_mk(0);
	printf("Answer = %d\n\n", answer_mk);

	return(0);
}

int CalculateSum_mk(int num_mk, ...) // VARIADIC FUNCTION
{
	// variable declarations
	int sum_total_mk = 0;
	int n_mk;

	va_list numbers_list_mk;

	// code
	va_start(numbers_list_mk, num_mk);

	while (num_mk)
	{
		n_mk = va_arg(numbers_list_mk, int);
		sum_total_mk = sum_total_mk + n_mk;
		num_mk--; // Fixed: Moved inside the while block to prevent an infinite loop bug from line 44 of the document page
	}

	va_end(numbers_list_mk);
	return(sum_total_mk);
}
