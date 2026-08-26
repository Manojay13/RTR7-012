#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> // 'stdlib.h' contains declaration of 'exit()'

int main(int argc_mk, char *argv_mk[], char *envp_mk[])
{
	//variable declarations
	int i_mk;

	//code
	if (argc_mk != 4) // Program name + first name + middle name + surname = 4 command line arguments are required
	{
		printf("\n\n");
		printf("Invalid Usage !!! Exitting Now ... \n\n");
		printf("Usage : CommandLineArgumentsApplication <first name> <middle name> <surname>\n\n");
		exit(0);
	}

	// *** THIS PROGRAMS PRINTS YOUR FULL NAME AS ENTERED IN THE COMMAND LINE ARGUMENTS ***
	printf("\n\n");
	printf("Your Full Name Is : ");
	for (i_mk = 1; i_mk < argc_mk; i_mk++) //loop starts from i = 1 because, i = 0 will result in 'argv[i]' = 'argv[0]' which is the name of the program itself i.e : 'CommandLineArgumentsApplication.exe'
	{
		printf("%s ", argv_mk[i_mk]);
	}

	printf("\n\n");

	return(0);
}
