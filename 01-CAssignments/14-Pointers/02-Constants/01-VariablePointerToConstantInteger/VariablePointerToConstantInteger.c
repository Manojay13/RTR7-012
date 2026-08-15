#include<stdio.h>

int main(void)
{
	//variable declaration
	int num_mk = 5;
	const int* ptr_mk = NULL; //Read this line from right to left => "ptr is a pointer (*) to integer (int) constant (const)."
	//code
	ptr_mk = &num_mk;
	printf("\n");
	printf("Current Value Of 'num_mk' = %d\n", num_mk);
	printf("Current 'ptr_mk' (Address of 'num_mk') = %p\n", ptr_mk);

	//The following line does NOT give error  ... as we are modifying the value of 
	//variable individually
	num_mk++;
	printf("\n\n");
	printf("After num++, value of 'num_mk' = %d\n", num_mk);

	//The follwoing line gives error and is hence commented out
	//We cannot alter the value stored in "A pointer to constant integer"
	//With Respect to the pointer , the value it points to should be constant.
	//Uncomment it and see the error
	
	//(*ptr_mk)++; //VariablePointerToConstantInteger.c(25): error C2166: l-value specifies const object

	//The following line does NOT give error
	//We do not get error because we are changing the pointer(address).
	//The pointer is not constant. The valuie to which the pointer points is
	//constant
	ptr_mk++;

	printf("\n\n");
	printf("After ptr_mk++, value of 'ptr_mk' =%p\n", ptr_mk);
	printf("Value at this new 'ptr_mk' = %d\n", *ptr_mk);
	printf("\n");
	return(0);
}
