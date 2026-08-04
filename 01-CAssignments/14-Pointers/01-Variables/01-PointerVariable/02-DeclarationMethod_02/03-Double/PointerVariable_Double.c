#include<stdio.h>

int main(void)
{
	//variable declarations
	double num_mk;
	double* ptr_mk = NULL; //Declaration Method 2:- 'ptr_mk' is variable of type 'double*' 
			       
	//code
	num_mk = 3.1414141414;

	printf("\n\n");

	printf(" *****BEFORE ptr_mk = &num_mk");
	printf("Value Of 'num_mk'		=%lf\n\n", num_mk);
	printf("Address Of '&num_mk'		=%p\n\n", &num_mk);
	printf("Value At Address Of 'num_mk'	=%lf\n\n",*(&num_mk));

	//Assigning address of variable 'num_mk' to pointer variable 'ptr_mk'
	//'ptr_mk' now contains address of 'num_mk'... hence ,'ptr_mk' is SAME as '&num'
	ptr_mk = &num_mk;

	printf(" ***** AFTER ptr_mk = &num_mk *****\n\n");
	printf("Value Of 'num_mk'		=%lf\n\n", num_mk);
	printf("Address of 'num_mk'		=%p\n\n", ptr_mk);
	printf("Value At Address Of 'num_mk'	=%lf\n\n", *ptr_mk);

	return(0);
}
