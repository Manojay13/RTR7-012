#include<stdio.h>//'stdio.h' contains declaration of 'printf()'
#include<stdlib.h> //'stdilib.h' contains declaration of 'exit()'

int main(void)
{
	//function prototypes
	void PrintBinaryFormOfNumber(unsigned int);

	//variable declarations
	unsigned int a_mk;
	unsigned int num_bits_mk;
	unsigned int result_mk;

	//code
	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u", &a_mk);

	printf("\n\n");
	printf("By How Many Bits Do You Want To Shift A_mk = %d To The Left ? ", a_mk);
	scanf("%u", &num_bits_mk);

	printf("\n\n\n\n");
	result_mk = a_mk << num_bits_mk;
	printf("Bitwise LEFT-SHIFT By %d Bits Of A_mk = %d \nGives The Result_mk = %d (Decimal).\n\n", num_bits_mk, a_mk, result_mk);
	PrintBinaryFormOfNumber(a_mk);
	PrintBinaryFormOfNumber(result_mk);

	exit(EXIT_SUCCESS);
}



void PrintBinaryFormOfNumber(unsigned int decimal_number_mk)
{
	//variable declarations
	unsigned int quotient_mk, remainder_mk;
	unsigned int num_mk;
	unsigned int binary_array_mk[8];
	int i_mk;

	//code
	for (i_mk = 0; i_mk < 8; i_mk++)
		binary_array_mk[i_mk] = 0;

	printf("The Binary Form Of The Decimal Integer decimal_number_mk = %d Is\t=\t", decimal_number_mk);
	num_mk = decimal_number_mk;
	i_mk = 7;
	while (num_mk != 0)
	{
		quotient_mk = num_mk / 2;
		remainder_mk = num_mk % 2;
		binary_array_mk[i_mk] = remainder_mk;
		num_mk = quotient_mk;
		i_mk--;
	}

	for (i_mk = 0; i_mk < 8; i_mk++)
		printf("%u", binary_array_mk[i_mk]);
	printf("\n\n");
}
