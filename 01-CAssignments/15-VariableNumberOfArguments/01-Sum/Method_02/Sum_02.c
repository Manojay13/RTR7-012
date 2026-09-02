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

	exit(EXIT_SUCCESS);
}

int CalculateSum_mk(int num_mk, ...) // VARIADIC FUNCTION
{
	// variable declarations
	int sum_total_mk = 0;
	int n_mk;

	va_list list_mk;

	// code
	va_start(list_mk, num_mk);

	while (num_mk)
	{
		n_mk = va_arg(list_mk, int);
		sum_total_mk = sum_total_mk + n_mk;
		num_mk--;
	}

	va_end(list_mk);
	return(sum_total_mk);
}
