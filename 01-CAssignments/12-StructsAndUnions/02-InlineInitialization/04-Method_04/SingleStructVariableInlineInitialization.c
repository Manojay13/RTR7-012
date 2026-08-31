#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

// DEFINING STRUCT
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
	
	// 35 will be assigned to 'i_mk' of 'data_one_mk'
	// 3.9 will be assigned to 'f_mk' of 'data_one_mk'
	// 1.23765 will be assigned to 'd_mk' of 'data_one_mk'
	// 'A' will be assigned to 'c_mk' of 'data_one_mk'
	struct MyData_mk data_one_mk = { 35, 3.9f, 1.23765, 'A' }; //Inline Initialization
	
	// 'P' will be assigned to 'i_mk' of 'data_two_mk' ... but 'P' is a character (char)
	// and 'i_mk' is an integer so 'P' is converted into its decimal integer ASCII
	// value (80) and 80 is assigned to 'i_mk' of data_two_mk
	// 6.2 will be assigned to 'f_mk' of 'data_two_mk'
	// 12.199523 will be assigned to 'd_mk' of 'data_two_mk'
	// 68 will be assigned to 'c_mk' of 'data_two_mk' ... but 68 is an integer (int) and
	// 'c_mk' is a 'char' ... so 68 is considered as a decimal ASCII value and its
	// corresponding character ('D') is assigned to 'c_mk' of data_two_mk
	struct MyData_mk data_two_mk = { 'P', 6.2f, 12.199523, 68 }; //Inline Initialization
	
	// 36 will be assigned to 'i_mk' of 'data_three_mk'
	// 'G' is 'char', but 'f_mk' of 'data_three_mk' is 'float'...hence, 'G' is converted
	// to its decimal integer ASCII value (71) and this in turn is converted to
	// 'float' (71.000000) and then it will be assigned to 'f_mk' of 'data_three_mk'
	// 0.000000 will be assigned to 'd_mk' of 'data_three_mk'
	// No character will be assigned to 'c_mk' of 'data_three_mk'
	struct MyData_mk data_three_mk = { 36, 'G' }; //Inline Initialization
	
	// 79 will be assigned to 'i_mk' of 'data_four_mk'
	// 0.000000 will be assigned to 'f_mk' of 'data_four_mk'
	// 0.000000 will be assigned to 'd_mk' of 'data_four_mk'
	// No character will be assigned to 'c_mk' of 'data_four_mk'
	struct MyData_mk data_four_mk = { 79 }; //Inline Initialization

	//code
	//Displaying Values Of The Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk data_one_mk' ARE : \n\n");
	printf("i_mk = %d\n", data_one_mk.i_mk);
	printf("f_mk = %f\n", data_one_mk.f_mk);
	printf("d_mk = %lf\n", data_one_mk.d_mk);
	printf("c_mk = %c\n", data_one_mk.c_mk);
	
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk data_two_mk' ARE : \n\n");
	printf("i_mk = %d\n", data_two_mk.i_mk);
	printf("f_mk = %f\n", data_two_mk.f_mk);
	printf("d_mk = %lf\n", data_two_mk.d_mk);
	printf("c_mk = %c\n", data_two_mk.c_mk);
	
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk data_three_mk' ARE : \n\n");
	printf("i_mk = %d\n", data_three_mk.i_mk);
	printf("f_mk = %f\n", data_three_mk.f_mk);
	printf("d_mk = %lf\n", data_three_mk.d_mk);
	printf("c_mk = %c\n", data_three_mk.c_mk);
	
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk data_four_mk' ARE : \n\n");
	printf("i_mk = %d\n", data_four_mk.i_mk);
	printf("f_mk = %f\n", data_four_mk.f_mk);
	printf("d_mk = %lf\n", data_four_mk.d_mk);
	printf("c_mk = %c\n", data_four_mk.c_mk);
	
	exit(EXIT_SUCCESS);
}
