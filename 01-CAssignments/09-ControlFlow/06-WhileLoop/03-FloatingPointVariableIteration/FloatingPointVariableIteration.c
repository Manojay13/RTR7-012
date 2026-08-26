#include<stdio.h>// f_mkor printf_mk()
#include<stdlib.h>//f_mkor exit()

int main(void)
{
	//variable declarations
	float f_mk;
	float f_num_mk = 1.7f; //simply change this value ONLY to get different outputs...

	//code
	printf("\n\n");

	printf("Printing Numbers %f to %f : \n\n", f_num_mk, (f_num_mk * 20.0f));

	f_mk = f_num_mk;
	while (f_mk <= (f_num_mk * 20.0f))
	{
		printf("\t%f\n", f_mk);
		f_mk = f_mk + f_num_mk;
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
