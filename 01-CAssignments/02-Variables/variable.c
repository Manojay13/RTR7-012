#include<stdio.h>

int main(void)
{
	//variable declarations
	int i_mk = 5;
	float f_mk = 3.9f;
	double d_mk = 8.041997;
	char c_mk = 'A';

	//code
	printf("\n\n");

	printf("i_mk =%d\n",i_mk);
	printf("f_mk =%f\n",f_mk);
	printf("d_mk =%lf\n",d_mk);
	printf("c_mk =%c\n",c_mk);

	printf("\n\n");

	i_mk = 43;
	f_mk = 6.54f;
	d_mk = 26.1294;
	c_mk = 'P';

	printf("i_mk = %d\n",i_mk);
	printf("f_mk = %f\n",f_mk);
	printf("d_mk = %lf\n",d_mk);
	printf("c_mk = %c\n",c_mk);

	printf("\n\n");

	return(0);
}

