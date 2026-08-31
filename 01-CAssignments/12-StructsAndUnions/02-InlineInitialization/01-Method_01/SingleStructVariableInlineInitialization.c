#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

// DEFINING STRUCT
struct MyData_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
	char c_mk;
} data_mk = { 30, 4.5f, 11.451995, 'A' }; //Inline initialization of struct variable 'data_mk' of type 'struct MyData_mk'

int main(void)
{
	//code
	//Displaying Values Of The Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("i_mk = %d\n", data_mk.i_mk);
	printf("f_mk = %f\n", data_mk.f_mk);
	printf("d_mk = %lf\n", data_mk.d_mk);
	printf("c_mk = %c\n\n", data_mk.c_mk);

	exit(EXIT_SUCCESS);
}
