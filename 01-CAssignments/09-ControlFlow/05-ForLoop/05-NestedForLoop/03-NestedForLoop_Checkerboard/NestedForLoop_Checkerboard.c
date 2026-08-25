#include<stdio.h>// for printf()
#include<stdlib.h>// for exit()
int main(void)
{
	//variable declarations
	int i_mk, j_mk, c_mk;

	//code
	printf("\n\n");
	for(i_mk = 0; i_mk < 64; i_mk++)
	{
		for(j_mk = 0; j_mk < 64; j_mk++)
		{
			c_mk = (((i_mk & 0x8) == 0) ^ ((j_mk & 0x8) == 0));

			if(c_mk == 0)
				printf(" ");
			
			if(c_mk == 1)
				printf("* ");
		}
		printf("\n\n");
	}
	exit(EXIT_SUCCESS);
}
