#include<stdio.h>//'stdio.h' contains declaration of 'printf()'
#include<ctype.h>//'ctype.h' contains declaration of 'atoi()'
#include<stdlib.h>//'stdlib.h' contains declaration of 'exit()'

int main(int argc_mk, char *argv_mk[], char *envp_mk[])
{
	//variable declarations
	int i_mk;
	int num_mk;
	int sum_mk = 0;

	//code
	if(argc_mk == 1)
	{
		printf("\n\n");
		printf("No Numbers Given For Addition !!! Exitting now..."
		"\n\n");
		printf("Usage : CommandLineArgumentsApplication <first number>"
				"<second number> ...\n\n");
		exit(0);
	}

	// *** THIS PROGRAMS ADDS ALL COMMAND LINE ARGUMENTS GIVEN IN INTEGER
	// *** FORM ONLY AND OUTPUTS THE SUM ***
	// *** DUE TO USE OF atoi(), ALL COMMAND LINE ARGUMENTS OF TYPES OTHER
    // *** THAN 'int' ARE IGNORED ***
	printf("\n\n");
	printf("Sum Of All Integer Command Line Arguments Is : \n\n");
	for (i_mk = 1; i_mk < argc_mk; i_mk++) //loop starts from i_mk = 1 because, i_mk = 0
//will result in 'argv_mk[i_mk]' = 'argv_mk' which is the name of the program itself i.e
//: 'CommandLineArgumentsApplication.exe'
	{
		num_mk = atoi(argv_mk[i_mk]);
		sum_mk = sum_mk + num_mk;
	}

	printf("Sum = %d\n\n", sum_mk);

	exit(EXIT_SUCCESS);
}


