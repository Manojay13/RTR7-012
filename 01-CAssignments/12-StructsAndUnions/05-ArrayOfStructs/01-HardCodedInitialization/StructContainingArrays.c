#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <string.h> // Required for strcpy()

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee_mk
{
	char name_mk[NAME_LENGTH];
	int age_mk;
	float salary_mk;
	char sex_mk;
	char marital_status_mk[MARITAL_STATUS];
};

int main(void)
{
	//variable declarations
	struct Employee_mk EmployeeRecord_mk[5]; //An array of 5 structs - Each being type 'struct Employee_mk'

	char employee_manojay_mk[] = "Manojay";
	char employee_sameer_mk[] = "Sameer";
	char employee_kalyani_mk[] = "Kalyani";
	char employee_sonali_mk[] = "Sonali";
	char employee_shantanu_mk[] = "Shantanu";

	int i_mk;

	//code
	// ****** HARD-CODED INITIALIZATION OF ARRAY OF 'struct Employee_mk' ******

	// ****** EMPLOYEE 1 ******
	strcpy(EmployeeRecord_mk[0].name_mk,  employee_manojay_mk);
	EmployeeRecord_mk[0].age_mk = 30;
	EmployeeRecord_mk[0].sex_mk = 'M';
	EmployeeRecord_mk[0].salary_mk = 50000.0f;
	strcpy(EmployeeRecord_mk[0].marital_status_mk, "Unmarried");

	// ****** EMPLOYEE 2 ******
	strcpy(EmployeeRecord_mk[1].name_mk, employee_sameer_mk);
	EmployeeRecord_mk[1].age_mk = 32;
	EmployeeRecord_mk[1].sex_mk = 'M';
	EmployeeRecord_mk[1].salary_mk = 60000.0f;
	strcpy(EmployeeRecord_mk[1].marital_status_mk, "Married");

	// ****** EMPLOYEE 3 ******
	strcpy(EmployeeRecord_mk[2].name_mk, employee_kalyani_mk);
	EmployeeRecord_mk[2].age_mk = 29;
	EmployeeRecord_mk[2].sex_mk = 'F';
	EmployeeRecord_mk[2].salary_mk = 62000.0f;
	strcpy(EmployeeRecord_mk[2].marital_status_mk, "Unmarried");

	// ****** EMPLOYEE 4 ******
	strcpy(EmployeeRecord_mk[3].name_mk, employee_sonali_mk);
	EmployeeRecord_mk[3].age_mk = 33;
	EmployeeRecord_mk[3].sex_mk = 'F';
	EmployeeRecord_mk[3].salary_mk = 50000.0f;
	strcpy(EmployeeRecord_mk[3].marital_status_mk, "Married");

	// ****** EMPLOYEE 5 ******
	strcpy(EmployeeRecord_mk[4].name_mk, employee_shantanu_mk);
	EmployeeRecord_mk[4].age_mk = 35;
	EmployeeRecord_mk[4].sex_mk = 'M';
	EmployeeRecord_mk[4].salary_mk = 55000.0f;
	strcpy(EmployeeRecord_mk[4].marital_status_mk, "Married");

	// *** DISPLAY ***
	printf("\n\n");
	printf("****** DISPLAYING EMPLOYEE RECORDS ******\n\n");
	for (i_mk = 0; i_mk < 5; i_mk++)
	{
		printf("******* EMPLOYEE NUMBER %d *******\n\n", (i_mk + 1));
		printf("Name          : %s\n", EmployeeRecord_mk[i_mk].name_mk);
		printf("Age           : %d years\n", EmployeeRecord_mk[i_mk].age_mk);

		if (EmployeeRecord_mk[i_mk].sex_mk == 'M' || EmployeeRecord_mk[i_mk].sex_mk == 'm')
			printf("Sex           : Male\n");
		else
			printf("Sex           : Female\n");

		printf("Salary        : Rs. %f\n", EmployeeRecord_mk[i_mk].salary_mk);
		printf("Marital Status: %s\n", EmployeeRecord_mk[i_mk].marital_status_mk);

		printf("\n\n");
	}

	exit(EXIT_SUCCESS);
}
