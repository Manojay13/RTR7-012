#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
// *** GLOBAL SCOPE ***
int global_count_mk = 0;

int main(void)
{
	//function prototypes
	void change_count(void);
	void change_count_one(void); //function defined in File_01.c
	void change_count_two(void); //function defined in File_02.c

	//code
	printf("\n");

	change_count();
	change_count_one(); //function defined in File_01.c
	change_count_two(); //function defined in File_02.c

	exit(EXIT_SUCCESS);
}

void change_count(void)
{
	//code
	global_count_mk = global_count_mk + 1;
	printf("Global Count = %d\n", global_count_mk);
}
