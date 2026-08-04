#include<stdio.h>

int main(void)
{
	//variable declarations
	int a_mk;
	int b_mk;
	int result_mk;


	//code
	printf("\n\n");
	printf("Enter A Number: ");
	scanf("%d",&a_mk);

	printf("Enter the Another Number : ");
	scanf("%d",&b_mk);

	printf("\n\n");

	//The Follwing Are 5 Arithmentic Operator +,-,*,/ and %
	//Also ,The Resultants Of The Arithmetic Operations In All The Below Five Cases
	//Has Been Assigned To The Varible 'result_mk' Using the Assignment Operator(=)
	
	result_mk = a_mk + b_mk;

	printf("Addition of A_mk = %d and B_mk = %d Gives %d.\n",a_mk,b_mk,result_mk);

	result_mk = a_mk - b_mk;

	printf("Substraction of A_mk = %d and B_mk = %d Gives %d.\n ",a_mk,b_mk,result_mk);

	result_mk = a_mk * b_mk;
	printf("Mullitplication A_mk = %d and B_mk = %d gives %d.\n",a_mk,b_mk,result_mk);
	result_mk = a_mk /b_mk;
	printf("Division A_mk = %d and B_mk=%d  gives Quotient%d.\n",a_mk,b_mk,result_mk);

	result_mk = a_mk %b_mk;
	printf("Division Of A_mk and B_mk gives Remainder %d.\n",a_mk,b_mk,result_mk);


	
	printf("\n\n");


	return(0);



}
