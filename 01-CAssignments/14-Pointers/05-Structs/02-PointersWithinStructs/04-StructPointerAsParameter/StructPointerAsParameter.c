#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

// DEFINING STRUCT
struct MyData_mk
{
	int i_mk;
	float f_mk;
	double d_mk;
};

int main(void)
{
	//function prototypes
	void ChangeValues_mk(struct MyData_mk *);

	//variable declarations
	struct MyData_mk *pData_mk = NULL;

	//code
	printf("\n\n");

	pData_mk = (struct MyData_mk *)malloc(sizeof(struct MyData_mk));
	if (pData_mk == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData_mk' !!! EXITTING NOW ...\n\n");
		exit(EXIT_FAILURE);
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

	ChangeValues_mk(pData_mk);

	//Displaying Values Of The Data Members Of 'struct MyData_mk'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData_mk' ARE : \n\n");
	printf("i_mk = %d\n", pData_mk->i_mk);
	printf("f_mk = %f\n", pData_mk->f_mk);
	printf("d_mk = %lf\n", pData_mk->d_mk);

	if (pData_mk)
	{
		free(pData_mk);
		pData_mk = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData_mk' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	exit(EXIT_SUCCESS);
}

void ChangeValues_mk(struct MyData_mk *pParam_Data_mk)
{
	//code
	pParam_Data_mk->i_mk = 9;
	pParam_Data_mk->f_mk = 8.2f;
	pParam_Data_mk->d_mk = 6.1998;

	// CAN ALSO DO THIS AS ...
	/*
	(*pParam_Data_mk).i_mk = 9;
	(*pParam_Data_mk).f_mk = 8.2f;
	(*pParam_Data_mk).d_mk = 6.1998;
	*/
}
