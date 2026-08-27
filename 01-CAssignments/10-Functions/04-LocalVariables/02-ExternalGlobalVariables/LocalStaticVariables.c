#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

// *** GLOBAL SCOPE ***

int main(void)
{
	// *** LOCAL SCOPE OF main() begins ***

	// variable declarations
	// 'a_mk' is a Local Variable. It is local to main() only.
	int a_mk = 5;

	//function prototypes
	void change_count(void);

	//code
	printf("\n");
	printf("A_mk = %d\n\n", a_mk);

	// local_count_mk is initialized to 0.
	// local_count_mk = local_count_mk + 1 = 0 + 1 = 1
	change_count();

	// Since, 'local_count_mk' is a local static variable of change_count(), it WILL
	// retain its value from previous call to change_count().
	// So local_count_mk is 1
	// local_count_mk = local_count_mk + 1 = 1 + 1 = 2
	change_count();

	// Since, 'local_count_mk' is a local static variable of change_count(), it WILL
	// retain its value from previous call to change_count().
	// So local_count_mk is 2
	// local_count_mk = local_count_mk + 1 = 2 + 1 = 3
	change_count();

	exit(EXIT_SUCCESS);
	// *** LOCAL SCOPE OF main() ends ***
}

// *** GLOBAL SCOPE ***

void change_count(void)
{
	// *** LOCAL SCOPE OF change_count() begins ***

	// variable declarations
	// 'local_count_mk' is a Local Static Variable. It is local to change_count() only.
	// It will retain its value between calls to change_count()
	static int local_count_mk = 0;

	//code
	local_count_mk = local_count_mk + 1;
	printf("Local Count_mk = %d\n", local_count_mk);

	// *** LOCAL SCOPE OF change_count() ends ***
}
