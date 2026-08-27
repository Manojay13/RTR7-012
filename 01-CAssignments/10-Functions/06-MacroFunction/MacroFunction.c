#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

#define MAX_NUMBER(a, b) ((a > b) ? a : b)

int main(int argc, char *argv[], char *envp[])
{
	// variable declarations
	int iNum_01_mk;
	int iNum_02_mk;
	int iResult_mk;

	float fNum_01_mk;
	float fNum_02_mk;
	float fResult_mk;

	// code
	// ****** COMPARING INTEGER VALUES ******
	printf("\n\n");
	printf("Enter An Integer Number : \n\n");
	scanf("%d", &iNum_01_mk);

	printf("\n\n");
	printf("Enter Another Integer Number : \n\n");
	scanf("%d", &iNum_02_mk);

	iResult_mk = MAX_NUMBER(iNum_01_mk, iNum_02_mk);
	printf("\n\n");
	printf("Result Of Macro Function MAX_NUMBER() = %d\n", iResult_mk);

	printf("\n\n");

	// ****** COMPARING FLOATING-POINT VALUES ******
	printf("\n\n");
	printf("Enter A Floating Point Number : \n\n");
	scanf("%f", &fNum_01_mk);

	printf("\n\n");
	printf("Enter Another Floating Point Number : \n\n");
	scanf("%f", &fNum_02_mk);

	fResult_mk = MAX_NUMBER(fNum_01_mk, fNum_02_mk);
	printf("\n\n");
	printf("Result Of Macro Function MAX_NUMBER() = %f\n", fResult_mk);

	printf("\n\n");

	exit(EXIT_SUCCESS);
}
