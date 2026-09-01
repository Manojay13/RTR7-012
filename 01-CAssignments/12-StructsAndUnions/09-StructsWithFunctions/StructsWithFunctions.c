#include <stdio.h>
#include <conio.h> // Required for getch()

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
	//function prototype
	struct MyData_mk AddStructMembers (struct MyData_mk, struct MyData_mk, struct MyData_mk);

	//variable declarations
	struct MyData_mk data1_mk, data2_mk, data3_mk, answer_data_mk;

	//code
	// *** data1_mk ***
	printf("\n\n\n\n");
	printf("********** DATA 1 **********\n\n");
	printf("Enter Integer Value For 'i_mk' Of 'struct MyData_mk data1_mk': ");
	scanf("%d", &data1_mk.i_mk);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f_mk' Of 'struct MyData_mk data1_mk': ");
	scanf("%f", &data1_mk.f_mk);

	printf("\n\n");
	printf("Enter 'Double' Value For 'd_mk' Of 'struct MyData_mk data1_mk': ");
	scanf("%lf", &data1_mk.d_mk);

	printf("\n\n");
	printf("Enter Character Value For 'c_mk' Of 'struct MyData_mk data1_mk': ");
	data1_mk.c_mk = getch();
	printf("%c", data1_mk.c_mk);

	// *** data2_mk ***
	printf("\n\n\n\n");
	printf("********** DATA 2 **********\n\n");
	printf("Enter Integer Value For 'i_mk' Of 'struct MyData_mk data2_mk': ");
	scanf("%d", &data2_mk.i_mk);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f_mk' Of 'struct MyData_mk data2_mk': ");
	scanf("%f", &data2_mk.f_mk);

	printf("\n\n");
	printf("Enter 'Double' Value For 'd_mk' Of 'struct MyData_mk data2_mk': ");
	scanf("%lf", &data2_mk.d_mk);

	printf("\n\n");
	printf("Enter Character Value For 'c_mk' Of 'struct MyData_mk data2_mk': ");
	data2_mk.c_mk = getch();
	printf("%c", data2_mk.c_mk);

	// *** data3_mk ***
	printf("\n\n\n\n");
	printf("********** DATA 3 **********\n\n");
	printf("Enter Integer Value For 'i_mk' Of 'struct MyData_mk data3_mk': ");
	scanf("%d", &data3_mk.i_mk);

	printf("\n\n");
	printf("Enter Floating-Point Value For 'f_mk' Of 'struct MyData_mk data3_mk': ");
	scanf("%f", &data3_mk.f_mk);

	printf("\n\n");
	printf("Enter 'Double' Value For 'd_mk' Of 'struct MyData_mk data3_mk': ");
	scanf("%lf", &data3_mk.d_mk);

	printf("\n\n");
	printf("Enter Character Value For 'c_mk' Of 'struct MyData_mk data3_mk': ");
	data3_mk.c_mk = getch();
	printf("%c", data3_mk.c_mk);

	// *** CALLING FUNCTION AddStructMembers() ***
	answer_data_mk = AddStructMembers (data1_mk, data2_mk, data3_mk);

	printf("\n\n\n\n");
	printf("********** ANSWER *********\n\n");
	printf("answer_data_mk.i_mk = %d\n", answer_data_mk.i_mk);
	printf("answer_data_mk.f_mk = %f\n", answer_data_mk.f_mk);
	printf("answer_data_mk.d_mk = %lf\n\n", answer_data_mk.d_mk);

	answer_data_mk.c_mk = data1_mk.c_mk;
	printf("answer_data_mk.c_mk (from data1_mk) = %c\n\n", answer_data_mk.c_mk);

	answer_data_mk.c_mk = data2_mk.c_mk;
	printf("answer_data_mk.c_mk (from data2_mk) = %c\n\n", answer_data_mk.c_mk);

	answer_data_mk.c_mk = data3_mk.c_mk;
	printf("answer_data_mk.c_mk (from data3_mk) = %c\n\n", answer_data_mk.c_mk);

	return(0);
}

struct MyData_mk AddStructMembers (struct MyData_mk md_one_mk, struct MyData_mk md_two_mk, struct MyData_mk md_three_mk)
{
	//variable declarations
	struct MyData_mk answer_mk;

	//code
	answer_mk.i_mk = md_one_mk.i_mk + md_two_mk.i_mk + md_three_mk.i_mk;
	answer_mk.f_mk = md_one_mk.f_mk + md_two_mk.f_mk + md_three_mk.f_mk;
	answer_mk.d_mk = md_one_mk.d_mk + md_two_mk.d_mk + md_three_mk.d_mk;

	return(answer_mk);
}
