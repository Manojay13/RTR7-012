#include <stdio.h>
#include <ctype.h>
#include <conio.h> // Required for getch()

#define NUM_EMPLOYEES 5 // Simply Change this constant value to have as many number of Employee Records as you please

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee_mk
{
	char name_mk[NAME_LENGTH];
	int age_mk;
	char sex_mk;
	float salary_mk;
	char marital_status_mk;
};

int main(void)
{
	//function prototype
	void MyGetString(char[], int);

	//variable delarations
	struct Employee_mk EmployeeRecord_mk[NUM_EMPLOYEES]; //An array of <NUM_EMPLOYEES> structs Each being type 'struct Employee_mk'
	int i_mk;

	//code
	// ****** USER INPUT INITIALIZATION OF ARRAY OF 'struct Employee_mk' ******
	for (i_mk = 0; i_mk < NUM_EMPLOYEES; i_mk++)
	{
		printf("\n\n\n\n");
		printf("********** DATA ENTRY FOR EMPLOYEE NUMBER %d **********\n", (i_mk + 1));
		printf("\n\n");

		printf("Enter Employee Name : ");
		MyGetString(EmployeeRecord_mk[i_mk].name_mk, NAME_LENGTH);

		printf("\n\n\n");
		printf("Enter Employee's Age (in years) : ");
		scanf("%d", &EmployeeRecord_mk[i_mk].age_mk);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
		EmployeeRecord_mk[i_mk].sex_mk = getch();
		printf("%c", EmployeeRecord_mk[i_mk].sex_mk);
		EmployeeRecord_mk[i_mk].sex_mk = toupper(EmployeeRecord_mk[i_mk].sex_mk);

		printf("\n\n\n");
		printf("Enter Employee's Salary (in Indian Rupees) : ");
		scanf("%f", &EmployeeRecord_mk[i_mk].salary_mk);

		printf("\n\n");
		printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
		EmployeeRecord_mk[i_mk].marital_status_mk = getch();
		printf("%c", EmployeeRecord_mk[i_mk].marital_status_mk);
		EmployeeRecord_mk[i_mk].marital_status_mk = toupper(EmployeeRecord_mk[i_mk].marital_status_mk);
	}

	// *** DISPLAY ***
	printf("\n\n\n\n");
	printf("********** DISPLAYING EMPLOYEE RECORDS **********\n\n");
	for (i_mk = 0; i_mk < NUM_EMPLOYEES; i_mk++)
	{
		printf("********** EMPLOYEE NUMBER %d **********\n\n", (i_mk + 1));
		printf("Name          : %s\n", EmployeeRecord_mk[i_mk].name_mk);
		printf("Age           : %d years\n", EmployeeRecord_mk[i_mk].age_mk);

		if (EmployeeRecord_mk[i_mk].sex_mk == 'M')
			printf("Sex           : Male\n");
		else if (EmployeeRecord_mk[i_mk].sex_mk == 'F')
			printf("Sex           : Female\n");
		else
			printf("Sex           : Invalid Data Entered\n");

		printf("Salary        : Rs. %f\n", EmployeeRecord_mk[i_mk].salary_mk);

		if (EmployeeRecord_mk[i_mk].marital_status_mk == 'Y')
			printf("Marital Status: Married\n");
		else if (EmployeeRecord_mk[i_mk].marital_status_mk == 'N')
			printf("Marital Status: Unmarried\n");
		else
			printf("Marital Status: Invalid Data Entered\n");

		printf("\n\n");
	}

	return(0);
}

// *** SIMPLE RUDIMENTARY IMPLEMENTATION OF gets_s() ***
// *** IMPLEMENTED DUE TO DIFFERENT BEHAVIOUR OF gets_s() / fgets() / fscanf() ON DIFFERENT PLATFORMS ***
// *** BACKSPACE / CHARACTER DELETION AND ARROW KEY CURSOR MOVEMENT NOT IMPLEMENTED ***

void MyGetString(char str_mk[], int str_size_mk)
{
	//variable declarations
	int i_mk;
	char ch_mk = '\0';

	//code
	i_mk = 0;
	do
	{
		ch_mk = getch();
		str_mk[i_mk] = ch_mk;
		printf("%c", str_mk[i_mk]);
		i_mk++;
	} while ((ch_mk != '\r') && (i_mk < str_size_mk));

	if (i_mk == str_size_mk)
		str_mk[i_mk - 1] = '\0';
	else
		str_mk[i_mk - 1] = '\0'; // Patched to overwrite the trailing carriage return '\r' cleanly
}
