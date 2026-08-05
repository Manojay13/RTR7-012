#include<stdio.h>

struct Employee
{
	char name_mk[100];
	int age_mk;
	float salary_mk;
	char sex_mk;
	char marital_status;
};

int main(void)
{
	//code
	printf("SIZES OF DATA TYPES AND POINTERS TO RESPECTIVE DATA TYPES ARE:\n\n");
	printf("Size of (int)		:%d \t \t \t Size of pointer to int (int*) : %d\n\n", sizeof(int), sizeof(int*));
	printf("Size of float		:%d \t \t \t Size of pointer to float (float*) :%d\n\n",sizeof(float), sizeof(float*));
	printf("Size of double		:%d \t \t \t Size of pointer to double (double*): %d\n\n", sizeof(double), sizeof(double*));
	printf("Size of char		:%d \t \t \t Size of pointer to char (char*):%d\n\n",sizeof(char), sizeof(char*));;
	printf("Size of (struct Employee) :%d \t \t \t Size of pointer to struct Employee(struct Employee*): %d\n\n", sizeof(struct Employee), sizeof(struct Employee*));
	
	
	printf("SIZES OF DATA TYPES AND POINTERS TO RESPECTIVE DATA TYPES ARE with zd:\n\n");
	printf("Size of (int)		:%d \t \t \t Size of pointer to int (int*) : %zd\n\n", sizeof(int), sizeof(int*));
	printf("Size of float		:%d \t \t \t Size of pointer to float (float*) :%zd\n\n",sizeof(float), sizeof(float*));
	printf("Size of double		:%d \t \t \t Size of pointer to double (double*): %zd\n\n", sizeof(double), sizeof(double*));
	printf("Size of char		:%d \t \t \t Size of pointer to char (char*):%zd\n\n",sizeof(char), sizeof(char*));;
	printf("Size of (struct Employee) :%d \t \t \t Size of pointer to struct Employee(struct Employee*): %zd\n\n", sizeof(struct Employee), sizeof(struct Employee*));
	return(0);
}
