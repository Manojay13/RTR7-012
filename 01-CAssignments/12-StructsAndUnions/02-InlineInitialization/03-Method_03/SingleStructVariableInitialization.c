#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//DEFINING STRUCT
	struct MyData_mk
	{
		int i_mk;
		float f_mk;
		double d_mk;
		char c_mk;
	} data_mk = { 5, 9.1f, 3.78623, 'N' }; 

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
