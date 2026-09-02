#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
#include <ctype.h>//'ctype.h' contains declaration of 'toupper()'
#include <conio.h> // Required for getch()

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
	void MyGetString_mk(char[], int);

	//variable delarations
	struct Employee_mk *pEmployeeRecord_mk = NULL;
	int num_employees_mk, i_mk;

	//code
	printf("\n\n");
	printf("Enter Number Of Employees Whose Details You Want To Record: ");
	scanf("%d", &num_employees_mk);

	printf("\n\n");
	pEmployeeRecord_mk = (struct Employee_mk *)malloc(sizeof(struct Employee_mk) * num_employees_mk);
	if (pEmployeeRecord_mk == NULL)
	{
		printf("FAILED TO ALLOCATED MEMORY FOR %d EMPLOYEES !!! EXITTING NOW \n\n", num_employees_mk);
		exit(EXIT_FAILURE);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY FOR %d EMPLOYEES !!!\n\n", num_employees_mk);

	// **** USER INPUT INITIALIZATION OF ARRAY OF 'struct Employee_mk' ******
	for (i_mk = 0; i_mk < num_employees_mk; i_mk++)
	{
		printf("\n\n\n\n");
		printf("********** DATA ENTRY FOR EMPLOYEE NUMBER %d **********\n", (i_mk + 1));
		printf("\n\n");

		printf("Enter Employee Name: ");
		MyGetString_mk(pEmployeeRecord_mk[i_mk].name_mk, NAME_LENGTH);

		printf("\n\n\n");
		printf("Enter Employee's Age (in years): ");
		scanf("%d", &pEmployeeRecord_mk[i_mk].age_mk);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female): ");
		pEmployeeRecord_mk[i_mk].sex_mk = getch();
		printf("%c", pEmployeeRecord_mk[i_mk].sex_mk);
		pEmployeeRecord_mk[i_mk].sex_mk = toupper(pEmployeeRecord_mk[i_mk].sex_mk);

		printf("\n\n\n");
		printf("Enter Employee's Salary (in Indian Rupees): ");
		scanf("%f", &pEmployeeRecord_mk[i_mk].salary_mk);

		printf("\n\n");
		printf("Is The Employee Married? (Y/y For Yes, N/n For No): ");
		pEmployeeRecord_mk[i_mk].marital_status_mk = getch();
		printf("%c", pEmployeeRecord_mk[i_mk].marital_status_mk);
		pEmployeeRecord_mk[i_mk].marital_status_mk = toupper(pEmployeeRecord_mk[i_mk].marital_status_mk);
	}

	// *** DISPLAY ***
	printf("\n\n\n\n");
	printf("********** DISPLAYING EMPLOYEE RECORDS **********\n\n");
	for (i_mk = 0; i_mk < num_employees_mk; i_mk++)
	{
		printf("********** EMPLOYEE NUMBER %d **********\n\n", (i_mk + 1));
		printf("Name          : %s\n", pEmployeeRecord_mk[i_mk].name_mk);
		printf("Age           : %d years\n", pEmployeeRecord_mk[i_mk].age_mk);

		if (pEmployeeRecord_mk[i_mk].sex_mk == 'M')
			printf("Sex           : Male\n");
		else if (pEmployeeRecord_mk[i_mk].sex_mk == 'F')
			printf("Sex           : Female\n");
		else
			printf("Sex           : Invalid Data Entered\n");

		printf("Salary        : Rs. %f\n", pEmployeeRecord_mk[i_mk].salary_mk);

		if (pEmployeeRecord_mk[i_mk].marital_status_mk == 'Y')
			printf("Marital Status: Married\n");
		else if (pEmployeeRecord_mk[i_mk].marital_status_mk == 'N')
			printf("Marital Status: Unmarried\n");
		else
			printf("Marital Status: Invalid Data Entered\n");

		printf("\n\n");
	}

	if (pEmployeeRecord_mk)
	{
		free(pEmployeeRecord_mk);
		pEmployeeRecord_mk = NULL;
		printf("MEMORY ALLOCATED TO %d EMPLOYEES HAS BEEN SUCCESSFULLY FREED !!!\n\n", num_employees_mk);
	}

	exit(EXIT_SUCCESS);
}

void MyGetString_mk(char str_mk[], int str_size_mk)
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
		str_mk[i_mk - 1] = '\0'; // Fixed: Corrected off-by-one indexing error on line 135 to clean trailing carriage returns safely
}
