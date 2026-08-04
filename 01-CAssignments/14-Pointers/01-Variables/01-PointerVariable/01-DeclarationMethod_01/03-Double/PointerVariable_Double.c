#include<stdio.h>

int main(void)
{
	//variable declarations
	double num_mk;
	double *ptr_mk = NULL; //Declaration Method1:- '*ptr' is variable of type 'double'
	
	//code
	num_mk = 2.3232323232;

	printf("\n\n");

	printf(" ****BEFORE ptr = &num ****\n\n");
	printf("Value Of 'num_mk' 	= %lf\n\n", num_mk);
	printf("Address Of 'num_mk'	= %p\n\n", &num_mk);
	printf("Value At Address of 'num_mk'=%lf\n\n",*(&num_mk));

	//Assigning address of variable 'num_mk' to pointer to variable 'ptr_mk'
	//'ptr' now contains address of 'num_mk'... hence, 'ptr_mk' is SAME as '&num_mk'
	ptr_mk = &num_mk;

	printf("\n\n");
	
	printf(" ****AFTER ptr_mk = &num_mk ****\n\n");
	printf("Value Of 'num_mk'	= %lf\n\n", num_mk);
	printf("Address Of 'num_mk' 	=%p\n\n", ptr_mk);
	printf("Value at Address Of 'num_mk' =%lf\n\n", *ptr_mk);
	return(0);
}
