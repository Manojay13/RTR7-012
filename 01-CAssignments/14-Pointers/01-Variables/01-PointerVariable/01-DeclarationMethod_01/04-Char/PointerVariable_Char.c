#include<stdio.h>

int main(void)
{
	//variable declarations
	char ch_mk;
	char *ptr_mk = NULL; // Declaration Method 1:- '*ptr' is variable of type 'char'
	
	//code
	ch_mk = 'A';

	printf("\n\n");

	printf(" ****BEFORE ptr_mk = &ch_mk ****\n\n");
	printf("Value Of 'ch'	=%c\n\n", ch_mk);
	printf("Address of 'ch'	=%p\n\n", &ch_mk);
	printf("Value At Address of 'ch' = %c\n\n",*(&ch_mk));

	//Assigning address of variable 'ch_mk' to pointer variable 'ptr_mk'
	//'ptr_mk' now contains address of 'ch_mk'... hence,'ptr_mk' is SAME as '&ch_mk'
	ptr_mk = &ch_mk;

	printf("\n\n");

	printf(" **** AFTER ptr_mk = &ch_mk ****\n\n");
	printf("Value Of 'ch_mk'	=%c\n\n", ch_mk);
	printf("Address of 'ch_mk'	=%p\n\n", ptr_mk);
	printf("Value At Address Of 'ch_mk' =%c\n\n",*ptr_mk);

	return(0);

}
