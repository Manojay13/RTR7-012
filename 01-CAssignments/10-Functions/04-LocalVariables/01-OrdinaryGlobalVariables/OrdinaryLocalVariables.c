#include <stdio.h>

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

	// Since, 'local_count_mk' is an ordinary local variable of change_count(), it
	// will NOT retain its value from previous call to change_count().
	// So local_count_mk is AGAIN initialized to 0
	// local_count_mk = local_count_mk + 1 = 0 + 1 = 1
	change_count();

	// Since, 'local_count_mk' is an ordinary local variable of change_count(), it
	// will NOT retain its value from previous call to change_count().
	// So local_count_mk is AGAIN initialized to 0
	// local_count_mk = local_count_mk + 1 = 0 + 1 = 1
	change_count();

	return(0);

	// *** LOCAL SCOPE OF main() ends ***
}

// *** GLOBAL SCOPE ***

void change_count(void)
{
	// *** LOCAL SCOPE OF change_count() begins ***

	// variable declarations
	// 'local_count_mk' is a Local Variable. It is local to change_count() only.
	int local_count_mk = 0;

	//code
	local_count_mk = local_count_mk + 1;
	printf("Local Count_mk = %d\n", local_count_mk);

	// *** LOCAL SCOPE OF change_count() ends ***
}
