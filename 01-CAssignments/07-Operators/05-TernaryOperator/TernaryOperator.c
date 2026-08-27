#include <stdio.h>

int main(void)
{
	//variable declarations
	int a_mk, b_mk;
	int p_mk, q_mk;
	char ch_result_01_mk, ch_result_02_mk;
	int i_result_01_mk, i_result_02_mk;

	//code
	printf("\n\n");

	a_mk = 7;
	b_mk = 5;
	ch_result_01_mk = (a_mk > b_mk) ? 'A' : 'B';
	i_result_01_mk = (a_mk > b_mk) ? a_mk : b_mk;
	printf("Ternary Operator Answer 1 ----- %c and %d.\n\n", ch_result_01_mk, i_result_01_mk);

	p_mk = 30;
	q_mk = 30;
	ch_result_02_mk = (p_mk != q_mk) ? 'P' : 'Q';
	i_result_02_mk = (p_mk != q_mk) ? p_mk : q_mk;
	printf("Ternary Operator Answer 2 ----- %c and %d.\n\n", ch_result_02_mk, i_result_02_mk);

	printf("\n\n");
	return(0);
}
