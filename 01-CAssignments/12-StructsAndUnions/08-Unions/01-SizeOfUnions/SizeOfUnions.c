#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

struct MyStruct_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
	char c_mk;
};

union MyUnion_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
	char c_mk;
};

int main(void)
{
	//variable declarations
	struct MyStruct_mk s_mk;
	union MyUnion_mk u_mk;

	//code
	printf("\n\n");
	printf("Size Of MyStruct_mk = %lu\n", sizeof(s_mk));
	
	printf("\n\n");
	printf("Size Of MyUnion_mk = %lu\n", sizeof(u_mk));
	
	exit(EXIT_SUCCESS);
}
