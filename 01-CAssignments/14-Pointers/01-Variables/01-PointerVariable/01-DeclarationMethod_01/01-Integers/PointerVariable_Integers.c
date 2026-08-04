#include<stdio.h>

int main(void)
{
	//variable Declaration
	int num_mk;
	int *ptr_mk = NULL; //Declaration Method 1:- '*ptr_mk' is a variable of type 'int'
	//code
	num_mk = 10;

	printf("\n\n");
	
	printf("**** BEFORE ptr_mk = &num_mk ****\n\n");
	printf("Value of 'num_mk'		= %d\n\n", num_mk);
	printf("Address of 'num_mk'		= %p\n\n", &num_mk);
	printf("Value At Address Of 'num_mk' = %d\n\n", *(&num_mk));

	//Assigning Address of Variable 'num_mk' to pointer variable 'ptr_mk'
	//'ptr_mk' now contains address of 'num_mk'... Hence , 'ptr_mk' is SAME as '&num_mk'
	ptr_mk = &num_mk;

	printf("\n\n");

	printf(" **** AFTER ptr_mk = &num_mk ****\n\n");
	printf("Value of 'num_mk'		=%p\n\n", ptr_mk);
	printf("Value of Address Of 'num_mk' = %d\n\n", *ptr_mk);
	return(0);
}
