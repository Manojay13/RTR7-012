#include <stdio.h>

enum
{
	NEGATIVE_mk = -1,
	ZERO_mk,
	POSITIVE_mk
};

int main(void)
{
	//function declarations
	int Difference_mk(int, int, int *);

	//variable declaration
	int a_mk;
	int b_mk;
	int answer_mk, ret_mk;

	//code
	printf("\n\n");
	printf("Enter Value Of 'A': ");
	scanf("%d", &a_mk);

	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &b_mk);

	ret_mk = Difference_mk(a_mk, b_mk, &answer_mk);

	printf("\n\n");
	printf("Difference Of %d And %d = %d\n\n", a_mk, b_mk, answer_mk);

	if (ret_mk == POSITIVE_mk)
		printf("The Difference Of %d And %d Is Positive !!! \n\n", a_mk, b_mk);

	else if (ret_mk == NEGATIVE_mk)
		printf("The Difference Of %d And %d Is Negative !!! \n\n", a_mk, b_mk);

	else
		printf("The Difference Of %d And %d Is Zero !!!\n\n", a_mk, b_mk);

	return(0);
}

// WE WANT OUR FUNCTION Difference_mk() TO PERFORM 2 JOBS ...
// ONE, IS TO SUBTRACT THE INPUT NUMBERS ('y_mk' FROM 'x_mk') AND THE SECOND, IS TO TELL WHETHER THE DIFFERENCE OF 'x_mk' AND 'y_mk' IS POSITIVE or NEGATIVE or ZERO
// BUT ANY FUNCTION HAS ONLY ONE VALID RETURN VALUE, THEN HOW CAN WE MANAGE TO RETURN TWO VALUES TO THE CALLING FUNCTION?
// THIS IS WHERE PARAMETERIZED RETURN VALUE COMES INTO THE PICTURE
// WE CAN RETURN THE ACTUAL DIFFERENCE OF 'x_mk' AND 'y_mk', THAT IS, THE ACTUAL ANSWER VALUE, VIA OUT-PARAMETER / PARAMETERIZED RETURN VALUE
// AND WE CAN RETURN THE STATUS OF THE ANSWER (POSITIVE / NEGATIVE / ZERO) VIA THE ACTUAL RETURN VALUE OF THE FUNCTION ...

int Difference_mk(int x_mk, int y_mk, int *diff_mk)
{
	//code
	*diff_mk = x_mk - y_mk;

	if (*diff_mk > 0)
		return(POSITIVE_mk);

	else if (*diff_mk < 0)
		return(NEGATIVE_mk);

	else
		return(ZERO_mk);
}
