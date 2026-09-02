#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MY_PI_VERSION_mk 0 // Change value and see the output. Also, comment this line and line number 34 and see the output.

#ifdef MY_PI_VERSION_mk
	#if MY_PI_VERSION_mk <= 0
		#define MY_PI_mk 3.14
	#elif MY_PI_VERSION_mk == 1
		#define MY_PI_mk 3.1415
	#elif MY_PI_VERSION_mk == 2
		#define MY_PI_mk 3.141592
	#elif MY_PI_VERSION_mk == 3
		#define MY_PI_mk 3.14159265
	#elif MY_PI_VERSION_mk == 4
		#define MY_PI_mk 3.1415926535
	#elif MY_PI_VERSION_mk == 5
		#define MY_PI_mk 3.141592653589
	#else
		#define MY_PI_mk 3.141592653589793
	#endif // for #if
#endif // for #ifdef

#ifndef MY_PI_VERSION_mk
	#define MY_PI_mk 0.0
#endif

int main(void)
{
	// code
	printf("\n\n");
	printf("Hello World !!!\n");

	printf("\n\n");
	#ifdef MY_PI_VERSION_mk
		printf("PI Version Selected = %d\n", MY_PI_VERSION_mk);
	#endif
	printf("PI Value = %.15lf\n", MY_PI_mk); // Fixed formatting specifier typo to .15lf for printing long float double fractions correctly

	exit(EXIT_SUCCESS);
}
