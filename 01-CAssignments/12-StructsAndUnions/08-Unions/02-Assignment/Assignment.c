#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

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
	union MyUnion_mk u1_mk, u2_mk;

	//code
	// *** MyUnion u1_mk ***
	printf("\n\n");
	printf("Members Of Union u1_mk Are : \n\n");

	u1_mk.i_mk = 6;
	u1_mk.f_mk = 1.2f;
	u1_mk.d_mk = 8.333333;
	u1_mk.c_mk = 'S';

	printf("u1_mk.i_mk = %d\n\n", u1_mk.i_mk);
	printf("u1_mk.f_mk = %f\n\n", u1_mk.f_mk);
	printf("u1_mk.d_mk = %lf\n\n", u1_mk.d_mk);
	printf("u1_mk.c_mk = %c\n\n", u1_mk.c_mk);

	printf("Addresses Of Members Of Union u1_mk Are : \n\n");
	printf("u1_mk.i_mk = %p\n\n", &u1_mk.i_mk);
	printf("u1_mk.f_mk = %p\n\n", &u1_mk.f_mk);
	printf("u1_mk.d_mk = %p\n\n", &u1_mk.d_mk);
	printf("u1_mk.c_mk = %p\n\n", &u1_mk.c_mk);

	printf("MyUnion u1_mk = %p\n\n", &u1_mk);

	// *** MyUnion u2_mk ***
	printf("\n\n");
	printf("Members Of Union u2_mk Are : \n\n");

	u2_mk.i_mk = 3;
	printf("u2_mk.i_mk = %d\n\n", u2_mk.i_mk);

	u2_mk.f_mk = 4.5f;
	printf("u2_mk.f_mk = %f\n\n", u2_mk.f_mk);

	u2_mk.d_mk = 5.12764;
	printf("u2_mk.d_mk = %lf\n\n", u2_mk.d_mk);

	u2_mk.c_mk = 'A';
	printf("u2_mk.c_mk = %c\n\n", u2_mk.c_mk);

	printf("Addresses Of Members Of Union u2_mk Are : \n\n");
	printf("u2_mk.i_mk = %p\n\n", &u2_mk.i_mk);
	printf("u2_mk.f_mk = %p\n\n", &u2_mk.f_mk);
	printf("u2_mk.d_mk = %p\n\n", &u2_mk.d_mk);
	printf("u2_mk.c_mk = %p\n\n", &u2_mk.c_mk);

	printf("MyUnion u2_mk = %p\n\n", &u2_mk);

	exit(EXIT_SUCCESS);
}
