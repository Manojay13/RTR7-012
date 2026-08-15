#include<stdio.h>

int main(void)
{
	//variable declarations
	int a_mk,b_mk,p_mk;

	//code
	a_mk = 9;
	b_mk = 30;
	p_mk = 31;

	printf("\n\n");

	if(a_mk < b_mk)
	{
		printf("A_mk Is Less Than B_mk!!!\n\n");
	}

	if(b_mk != p_mk)
	{
		printf("B_mk Is NOT Equal to P_mk!!!\n\n");
	}

	printf("Both Comparisons Have Been Done !!!\n\n");

	return(0);
}
