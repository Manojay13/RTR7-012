#include<stdio.h>

int main(void)
{
	//variable declaration
	int num_mk;
	int* ptr_mk = NULL;
	int* copy_ptr_mk = NULL;

	//code
	num_mk = 5;
	ptr_mk = &num_mk;

	printf("\n\n");
	printf(" ***** BEFORE copy_ptr_mk = ptr_mk *****\n\n");
	printf(" num_mk		= %d\n", num_mk);
	printf(" &num_mk 	= %p\n", &num_mk);
	printf(" *(&num_mk) 	= %d\n", *(&num_mk));
	printf(" ptr_mk 	= %p\n", ptr_mk);
	printf(" *ptr_mk	= %d\n", *ptr_mk);

	//'ptr_mk' is an integer pointer variable...that it it can hold the address of any integer variable only
	//'copy_ptr_mk' is another integer pointer varibale
	//If ptr_mk = &num_mk ... .ptr_mk' wi;; contains address of integer variable 'num_mk'
	//If 'ptr_mk' is assigned to 'copy_ptr_mk', 'copy_ptr_mk' will also contain address of integer variable 'num_mk'
	//Hence, Now , Both 'ptr_mk' and 'copy_ptr_mk' will point to 'num_mk'...
	
	copy_ptr_mk = ptr_mk; //copy_ptr_mk = ptr = &num_mk

	printf("\n\n");
	printf(" ***** AFTER copy_ptr_mk = ptr_mk *****\n\n");
	printf(" num_mk 	= %d\n", num_mk);
	printf(" &num_mk	= %p\n", &num_mk);
	printf(" *(&num_mk)	= %d\n", *(&num_mk));
	printf(" ptr_mk		= %p\n", ptr_mk);
	printf(" *ptr_mk	= %d\n", *ptr_mk);
	printf(" copy_ptr_mk	= %p\n", copy_ptr_mk);
	printf(" *copy_ptr_mk	= %d\n", *copy_ptr_mk);

	return(0);
}
