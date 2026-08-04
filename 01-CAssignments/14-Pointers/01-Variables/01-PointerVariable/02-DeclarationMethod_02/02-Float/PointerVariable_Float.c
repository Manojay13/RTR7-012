#include<stdio.h>

int main(void)
{
	//variable declarations
	float num_mk;
	float* ptr_mk = NULL; //Declaration Method 2 :- 'ptr' is variable of type 'float*' 
	//code
	num_mk = 6.9f;

	printf("\n\n");

	printf(" ***** BEFORE ptr_mk = &num_mk *****\n\n");
	printf("Value Of 'num_mk'		=%f\n\n", num_mk);
	printf("Address of 'num_mk'		=%p\n\n", &num_mk);
	printf("Value At Address Of 'num_mk'	=%f\n\n", *(&num_mk));

	//Assigning address of variable 'num_mk' to pointer variable 'ptr_mk'
	//'ptr_mk' now contains address of 'num_mk'...hence, 'ptr_mk' is SAME as '&num_mk'
	ptr_mk = &num_mk;

	printf(" ***** AFTER ptr_mk = &num_mk *****\n\n");
	printf("Value Of 'num_mk'		=%f\n\n", num_mk);
	printf("Address Of 'num_mk'		=%p\n\n", ptr_mk);
	printf("Value At Address Of 'num_mk' 	=%f\n\n", *ptr_mk);

	return(0);
}
