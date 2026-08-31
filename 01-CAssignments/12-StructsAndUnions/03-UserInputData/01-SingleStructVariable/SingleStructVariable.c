#include <stdio.h>
#include <conio.h>

struct MyData_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
	char ch_mk;
};

int main(void)
{
	//variable declarations
	struct MyData_mk data_mk; //declaring a single struct variable

	//code
	//User Input For Values Of Data Members Of 'struct MyData_mk'
	printf("\n\n");

	printf("Enter Integer Value For Data Member 'i_mk' Of 'struct MyData_mk' : \n");
	scanf("%d", &data_mk.i_mk);

	printf("Enter Floating-Point Value For Data Member 'f_mk' Of 'struct MyData_mk' : \n");
	scanf("%f", &data_mk.f_mk);

	printf("Enter 'Double' Value For Data Member 'd_mk' Of 'struct MyData_mk' : \n");
	scanf("%lf", &data_mk.d_mk);

	printf("Enter Character Value For Data Member 'c_mk' Of 'struct MyData_mk' : \n");
	data_mk.ch_mk = getch();

	//Display Values Of Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("i_mk = %d\n", data_mk.i_mk);
	printf("f_mk = %f\n", data_mk.f_mk);
	printf("d_mk = %lf\n", data_mk.d_mk);
	printf("c_mk = %c\n\n", data_mk.ch_mk);

	return(0);
}
