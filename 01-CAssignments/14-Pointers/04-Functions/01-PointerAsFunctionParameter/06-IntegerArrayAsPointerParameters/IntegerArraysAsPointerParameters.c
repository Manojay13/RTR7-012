#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//function declarations
	void MultiplyArrayElementsByNumber_mk(int *, int, int);

	//variable declaration
	int *iArray_mk = NULL;
	int num_elements_mk;
	int i_mk, num_mk;

	//code
	printf("\n\n");
	printf("Enter How Many Elements You Want In The Integer Array: ");
	scanf("%d", &num_elements_mk);

	iArray_mk = (int *)malloc(num_elements_mk * sizeof(int));
	if (iArray_mk == NULL)
	{
		printf("MEMORY ALLOCATION TO 'iArray_mk' HAS FAILED !!! EXITTING NOW...\n\n");
		exit(0);
	}

	printf("\n\n");
	printf("Enter %d Elements For The Integer Array: \n\n", num_elements_mk);
	for (i_mk = 0; i_mk < num_elements_mk; i_mk++)
		scanf("%d", &iArray_mk[i_mk]);

	// ****** ONE ******
	printf("\n\n");
	printf("Array Before Passing To Function MultiplyArrayElementsByNumber_mk(): \n\n");
	for (i_mk = 0; i_mk < num_elements_mk; i_mk++)
		printf("iArray_mk[%d] = %d\n", i_mk, iArray_mk[i_mk]);

	printf("\n\n");
	printf("Enter The Number By Which You Want To Multiply Each Array Element: ");
	scanf("%d", &num_mk);

	MultiplyArrayElementsByNumber_mk(iArray_mk, num_elements_mk, num_mk);

	printf("\n\n");
	printf("Array Returned By Function MultiplyArrayElementsByNumber_mk() : \n\n");
	for (i_mk = 0; i_mk < num_elements_mk; i_mk++)
		printf("iArray_mk[%d] = %d\n", i_mk, iArray_mk[i_mk]);

	if (iArray_mk)
	{
		free(iArray_mk);
		iArray_mk = NULL;
		printf("\n\n");
		printf("MEMORY ALLOCATED TO 'iArray_mk' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}

	return(0);
}

void MultiplyArrayElementsByNumber_mk(int *arr_mk, int iNumElements_mk, int n_mk)
{
	//variable declarations
	int i_mk;

	//code
	for (i_mk = 0; i_mk < iNumElements_mk; i_mk++)
	{
		arr_mk[i_mk] = arr_mk[i_mk] * n_mk;
	}
}
