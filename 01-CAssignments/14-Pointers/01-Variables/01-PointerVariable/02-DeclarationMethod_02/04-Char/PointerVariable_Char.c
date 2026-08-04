#include<stdio.h>

int main(void)
{
	//variable declarations
	char ch_mk;
	char* ptr_mk = NULL; //Declaration Method 2 :- 'ptr_mk' is a variable of type 'char*' 	
	//code
	ch_mk = 'A';

	printf(" *****BEFORE ptr_mk = &ch_mk *****\n\n");
	printf("Value of 'ch_mk			=%d\n\n", ch_mk);
	printf("Address of 'ch_mk'		=%p\n\n", &ch_mk);
	printf("Value at Address Of 'ch_mk' 	=%c\n\n", *(&ch_mk));

	//Assigning address of variable 'ch_mk' to pointer 'ptr_mk'
	//'ptr_mk' now contains address of 'ch_mk' ...hence ,'ptr_mk' is SAME as '&ch_mk'
	ptr_mk = &ch_mk;

	printf("\n\n");

	printf(" ***** AFTER ptr_mk = &ch_mk *****\n\n");
	printf("Value of 'ch_mk'		=%c\n\n",ch_mk);
	printf("Address Of 'ch_mk'		=%p\n\n", ptr_mk);
	printf("Value  At Address Of 'ch_mk' 	=%c\n\n",*ptr_mk);

	return(0);
}
