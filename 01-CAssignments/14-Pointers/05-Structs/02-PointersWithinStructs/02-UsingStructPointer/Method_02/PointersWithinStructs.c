#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'


// DEFINING STRUCT
struct MyData_mk
{
	int *ptr_i_mk;
	int i_mk;

	float *ptr_f_mk;
	float f_mk;

	double *ptr_d_mk;
	double d_mk;
};

int main(void)
{
	//variable declarations
	struct MyData_mk *pData_mk = NULL;

	//code
	printf("\n\n");
	pData_mk = (struct MyData_mk *)malloc(sizeof(struct MyData_mk));
	if (pData_mk == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData_mk' !!! EXITTING NOW \n\n");
		exit(EXIT_FAILURE);
	}
	else
		printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData_mk' !!!\n\n");

	pData_mk->i_mk = 9;
	pData_mk->ptr_i_mk = &(pData_mk->i_mk);

	pData_mk->f_mk = 11.45f;
	pData_mk->ptr_f_mk = &(pData_mk->f_mk);

	pData_mk->d_mk = 30.121995;
	pData_mk->ptr_d_mk = &(pData_mk->d_mk);

	printf("\n\n");
	printf("i_mk = %d\n", *(pData_mk->ptr_i_mk));
	printf("Adress Of 'i_mk' = %p\n", pData_mk->ptr_i_mk);

	printf("\n\n");
	printf("f_mk = %f\n", *(pData_mk->ptr_f_mk));
	printf("Adress Of 'f_mk' = %p\n", pData_mk->ptr_f_mk);

	printf("\n\n");
	printf("d_mk = %lf\n", *(pData_mk->ptr_d_mk));
	printf("Adress Of 'd_mk' = %p\n", pData_mk->ptr_d_mk);

	if (pData_mk)
	{
		free(pData_mk);
		pData_mk = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData_mk' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	exit(EXIT_SUCCESS);
}
