#include<stdio.h>//'stdio.h' contains declaration of 'printf()'

//Entry-Point Function =>main() => Valid Return Type(int) and 2 parameters
//(int argc,char *argv[])

int main(int argc_mk,char *argv_mk[])
{
	//variable declaration
	int i_mk;

	//code
	printf("\n\n");
	printf("Hello World !!!\n\n");
	printf("Number Of Command Line Arguments = %d\n\n",argc_mk);
	printf("Command Line Arguments Passed To This Program Are: \n\n");
	for(i_mk = 0;i_mk < argc_mk; i_mk++)
	{
		printf("Command Line Argument Number %d = %s\n",(i_mk +1),argv_mk[i_mk]);
	}

	printf("\n\n");

	return(0);
}
