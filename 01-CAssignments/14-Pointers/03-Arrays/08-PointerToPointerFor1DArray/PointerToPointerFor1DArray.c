#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void MyAlloc_mk(int **ptr_mk, unsigned int numberOfElements_mk);

	//variable declarations
	int *piArray_mk = NULL;
	unsigned int num_elements_mk;
	int i_mk;

	// code
	printf("\n\n");
	printf("How Many Elements You Want In Integer Array ?\n\n");
	scanf("%u", &num_elements_mk);

	printf("\n\n");
	MyAlloc_mk(&piArray_mk, num_elements_mk);

	printf("Enter %u Elements To Fill Up Your Integer Array: \n\n", num_elements_mk);
	for (i_mk = 0; i_mk < num_elements_mk; i_mk++)
		scanf("%d", &piArray_mk[i_mk]);

	printf("\n\n");
	printf("The %u Elements Entered By You In The Integer Array: \n\n", num_elements_mk);
	for (i_mk = 0; i_mk < num_elements_mk; i_mk++)
		printf("%u\n", piArray_mk[i_mk]);

	printf("\n\n");
	if (piArray_mk)
	{
		free(piArray_mk);
		piArray_mk = NULL;
		printf("Memory Allocated Has Now Been Successfully Freed !!!\n\n");
	}

	return(0);
}

void MyAlloc_mk(int **ptr_mk, unsigned int numberOfElements_mk)
{
	// code
	*ptr_mk = (int*)malloc(numberOfElements_mk * sizeof(int));
	if (*ptr_mk == NULL)
	{
		printf("Could Not Allocate Memory !!! Exitting Now...\n\n");
		exit(0);
	}
	printf("MyAlloc_mk() Has Successfully Allocated %lu Bytes For Integer Array !!!\n\n", (numberOfElements_mk * sizeof(int)));
}
