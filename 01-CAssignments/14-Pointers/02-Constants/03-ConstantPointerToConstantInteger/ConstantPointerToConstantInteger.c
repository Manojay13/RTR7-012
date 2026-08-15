#include<stdio.h>

int main(void)
{
	//variable declaration
	int num_mk = 5;
	const int* const ptr_mk = &num_mk; //REad this line from right to left =>"ptr_mk is a constant(const) pointer (*) to integer (int) constant (const)."
	
	//code
	printf("\n");
	printf("Current Value Of 'num_mk' = %d\n", num_mk);
	printf("Current 'ptr_mk' (Address of 'num_mk') = %p",ptr_mk);

	//The following line does not give error ... as we are modifying the value of
	//the variable individually
	num_mk++;
	printf("\n\n");
	printf("After num_mk++ ,value of 'num_mk' = %d \n", num_mk);

	//The follwing line gives error and is hence commented out.
	//We cannot alter the 'ptr_mk' value as 'ptr_mk' is "a constant pointer to constant integer."
	//With respect to pointer, the value it points to is constant AND the pointer
	//itself is also constant
	//Uncommnet it to see the error
	
	//ptr_mk++;//ConstantPointerToConstantInteger.c(26): error C2166: l-value specifies const object

	//The following line also give error and hence commented out.
	//We cannot alter the value stored in 'ptr_mk' is "A constant
	//"pointer to constant integer"	
	//With respect ot the pointer, the value it points to is constant AND the pointer itself is also constant
	//Uncomment it and see the error
	//(*ptr_mk)++;
	
	return(0);
}
//CONCLUSION:
//As "ptr_mk" is a "constant pointer to constant integer" - we cannot change
//the value at address "ptr_mk" AND we cannot change the 'ptr' (Address) itself
//We can change value of variable (num_mk) individually - whose address is contained in "ptr_mk"
//We cannot also change "the value at address of ptr_mk" - we cannot change the value of "num_mk" with respect to "ptr_mk" =>(*ptr_mk)++ is NOT Allowed
//We cannot change value OF 'ptr_mk' => That is we cannot store a new address inside 'ptr_mk' => So ptr_mk++ is also NOT allowed
