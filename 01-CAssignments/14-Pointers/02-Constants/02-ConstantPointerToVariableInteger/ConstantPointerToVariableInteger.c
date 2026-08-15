#include<stdio.h>

int main(void)
{
	//variable declaration
	int num_mk = 5;
	const int* ptr_mk = NULL; //Read this line from left => "ptr is a pointer (*) to integer(int) constant (const)."
	
	//code
	ptr_mk = &num_mk;
	printf("\n");
	printf("Current Value Of 'num_mk' = %d\n", num_mk);
	printf("Current 'ptr_mk' (Address of 'num_mk') = %p\n",ptr_mk);

	//The following line does NOT give error ... as we are modifying the value of the variable individually
	num_mk++;
	printf("\n\n");
	printf("After num_mk++, value of 'num_mk' = %d\n", num_mk);

	//The following line gives error as hence commented out
	//We acannot alter the value stored in "A pointer to constant integer"
	//With respect to the pointer ,the value it points to should be constant
	//Uncomment ot and see the error
	
	//(*ptr_mk)++;//ConstantPointerToVariableInteger.c(25): error C2166: l-value specifies const object
	
	//The following line does NOT give error
	//We do nit get error because we are changing the pointer(address).
	//The pointer is not constant. The value to which the pointer points os constant
	
	ptr_mk++;

	printf("\n\n");
	printf("After ptr_mk++, value of 'ptr_mk' = %p\n", ptr_mk);
	printf("Value  at  this new 'ptr_mk' = %d\n", *ptr_mk);
	printf("\n");
	return(0);
}
