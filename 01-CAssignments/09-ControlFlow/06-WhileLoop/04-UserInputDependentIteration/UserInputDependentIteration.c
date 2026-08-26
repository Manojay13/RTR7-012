#include<stdio.h>//for printf()
#include<stdlib.h>////for exit()
int main(void)
{
	//variable declarations
	int i_num_mk,num_mk, i_mk;

	//code
	printf("\n\n");

	printf("Enter An Integer Value From Which Iteration Must Begin : ");
	scanf("%d", &i_num_mk);

	printf("How Many Digits Do You Want To Print From %d Onwards ? : ", i_num_mk);
	scanf("%d", &num_mk);

	printf("Printing Digits %d to %d : \n\n", i_num_mk, (i_num_mk +num_mk));

	i_mk= i_num_mk;
	while (i_mk<= (i_num_mk +num_mk))
	{
		printf("\t%d\n", i_mk);
		i_mk++;
	}

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
