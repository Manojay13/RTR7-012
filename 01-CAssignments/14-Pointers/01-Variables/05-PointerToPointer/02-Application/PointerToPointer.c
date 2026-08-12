#include<stdio.h>

int main(void)
{
	//variable declaration
	int num_mk;
	int *ptr_mk = NULL;
	int **pptr_mk = NULL; // Declaration Method 1:- **pptr_mk Is A Variable Of type
	//'int'
	
	//code
	num_mk = 10;

	printf("\n\n");

	printf(" ***** BEFORE ptr_mk = &num_mk *****\n\n");
	printf("Value Of 'num_mk' 		=%d\n\n", num_mk);
	printf("Address Of 'num_mk'		=%p\n\n", &num_mk);
	printf("Value At Address Of 'num_mk' 	=%d\n\n ", *(&num_mk));

	//Assigning Address of variabel 'num_mk' to pointer variable 'ptr_mk'
	//'ptr_mk' now contains address of 'num_mk' ... hence, 'ptr_mk' is SAME as 
	//'&num_mk'	
	ptr_mk = &num_mk;

	printf("\n\n");

	printf(" ***** AFTER ptr_mk = &num_mk *****\n\n");
	printf("Value Of 'num_mk'		=%d\n\n", num_mk);
	printf("Address Of 'num_mk		=%p\n\n", ptr_mk);
	printf("Value at Address Of 'num_mk 	=%d\n\n", *ptr_mk);

	//Assigning Address of Variable 'ptr_mk' to pointrt-to-pointr variable
	//'pptr_mk'
	//'pptr_mk' now contains the address of 'ptr_mk' which in turn contains address
	//of 'num_mk'
	//Hence 'pptr_mk' is SAME as '&ptr_mk'
	//'ptr_mk' is same as '&num_mk'
	//Hence, pptr_mk = %ptr_mk = &(&num_mk)
	//If ptr = &num and *ptr = *(&num_mk) = value at address of 'num_mk'
	//then ptr_mk = &num_mk and *pptr_mk = *(&ptr) = ptr = value at address of 'ptr_mk'
	//i.e.'ptr_mk' i.e. : address of 'num_mk'
	//Then, **pptr_mk = **(&ptr_mk) =*(*(&ptr_mk))= *ptr_mk = *(&num_mk) = num_mk = 10
	//Hence, num_mk = *(&num_mk) = *ptr_mk = *(*pptr_mk) = **pptr_mk
	
	pptr_mk = &ptr_mk;

	printf(" ***** AFTER pptr_mk = &ptr_mk *****\n\n");
	printf("Value Of 'num_mk'		=%d\n\n", num_mk);
	printf("Address Of 'num_mk' (ptr_mk)	=%p\n\n", ptr_mk);
	printf("Address of 'ptr' (pptr_mk)	=%p\n\n", pptr_mk);
	printf("Value At Address Of 'ptr_mk' (*pptr_mk) = %p\n\n", *pptr_mk);
	printf("Value At Address Of 'num_mk' (*ptr_mk) (*pptr_mk) =%d\n\n", **pptr_mk);
	
	return(0);
}
