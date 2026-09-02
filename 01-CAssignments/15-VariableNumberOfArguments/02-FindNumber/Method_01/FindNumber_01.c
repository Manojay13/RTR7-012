#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <stdarg.h>

#define NUM_TO_BE_FOUND_mk 3
#define NUM_ELEMENTS_mk 10

int main(void)
{
	// function prototypes
	void FindNumber_mk(int, int, ...);

	// code
	printf("\n\n");

	FindNumber_mk(NUM_TO_BE_FOUND_mk, NUM_ELEMENTS_mk, 3, 5, 9, 2, 3, 6, 9, 3, 1, 3);

	exit(EXIT_SUCCESS);
}

void FindNumber_mk(int num_to_be_found_mk, int num_mk, ...) // VARIADIC FUNCTION
{
	// variable declarations
	int count_mk = 0;
	int n_mk;
	va_list numbers_list_mk;

	// code
	va_start(numbers_list_mk, num_mk);

	while (num_mk)
	{
		n_mk = va_arg(numbers_list_mk, int);
		if (n_mk == num_to_be_found_mk)
		{
			count_mk++;
		}
		num_mk--; // Fixed: Placed correctly inside the while loop to prevent infinite loop crashes
	}

	if (count_mk == 0)
		printf("Number %d Could Not Be Found !!!\n\n", num_to_be_found_mk);
	else
		printf("Number %d Found %d Times !!!\n\n", num_to_be_found_mk, count_mk);

	va_end(numbers_list_mk);
}
