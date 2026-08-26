#include<stdio.h>

int main(void)
{
	//variable declarations
	int a_mk;
	int b_mk;
	int x_mk;

	//code
	printf("\n\n");
	printf("Enter the Number: ");
	scanf("%d",&a_mk);

	printf("Enter Another Number: ");
	scanf("%d",&b_mk);
	
	printf("\n\n");

	//Since ,In All Follwing 5 Cases ,The Operand on The Left 'a_mk' Is getting Repeatedd Immidiately on Right(e.g.: a_mk = a_mk + b_mk or a_mk = a_mk - b_mk),
	//We Are using Compound Assignmnet Operators +=,-=, *=, /=,%=
	//Since, 'a_mk'  Will Be Assigned The Value(a_mk+b_mk) At The Expression (a_mk += b_mk) ,We Must
	//Save The original Value of 'a_mk' To another variable 'x_mk'
	x_mk = a_mk;

	a_mk += b_mk; //a_mk = a_mk + b_mk
	printf("Addition of A_mk = %d  and B_mk = %d Gives %d.\n", x_mk, b_mk, a_mk);

	//Value of 'a_mk' Altered In the Above Expression Is Used Here...
	//Since, 'a_mk' Will Be Assigned The Value of 'a_mk' in another variable 'x_mk'
	x_mk = a_mk;
	a_mk -= b_mk;//a_mk= a_mk-b_mk
	printf("Substraction of A_mk = %d and B_mk = %d Gives %d\n", x_mk, b_mk, a_mk);

	//Value of 'a_mk' Altered in Above expression Is used here...
	//Since , 'a_mk' Will be Assigned Value 'a_mk' the Value of (a_mk*b_mk)  At The Expression 
	//(a_mk /= b_mk), We must save original Value of 'a_mk' To Another Value 'x_mk'
	x_mk = a_mk;
	a_mk *= b_mk;// a_mk = a_mk * b_mk
	printf("Multiplication of A_mk = %d and B_mk = %d Gives %d.\n", x_mk, b_mk, a_mk);

	//Value of 'a_mk' Altered In The Above Expression Is Used Here...
	//Since 'a_mk' Will be Assigned Value of (a_mk / b_mk) At The Expression (a_mk \=b_mk), We Must save the Original Value of 'a_mk' in another variable 'x_mk'
	x_mk = a_mk;
	a_mk /= b_mk;
	printf("Division of A_mk = %d and B_mk = %d Gives Quotient %d.\n",x_mk, b_mk, a_mk);

	//Value Of 'a_mk' Altered In The Above Expression Is Used Here...
	//Since 'a_mk' Will be Assigned Value of (a_mk%b_mk) At The Expression (a_mk %= b_mk)
	x_mk = a_mk;
	a_mk %= b_mk;//a_mk= a_mk % b_mk
	printf("Division Of A_mk = %d and B_mk=%d Gives Remainder %d\n",x_mk,b_mk,a_mk);

	printf("\n\n");

	return(0);
}
