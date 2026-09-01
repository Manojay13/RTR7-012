#include <stdio.h>

#define MAX_NAME_LENGTH 100

struct Employee_mk
{
	char name_mk[MAX_NAME_LENGTH];
	unsigned int age_mk;
	char gender_mk;
	double salary_mk;
};

struct MyData_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
	char c_mk;
};

int main(void)
{
	// Typedefs
	typedef struct Employee_mk MY_EMPLOYEE_TYPE_mk;
	typedef struct MyData_mk MY_DATA_TYPE_mk;

	// variable declarations
	struct Employee_mk emp_mk = {"Funny", 25, 'M', 10000.00};
	MY_EMPLOYEE_TYPE_mk emp_typedef_mk = {"Bunny", 23, 'F', 20400.00};

	struct MyData_mk md_mk = {30, 11.45f, 26.122017, 'X'};
	MY_DATA_TYPE_mk md_typedef_mk;

	// code
	md_typedef_mk.i_mk = 9;
	md_typedef_mk.f_mk = 1.5f;
	md_typedef_mk.d_mk = 8.041997;
	md_typedef_mk.c_mk = 'P';

	printf("\n\n");
	printf("struct Employee_mk: \n\n");
	printf("emp_mk.name_mk = %s\n", emp_mk.name_mk);
	printf("emp_mk.age_mk = %d\n", emp_mk.age_mk);
	printf("emp_mk.gender_mk = %c\n", emp_mk.gender_mk);
	printf("emp_mk.salary_mk = %lf\n", emp_mk.salary_mk);

	printf("\n\n");
	printf("MY_EMPLOYEE_TYPE_mk: \n\n");
	printf("emp_typedef_mk.name_mk = %s\n", emp_typedef_mk.name_mk);
	printf("emp_typedef_mk.age_mk = %d\n", emp_typedef_mk.age_mk);
	printf("emp_typedef_mk.gender_mk = %c\n", emp_typedef_mk.gender_mk);
	printf("emp_typedef_mk.salary_mk = %lf\n", emp_typedef_mk.salary_mk);

	printf("\n\n");
	printf("struct MyData_mk: \n\n");
	printf("md_mk.i_mk = %d\n", md_mk.i_mk);
	printf("md_mk.f_mk = %f\n", md_mk.f_mk);
	printf("md_mk.d_mk = %lf\n", md_mk.d_mk);
	printf("md_mk.c_mk = %c\n", md_mk.c_mk);

	printf("\n\n");
	printf("MY_DATA_TYPE_mk: \n\n");
	printf("md_typedef_mk.i_mk = %d\n", md_typedef_mk.i_mk);
	printf("md_typedef_mk.f_mk = %f\n", md_typedef_mk.f_mk);
	printf("md_typedef_mk.d_mk = %lf\n", md_typedef_mk.d_mk);
	printf("md_typedef_mk.c_mk = %c\n", md_typedef_mk.c_mk);

	printf("\n\n");
	return(0);
}
