#include <stdio.h>

int main(void)
{
	//function declarations
	int AddIntegers_mk(int, int);
	int SubtractIntegers_mk(int, int);
	float AddFloats_mk(float, float);

	//variable declaration
	typedef int (*AddIntsFnPtr_mk) (int, int);
	AddIntsFnPtr_mk ptrAddTwoIntegers_mk = NULL;
	AddIntsFnPtr_mk ptrFunc_mk = NULL;

	typedef float (*AddFloatsFnPtr_mk) (float, float);
	AddFloatsFnPtr_mk ptrAddTwoFloats_mk = NULL;

	int iAnswer_mk = 0;
	float fAnswer_mk = 0.0f;

	//code
	ptrAddTwoIntegers_mk = AddIntegers_mk;
	iAnswer_mk = ptrAddTwoIntegers_mk(9, 30);
	printf("\n\n");
	printf("Sum Of Integers = %d\n\n", iAnswer_mk);

	ptrFunc_mk = SubtractIntegers_mk;
	iAnswer_mk = ptrFunc_mk(9, 30);
	printf("\n\n");
	printf("Subtraction Of Integers = %d\n\n", iAnswer_mk);

	ptrAddTwoFloats_mk = AddFloats_mk;
	fAnswer_mk = ptrAddTwoFloats_mk(11.45f, 8.2f);
	printf("\n\n");
	printf("Sum Of Floating-Point Numbers = %f\n\n", fAnswer_mk);

	return(0);
}

int AddIntegers_mk(int a_mk, int b_mk)
{
	//variable declarations
	int c_mk;

	//code
	c_mk = a_mk + b_mk;
	return(c_mk);
}

int SubtractIntegers_mk(int a_mk, int b_mk)
{
	//variable declarations
	int c_mk;

	//code
	if (a_mk > b_mk)
		c_mk = a_mk - b_mk;
	else
		c_mk = b_mk - a_mk;

	return(c_mk);
}

float AddFloats_mk(float f_num1_mk, float f_num2_mk)
{
	//variable declarations
	float ans_mk;

	//code
	ans_mk = f_num1_mk + f_num2_mk;
	return(ans_mk);
}
