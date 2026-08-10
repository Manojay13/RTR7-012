#include<stdio.h>

int main(void)
{
	//variable declaration
	int num_mk;
	int *ptr_mk = NULL;
	int ans_mk;

	//code
	num_mk = 10;
	ptr_mk = &num_mk;

	printf("\n\n");
	printf(" num_mk		= %d\n", num_mk);
	printf(" &num_mk	= %p\n", &num_mk);
	printf(" *(&num_mk)	= %d\n", *(&num_mk));
	printf(" ptr_mk		= %p\n", ptr_mk);

	printf("\n\n");

	//Add 10 to 'ptr_mk' which is address of 'num_mk'
	//Hence, 10 will be added to the address of 'num_mk' and resultant address will be displayed ...
	printf("Answer Of (ptr_mk + 10)		=%p\n", (ptr_mk + 10));

	//Add 10 to 'ptr_mk' which is address of 'num_mk' and give value at the new address 
	//Hence ,10 will be added to address of 'num_mk' and the value at resultant address will be displayed ...
	printf("Answer Of *(ptr + 10 )		=%d\n", *(ptr_mk + 10));

	//Add 10 to '*ptr_mk'  which is value at address of 'num_mk' (i.e. 'num_mk' i.e.: 10) and give new value . without any change in address
	//Hence, 10 will be added to '*ptr_mk' (num_mk = 10) and  the resultant value will be given  (*ptr_mk + 10) = num_mk + 10 = (10 + 10) = 20 ...
	printf("Answer Of (*ptr_mk + 10)	=%d\n\n",(*ptr_mk + 10));

	// *** ASSOCIATIVITY OF * (VALUE AT ADDRESS ) AND ++ AND -- OPERATORS IS FROM RIGHT TO LEFT ***
	// (RIGHT TO LEFT) Consider value *ptr_mk ... Pre-increment *ptr_mk ... That is,value at address 'ptr_mk' i.e. *ptr_mk os pre-incremented(++*ptr_mk)
	++*ptr_mk; //*ptr_mk is pre-incremented... *ptr_mk is 10 ... after execution of this statement ... *ptr_mk = 11
	printf("Answer of ++*ptr_mk = %d\n", *ptr_mk); //Brackets only necessary for pre-increment /pre-decrement
	//(RIGHT TO LEFT) Post-increment value *ptr_mk ... That is ,value at address 'ptr_mk' i.e. ptr_mk  is post-incremented by (ptr_mk++) and then value at new address is displayed (*ptr++) ...
	
	*ptr_mk++; //Incorrect method of post-incrementeing value using pointer
	printf("Answer at *ptr_mk++ :%d\n",*ptr_mk);//Brackets ARE necessary for postincrement/post-decrement
	//(RIGHT TO LEFT) Post-increment value *ptr_mk ... That is,value at address 'ptr_mk' i.e.*ptr_mk is post-incremented (*ptr)++
	ptr_mk = &num_mk;
	(*ptr_mk)++; // Correct method of post-incrementing a value using pointer ... *ptr_mk is 10 ... at this statement *ptr_mk remains 10 but next statement *ptr =11 (Post-increament)

	 printf("Answer Of (*ptr_mk)++ : %d\n\n", *ptr_mk);//Brackets are necessary for post-increment /post-decrement
	return(0);
}
