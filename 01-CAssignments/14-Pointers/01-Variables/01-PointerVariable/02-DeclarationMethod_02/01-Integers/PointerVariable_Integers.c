#include<stdio.h>

int main(void)
{
	//variable declarations
	int num_mk ;
	int* ptr_mk = NULL; //Declaration Method 2:- 'ptr_mk' is a variable of type 'int*' 
	//code
	num_mk = 10;

	printf(" **** BEFORE ptr_mk = &num_mk **** \n\n");
	printf("Value Of 'num_mk'		=%d\n\n", num_mk);
	printf("Address of 'num_mk'		=%p\n\n", &num_mk);
	printf("Value At Address Of 'num_mk' 	=%d\n\n",*(&num_mk));

	//Assigning Address of variable 'num_mk' to pointer variable 'ptr_nk'
	//'ptr_mk' now contains address of 'num_mk'... hence , 'ptr_mk' is SAME as '&num_mk'
	ptr_mk = &num_mk;


	printf("\n\nn");

	printf(" ***** AFTER ptr_mk = &num_mk *****\n\n");
	printf("Value Of 'num_mk' 		=%d\n\n",num_mk);
	printf("Address of 'num_mk'		=%p\n\n",ptr_mk);
	printf("Value At Address Of 'num_mk' 	=%d\n\n",*ptr_mk);



	return(0);
}
