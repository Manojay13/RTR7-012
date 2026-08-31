#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

// DEFINING STRUCT
struct MyData_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
	char c_mk;
} data_mk; //Declaring a single struct variable of type 'struct MyData_mk' globally

int main(void)
{
	//variable declarations
	int i_size_mk;
	int f_size_mk;
	int d_size_mk;
	int struct_MyData_size_mk;

	//code
	//Assigning Data Values To The Data Members Of 'struct MyData_mk'
	data_mk.i_mk = 30;
	data_mk.f_mk = 11.45f;
	data_mk.d_mk = 1.2995;

	//Displaying Values Of The Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("i_mk = %d\n", data_mk.i_mk);
	printf("f_mk = %f\n", data_mk.f_mk);
	printf("d_mk = %lf\n", data_mk.d_mk);

	//Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData_mk'
	i_size_mk = sizeof(data_mk.i_mk);
	f_size_mk = sizeof(data_mk.f_mk);
	d_size_mk = sizeof(data_mk.d_mk);

	//Displaying Sizes (In Bytes) Of The Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("Size of 'i_mk' = %d bytes\n", i_size_mk);
	printf("Size of 'f_mk' = %d bytes\n", f_size_mk);
	printf("Size of 'd_mk' = %d bytes\n", d_size_mk);

	//Calculating Size (In Bytes) of the entire 'struct MyData_mk'
	struct_MyData_size_mk = sizeof(struct MyData_mk); 

	//Displaying Sizes (In Bytes) of the entire 'struct MyData_mk'
	printf("\n\n");
	printf("Size of 'struct MyData_mk' : %d bytes\n\n", struct_MyData_size_mk);

	exit(EXIT_SUCCESS);

}
