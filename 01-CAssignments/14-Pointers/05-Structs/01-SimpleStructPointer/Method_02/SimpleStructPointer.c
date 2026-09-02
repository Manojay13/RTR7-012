#include <stdio.h>
#include <stdlib.h>

// DEFINING STRUCT
struct MyData_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
};

int main(void)
{
	//variable declarations
	int i_size_mk;
	int f_size_mk;
	int d_size_mk;
	int struct_MyData_size_mk;
	int pointer_to_struct_MyData_size_mk;

	struct MyData_mk *pData_mk = NULL;

	//code
	printf("\n\n");

	pData_mk = (struct MyData_mk *)malloc(sizeof(struct MyData_mk));
	if (pData_mk == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData_mk' !!! EXITTING NOW ...\n\n");
		exit(0);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData_mk' !!!\n\n");

	//Assigning Data Values To The Data Members Of 'struct MyData_mk'
	pData_mk->i_mk = 30;
	pData_mk->f_mk = 11.45f;
	pData_mk->d_mk = 1.2995;

	//Displaying Values Of The Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("i_mk = %d\n", pData_mk->i_mk);
	printf("f_mk = %f\n", pData_mk->f_mk);
	printf("d_mk = %lf\n", pData_mk->d_mk);

	//Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData_mk'
	i_size_mk = sizeof(pData_mk->i_mk);
	f_size_mk = sizeof(pData_mk->f_mk);
	d_size_mk = sizeof(pData_mk->d_mk);

	//Displaying Sizes (In Bytes) Of The Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("Size of 'i_mk' = %d bytes\n", i_size_mk);
	printf("Size of 'f_mk' = %d bytes\n", f_size_mk);
	printf("Size of 'd_mk' = %d bytes\n", d_size_mk);

	//Calculating Size (In Bytes) of the entire 'struct MyData_mk'
	struct_MyData_size_mk = sizeof(struct MyData_mk);
	pointer_to_struct_MyData_size_mk = sizeof(struct MyData_mk *);

	//Displaying Sizes (In Bytes) of the entire 'struct MyData_mk'
	printf("\n\n");
	printf("Size of 'struct MyData_mk': %d bytes\n\n", struct_MyData_size_mk);
	printf("Size of pointer to 'struct MyData_mk': %d bytes\n\n", pointer_to_struct_MyData_size_mk);

	if (pData_mk)
	{
		free(pData_mk);
		pData_mk = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData_mk' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}
