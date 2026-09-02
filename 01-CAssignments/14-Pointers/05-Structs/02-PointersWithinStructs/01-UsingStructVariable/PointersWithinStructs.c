#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

// DEFINING STRUCT
struct MyData_mk
{
	int *ptr_i_mk;
	int i_mk;

	float *ptr_f_mk;
	float f_mk;

	double *ptr_d_mk;
	double d_mk;
};

int main(void)
{
	//variable declarations
	struct MyData_mk data_mk;

	//code
	data_mk.i_mk = 9;
	data_mk.ptr_i_mk = &data_mk.i_mk;

	data_mk.f_mk = 11.45f;
	data_mk.ptr_f_mk = &data_mk.f_mk;

	data_mk.d_mk = 30.121995;
	data_mk.ptr_d_mk = &data_mk.d_mk;

	printf("\n\n");
	printf("i_mk = %d\n", *(data_mk.ptr_i_mk));
	printf("Adress Of 'i_mk' = %p\n", data_mk.ptr_i_mk);
	
	printf("\n\n");
	printf("f_mk = %f\n", *(data_mk.ptr_f_mk));
	printf("Adress Of 'f_mk' = %p\n", data_mk.ptr_f_mk);
	
	printf("\n\n");
	printf("d_mk = %lf\n", *(data_mk.ptr_d_mk));
	printf("Adress Of 'd_mk' = %p\n", data_mk.ptr_d_mk);

	exit(EXIT_SUCCESS);
}
