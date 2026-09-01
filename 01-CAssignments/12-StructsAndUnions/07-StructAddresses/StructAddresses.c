#include <stdio.h>

struct MyData_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
	char c_mk;
};

int main(void)
{
	//variable declarations
	struct MyData_mk data_mk;

	//code
	//Assigning Data Values To The Data Members Of 'struct MyData_mk'
	data_mk.i_mk = 30;
	data_mk.f_mk = 11.45f;
	data_mk.d_mk = 1.2995;
	data_mk.c_mk = 'A';

	//Displaying Values Of The Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("i_mk = %d\n", data_mk.i_mk);
	printf("f_mk = %f\n", data_mk.f_mk);
	printf("d_mk = %lf\n", data_mk.d_mk);
	printf("c_mk = %c\n\n", data_mk.c_mk);

	printf("\n\n");
	printf("ADDRESSES OF DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("'i_mk' Occupies Addresses From %p\n", &data_mk.i_mk);
	printf("'f_mk' Occupies Addresses From %p\n", &data_mk.f_mk);
	printf("'d_mk' Occupies Addresses From %p\n", &data_mk.d_mk);
	printf("'c_mk' Occupies Address %p\n\n", &data_mk.c_mk);

	printf("Starting Address Of 'struct MyData_mk' variable 'data_mk' = %p\n\n", &data_mk);

	return(0);
}
