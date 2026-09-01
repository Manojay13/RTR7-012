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
	printf("Members Of Struct Are : \n\n");

	s_mk.i_mk = 9;
	s_mk.f_mk = 8.7f;
	s_mk.d_mk = 1.233422;
	s_mk.c_mk = 'P';

	printf("s_mk.i_mk = %d\n\n", s_mk.i_mk);
	printf("s_mk.f_mk = %f\n\n", s_mk.f_mk);
	printf("s_mk.d_mk = %lf\n\n", s_mk.d_mk);
	printf("s_mk.c_mk = %c\n\n", s_mk.c_mk);

	printf("Addresses Of Members Of Struct Are : \n\n");
	printf("s_mk.i_mk = %p\n\n", &s_mk.i_mk);
	printf("s_mk.f_mk = %p\n\n", &s_mk.f_mk);
	printf("s_mk.d_mk = %p\n\n", &s_mk.d_mk);
	printf("s_mk.c_mk = %p\n\n", &s_mk.c_mk);

	printf("MyStruct s_mk = %p\n\n", &s_mk);

	printf("\n\n");
	printf("Members Of Union Are : \n\n");

	u_mk.i_mk = 3;
	printf("u_mk.i_mk = %d\n\n", u_mk.i_mk);

	u_mk.f_mk = 4.5f;
	printf("u_mk.f_mk = %f\n\n", u_mk.f_mk);

	u_mk.d_mk = 5.12764;
	printf("u_mk.d_mk = %lf\n\n", u_mk.d_mk);

	u_mk.c_mk = 'A';
	printf("u_mk.c_mk = %c\n\n", u_mk.c_mk);

	printf("Addresses Of Members Of Union Are : \n\n");
	printf("u_mk.i_mk = %p\n\n", &u_mk.i_mk);
	printf("u_mk.f_mk = %p\n\n", &u_mk.f_mk);
	printf("u_mk.d_mk = %p\n\n", &u_mk.d_mk);
	printf("u_mk.c_mk = %p\n\n", &u_mk.c_mk);

	printf("MyUnion u_mk = %p\n\n", &u_mk);

	exit(EXIT_SUCCESS);
}
