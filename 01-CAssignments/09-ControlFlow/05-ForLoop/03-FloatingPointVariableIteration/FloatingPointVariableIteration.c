#include<stdio.h> //for printf()
#include<stdlib.h>//for exit() 

int main(void)
{
	//variable declarations
	float f_mk;
	float f_num_mk = 1.9f;

	//code
	printf("\n\n");
	printf("Printing Numbers %f to %f : \n\n", f_num_mk, (f_num_mk * 10.0f));

	for(f_mk = f_num_mk; f_mk <=(f_num_mk * 10.0f); f_mk = f_mk + f_num_mk)
	{
		printf("\t%f\n", f_mk);
	}

	printf("\n\n");
	exit(EXIT_SUCCESS);
}
