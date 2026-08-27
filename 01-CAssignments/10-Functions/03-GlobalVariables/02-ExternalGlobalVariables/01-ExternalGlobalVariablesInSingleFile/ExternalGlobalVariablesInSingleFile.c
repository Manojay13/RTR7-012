#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

// *** GLOBAL SCOPE ***

int main(void)
{
	//function prototypes
	void change_count(void);

	//variable declarations
	extern int global_count_mk;

	//code
	printf("\n");
	printf("Value Of global_count_mk before change_count() = %d\n", global_count_mk);
	change_count();
	printf("Value Of global_count_mk after change_count() = %d\n", global_count_mk);
	printf("\n");

	exit(EXIT_SUCCESS);
}

// *** GLOBAL SCOPE ***
// global_count_mk is a global variable.
// Since, it is declared before change_count(), it can be accessed and used as any ordinary global variable in change_count()
// Since, it is declared after main(), it must be first re-declared in main() as an external global variable by means of the 'extern' keyword and the type of the variable.
// Once this is done, it can be used as an ordinary global variable in main as well.

int global_count_mk = 0;

void change_count(void)
{
	//code
	global_count_mk = 5;
	printf("Value Of global_count_mk in change_count() = %d\n", global_count_mk);
}
